// Example.h
#ifndef EXAMPLE_H
#define EXAMPLE_H

#include<iostream>

class Example{
private:
    int a, b;
public:
    Example(int value1, int value2);
    ~Example();
    int sum();
};

#endif