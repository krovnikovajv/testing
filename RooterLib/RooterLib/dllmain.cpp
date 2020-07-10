// dllmain.cpp : Определяет точку входа для приложения DLL.
#include "pch.h"
#include <cmath>
// constructor
CRooterLib::CRooterLib()
{
}

// Find the square root of a number.
double CRooterLib::SquareRoot(double v)
{
    double result = v;
    double diff = v;
    while (diff > result / 1000)
    {
        double oldResult = result;
        result = result - (result * result - v) / (2 * result);
        diff = abs(oldResult - result);
       
    }
    return result;
}
