#include <SFML/Graphics.hpp>
#include "../include/Game.h"




int main() {

    Game game ;


    while(game.isRunning()) {
        game.ProcessEvents();
        game.Update();
        game.Render();
    }



}
