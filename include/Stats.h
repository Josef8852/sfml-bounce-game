#pragma once

#include <SFML/Graphics.hpp>

using sf::Text;
using sf::Font;
using sf::RenderWindow;

class Stats {


    private :

    Font _font ;

    Text _scoreText ;

    Text _livesText ;

    Text _highScoreText ;

    int _currentScore ;

    int _currentLives ;

    int _highScore ;


    public :

    Stats() ;


    void Draw (RenderWindow& window)  ;

    void setScore(int score) ;

    void setLives(int lives) ;

    void setHightScore(int highScore) ;

    int getScore() const ;

    int getLives() const ;

    int getHighScore() const ;


    void Reset() ;



};
