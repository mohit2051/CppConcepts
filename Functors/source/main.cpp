#include<iostream>

/*
A function object allows an instance object of a class to be called or invoked as if it were an ordinary function.
In C++ this is carried out by overloading operator().
The main benefit of using function objects is that they are objects and hence can contain state,
either statically across all instances of the function objects or individually on a particular instance.

*/

//abstract base class
class FunctorBase {
    public:
        FunctorBase() {};
        virtual double operator() (double left, double right) = 0 ;
};

//derived class to add two doubles
class Add: public FunctorBase
{
    public:
    Add() {};
    virtual double operator() (double left, double right) { return left+right; }
};

//derived class to multiply two doubles
class Multiply : public FunctorBase
{
    public:
    Multiply() {};
    virtual double operator() (double left, double right) { return left*right; }
};

double binary_op(double left, double right, FunctorBase* bin_func)
{
    return(*bin_func)(left, right);
}

int main()
{
    double x = 2.0, y = 8.0;
    FunctorBase* pAdd = new Add();
    FunctorBase* pMultiply = new Multiply();

    std::cout << "Add: " <<binary_op(x, y, pAdd) << std::endl;
    std::cout << "Multiply: " <<binary_op(x, y, pMultiply) << std::endl;

    delete pAdd;
    delete pMultiply;

    return 0;

}