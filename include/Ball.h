#pragma once

#include <SFML/Graphics.hpp>
#include "Random.h"


using sf::CircleShape;
using sf::RenderWindow ;
using sf::Vector2f ;
using sf::FloatRect ;


class Ball {

    private:

    CircleShape _ball ;

    Vector2f _direction ;

    float _speed ;

    Random _random ;

    public:


    Ball();

    void Draw(RenderWindow& window)  ;

    void Move(float deltaTime);

    void Bounce() ;

    FloatRect getBounds() const ;

    Vector2f getDirection() const ;

    bool isOutside() const ; 

};
