#pragma once



#include <SFML/Graphics.hpp>

using sf::RenderWindow ;
using sf::Texture ;
using sf::Sprite ;

class Background {


    private :

    Texture _texture ;

    Sprite _sprite ; 


    public  :

    Background() ;

    void Draw(RenderWindow& window)  ;

};
