#pragma once

#include <random>

using std::mt19937;


class Random {


    private :

    mt19937 _generator ;

    public :

    Random() ;

    int getInt(int int_min , int int_max);

    float getFloat(float float_min , float float_max) ;


};
