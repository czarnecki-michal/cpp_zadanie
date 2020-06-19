#include "float_compare.h"

bool is_equal(float value1, float value2){
    float precision = 0.0001f;
    float diff = abs(value1 - value2);

    if(diff < precision){
        cout << "Liczby sa rowne" << endl;
        return 1;

    }else{
        cout << "Liczby nie sa rowne" << endl;
        return 0;
    }
}