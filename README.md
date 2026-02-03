# 🟣 SFML Bounce Game

<p align="left">
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/cplusplus/cplusplus-original.svg" alt="C++" width="50" height="50"/>
  <img src="https://www.sfml-dev.org/images/logo.png" alt="SFML" width="150" height="150"/>
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/cmake/cmake-original.svg" alt="CMake" width="50" height="50"/>

</p>

A **2D Bounce/Paddle Game** written in **C++20** using **SFML 3**, built with **CMake**.  

---

### 🧱 Project Structure

```text
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
└── CMakeLists.txt         # Build Configuration

```
# Linux Installation

## 1. Install dependencies
```text
sudo apt update
sudo apt install build-essential cmake libsfml-dev git
```

## 2. Clone the project
```text
git clone <your-repo-url> sfml-bounce-game
cd sfml-bounce-game
```

## 3. Build the project and run the Game 
```text
mkdir build
cd build
cmake ..
make
./sfml-bounce-game
```


# Windows Installation

## 1. Install dependencies (example for MSYS2/MinGW)
```text
pacman -Syu
pacman -S mingw-w64-x86_64-gcc mingw-w64-x86_64-cmake mingw-w64-x86_64-sfml git
```
## 2. Clone the project
```text
git clone https://github.com/Josef8852/sfml-bounce-game sfml-bounce-game
cd sfml-bounce-game
```
## 3. Create build directory
```text
mkdir build
cd build
```

## 4. Configure , build and run
```text
cmake ..
cmake --build . --config Release
./sfml-bounce-game.exe
```



