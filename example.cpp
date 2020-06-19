#include "example.h"

using namespace std;

Example::Example(int value1, int value2){
    a = value1;
    b = value2;
    cout << "Konstruktor" << endl;
}

Example::~Example(){
    cout << "Destruktor" << endl;
}

int Example::sum(){
    cout << "Dodawanie: " << a << " + " << b << " = " << a+b << endl;
    return a+b;
}