#include<iostream>

/*
Using a virtual destructor makes sure that there is no memory leak that happens when the base clas pointer is assigned to derived class 
*/

class Base{
    public:
        Base()
        {std::cout <<"Base Constructor"<<std::endl;}
        virtual ~Base()
        {std::cout <<"Base Destructor"<<std::endl;}
};

class Derived : public Base{
    private:
        double value;
    public:
        Derived(const double& _value);
        //Derived() = default;
        virtual ~Derived();
};

//Constructor with a single parameter
Derived :: Derived(const double& _value)
{
    value=_value;
    std::cout <<"Derived Constructor"<<std::endl;
}
Derived :: ~Derived()
{
    value = 0;
    std::cout <<"Derived Destructor"<<std::endl;
}

int main()
{
    Base* p = new Derived(2.3);
    // Derived destructor is called
    delete p;
    return 0;
}