#include "../include/GameSounds.h"
#include "../include/GameConfig.h"




GameSounds::GameSounds() :
_music("assets/gameloop.mp3") ,
_bounceSoundBuffer("assets/bounce.mp3"),
_bounceSound(_bounceSoundBuffer)
{

        _music.setVolume(gameConfig.musicVolume) ;
        _music.setLooping(true) ;
        _music.play() ;

        _bounceSound.setVolume(gameConfig.bounceSoundVolume) ;


}



void GameSounds::PlayBounceSound() {

    _bounceSound.play() ;

}
