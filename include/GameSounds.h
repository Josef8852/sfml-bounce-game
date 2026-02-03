#pragma once

#include <SFML/Audio.hpp>


using sf::Music ;
using sf::Sound ;
using sf::SoundBuffer ;


class GameSounds {

    private :

    Music _music ;

    SoundBuffer _bounceSoundBuffer ;

    Sound _bounceSound ;

    public :


    GameSounds() ;


    void PlayBounceSound() ;

};
