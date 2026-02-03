#pragma once

#include <SFML/Graphics.hpp>

using sf::Vector2f ;

struct GameConfig {

    Vector2f  windowSize ;
    Vector2f paddleSize ;
    float paddleSpeed ;
    float ballRadius ;
    float ballSpeed ;
    float ballSpawnCooldown;
    float musicVolume ;
    float bounceSoundVolume ;
    int startingLives ;

    GameConfig() ;

};


inline const GameConfig gameConfig ;
