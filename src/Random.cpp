#include "../include/Random.h"


using namespace std ;


Random::Random() {

     random_device device ;

    _generator.seed(device());

}




int Random::getInt(int min_int , int max_int) {

    return  uniform_int_distribution(min_int,max_int)(_generator);

}


float Random::getFloat(float min_float , float max_float) {

        return  uniform_real_distribution(min_float,max_float)(_generator);

}
