#pragma once

#include <SFML/Graphics.hpp>

using sf::RectangleShape;
using sf::RenderWindow ;
using sf::FloatRect ;


class Paddle {


    private :

    RectangleShape _paddle ;

    float _speed ;


    public :


    Paddle() ;


    void Draw(RenderWindow& window)  ;

    void Move(float deltaTime) ;

    FloatRect getBounds() const ;

};
