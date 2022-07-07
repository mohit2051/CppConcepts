/*
    These are a feature of the C language and so form part of the C++ standard. 
    A function pointer allows a pointer to a function to be passed as a parameter to another function.
*/


#include<iostream>

double add(double left, double right)
{
    return left+right;
}

double multiply(double left, double right)
{
    return left*right;
}

double binaryOperation(double left, double right, double (*f)(double, double))
{
    return (*f)(left, right);
}

int main() 
{
    double x = 2.0 ,y = 8.0;

    std::cout << "Add : " << binaryOperation(x, y, add) << std::endl;
    std::cout << "Multiply : " << binaryOperation(x, y, multiply) << std::endl;

    return 0;
}