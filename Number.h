#pragma once
#include <iostream>
#include <sstream>
using namespace std;

#ifdef NUMBERDLL_EXPORTS
#define NUMBER_API __declspec(dllexport)
#else
#define NUMBER_API __declspec(dllimport)
#endif

class NUMBER_API Number {
public:
    float full;
    double last;

    Number();
    Number(float f);
    Number(float f, double l);
    Number(const Number& other);

    void Read();
    void Display();
    string toString();
};
