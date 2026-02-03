#include "../include/Ball.h"
#include "../include/GameConfig.h"



using namespace sf ;
using namespace std ;




Ball::Ball() {


     _speed = gameConfig.ballSpeed ;

     _ball.setRadius(gameConfig.ballRadius);
     _ball.setOrigin(_ball.getGeometricCenter());
     _ball.setFillColor(Color::Cyan);
     _ball.setPosition({gameConfig.windowSize.x*0.5f , gameConfig.windowSize.y*0.25f});


     _direction = {1, degrees(_random.getFloat(0,360))};



}


void Ball::Draw(RenderWindow& window)  {

    window.draw(_ball);

}



void Ball::Move(float deltaTime) {

        _ball.move(_direction *_speed * deltaTime);

        float ballRadius = _ball.getRadius() ;

        Vector2f lastPosition = _ball.getPosition() ;


        if(_ball.getPosition().x < _ball.getRadius() || _ball.getPosition().x >= gameConfig.windowSize.x - _ball.getRadius()) {
            _ball.setPosition(lastPosition);
            _direction.x *= -1 ;
        }


        if(_ball.getPosition().y < ballRadius) {

            _ball.setPosition(lastPosition);

            _direction.y *= -1 ;

        }

}


FloatRect Ball::getBounds() const {

    return _ball.getGlobalBounds();

}


Vector2f Ball::getDirection() const {

    return _direction ;

}

void Ball::Bounce() {

    _direction.y *= -1 ;

}


bool Ball::isOutside() const {

    return _ball.getPosition().y - _ball.getRadius() > gameConfig.windowSize.y ;


}
