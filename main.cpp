#include <iostream>
#include "example.h"
#include "float_compare.h"

using namespace std;

int main(){
    Example e(1,2);

    e.sum();

    is_equal(3.4444555, 3.4444555);
}