#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include "Paddle.h"
#include "Ball.h"
#include "Stats.h"
#include "GameSounds.h"
#include "Background.h"


using sf::RenderWindow;
using sf::Event ;
using sf::Clock ;
using std::vector ;


class Game {


private:

  RenderWindow _window;

  Paddle _paddle ;

  vector<Ball> _balls ;

  Clock _clock ;

  Clock _ballSpawnClock ;

  Stats _gameStats ;

  GameSounds _sounds ;

  Background _background ; 

public:

  Game();

  bool isRunning() const;

  void Render();

  void ProcessEvents() ;

  void Update();

  static bool checkIsOutside(const Ball& _ball)  ;

private:

    void handleCollisions() ;
    void handleLoseLives();
    void Restart() ;

    template <typename T>
    void handleEvent(const T&){}
    void handleEvent(const Event::Closed&) ;



};
