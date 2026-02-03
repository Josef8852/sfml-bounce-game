#include <algorithm>
#include "../include/Paddle.h"
#include "../include/GameConfig.h"



using namespace sf ;
using namespace std ;





Paddle::Paddle() {


    _speed = gameConfig.paddleSpeed ;

    _paddle.setSize({gameConfig.paddleSize.x,gameConfig.paddleSize.y});
    _paddle.setFillColor(Color::Green);
    _paddle.setOrigin(_paddle.getGeometricCenter());
    _paddle.setPosition({gameConfig.windowSize.x*0.50f,gameConfig.windowSize.y*0.85f});


}


void Paddle::Draw(RenderWindow& window)  {


        window.draw(_paddle);


}



void Paddle::Move(float deltaTime) {




    if(Keyboard::isKeyPressed(Keyboard::Key::Right)) {

                _paddle.move({_speed*deltaTime,0});
      }


    if(Keyboard::isKeyPressed(Keyboard::Key::Left)) {

             _paddle.move({-_speed*deltaTime , 0});

    }

        float halfWidth = _paddle.getSize().x / 2 ;


        float x_border = clamp(_paddle.getPosition().x , halfWidth , gameConfig.windowSize.x - halfWidth);

        _paddle.setPosition({x_border , _paddle.getPosition().y});


}


FloatRect Paddle::getBounds() const {

        return _paddle.getGlobalBounds() ;
}
