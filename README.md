# 🟣 SFML Bounce Game

A **2D Bounce/Paddle Game** written in **C++20** using **SFML 3**, built with **CMake**.  

---

## 🧱 Project Structure

sfml-bounce-game/
├── assets/               # Textures, Fonts, and Audio
│   ├── background.png
│   ├── Montserrat-Light.ttf
│   ├── bounce.mp3
│   └── gameloop.mp3
├── include/              # Header files (.h / .hpp)
│   ├── Background.h
│   ├── Ball.h
│   ├── Game.h
│   ├── GameConfig.h
│   ├── GameSounds.h
│   ├── Paddle.h
│   ├── Random.h
│   └── Stats.h
├── src/                  # Source files (.cpp)
│   ├── Background.cpp
│   ├── Ball.cpp
│   ├── Game.cpp
│   ├── GameConfig.cpp
│   ├── GameSounds.cpp
│   ├── Main.cpp
│   ├── Paddle.cpp
│   ├── Random.cpp
│   └── Stats.cpp
└── CMakeLists.txt        # Build Configuration

## 🐧 Build & Run on Linux

### 1️⃣ Install SFML 3

Ubuntu/Debian:

```bash
sudo apt install libsfml3-dev
mkdir build
cd build
cmake ..
make
./BounceGame






## 🐧 Build & Run on Windows

mkdir build
cd build
cmake -G "MinGW Makefiles" ..
mingw32-make
BounceGame.exe
