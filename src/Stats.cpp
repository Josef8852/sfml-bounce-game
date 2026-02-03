#include "../include/Stats.h"
#include "../include/GameConfig.h"


using namespace sf ;
using namespace std ;


Stats::Stats() : _font("assets/Montserrat-Light.ttf") ,
                 _scoreText(_font),
                 _livesText(_font),
                 _highScoreText(_font)
{

    _scoreText.setPosition({10,10});
    _scoreText.setFillColor(Color::Cyan);
    setScore(0);

    _livesText.setPosition({10,60});
    _livesText.setFillColor(Color::Red);
    setLives(gameConfig.startingLives);


    _highScoreText.setPosition({10,110});
    _highScoreText.setFillColor(Color::Yellow);
    setHightScore(0);


}


void Stats::Draw(RenderWindow& window) {

    window.draw(_scoreText);
    window.draw(_livesText) ;
    window.draw(_highScoreText);

}


void Stats::setScore(int score) {

    _currentScore = score ;

    _scoreText.setString("Score : " + to_string(_currentScore));


}


void Stats::setLives(int lives) {

    _currentLives = lives ;

    _livesText.setString("Lives : " + to_string(_currentLives));

}


int Stats::getScore() const {

    return _currentScore ;

}


int Stats::getLives() const {

    return _currentLives ;

}


void Stats::Reset() {

    if(_currentScore > _highScore) {

        setHightScore(_currentScore);
    }

    setScore(0) ;
    setLives(gameConfig.startingLives) ;

}


void Stats::setHightScore(int highScore) {

    _highScore = highScore ;

    _highScoreText.setString("High : " + to_string(_highScore));

}


int Stats::getHighScore() const {

    return _highScore ;

}
