#include <algorithm>
#include "../include/Game.h"
#include "../include/GameConfig.h"




using namespace sf ;
using namespace std ;




Game::Game() :
_window(VideoMode({gameConfig.windowSize.x, gameConfig.windowSize.y}) , "Bounce")
   {

    _window.setVerticalSyncEnabled(true);


   }


bool Game::isRunning() const {

    return _window.isOpen() ;

}


bool Game::checkIsOutside(const Ball& _ball)  {

    return _ball.isOutside() ;

}


void Game::handleLoseLives() {

        size_t old_size = _balls.size() ;

        _balls.erase(remove_if(_balls.begin(), _balls.end(), checkIsOutside),_balls.end());

        size_t missed_balls = old_size - _balls.size() ;

        if(missed_balls > 0) {
            _gameStats.setLives(_gameStats.getLives() - static_cast<int>(missed_balls));
        }
}

void Game::handleCollisions() {



    FloatRect paddleBounds = _paddle.getBounds() ;


        for(Ball& ball : _balls) {

         FloatRect ballBounds = ball.getBounds() ;

         bool isColliding = ballBounds.findIntersection(paddleBounds).has_value() ;


        if(isColliding && ball.getDirection().y > 0) {

           ball.Bounce() ;

          _gameStats.setScore(_gameStats.getScore() + 1);

          _sounds.PlayBounceSound() ;
       }


    }


}



void Game::ProcessEvents() {

    _window.handleEvents([this](const auto& event){

        this->handleEvent(event) ;

    });

}




void Game::Update() {

        float deltaTime = _clock.restart().asSeconds() ;


        if(_ballSpawnClock.getElapsedTime().asSeconds() > gameConfig.ballSpawnCooldown) {

            _balls.emplace_back(Ball());

            _ballSpawnClock.restart() ;
        }


        _paddle.Move(deltaTime);

        for(Ball&  ball : _balls) {
            ball.Move(deltaTime);
        }


        handleLoseLives() ;

        handleCollisions();


        if(_gameStats.getLives() <= 0) {
            Restart() ;
        }
}







void Game::Render() {


    _window.clear() ;

    _background.Draw(_window);

    _paddle.Draw(_window);

    for(Ball& ball : _balls) {
            ball.Draw(_window);
    }

    _gameStats.Draw(_window);

    _window.display();

}





void Game::handleEvent(const Event::Closed&) {

    _window.close() ;

}


void Game::Restart() {

    _balls.clear() ;
    _ballSpawnClock.restart() ;
    _gameStats.Reset() ;

}
