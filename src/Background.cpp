#include "../include/Background.h"

using namespace sf;

Background::Background() :
_texture("assets/background.png") ,
_sprite(_texture)
{



}



void Background::Draw(RenderWindow& window) {

    window.draw(_sprite) ;

}
