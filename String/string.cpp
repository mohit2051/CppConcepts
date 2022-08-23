#include<iostream>
#include<string>

int main()
{
    //declare a new string
    std::string s1;

    // unlike c-strings, they don't have to b a constant
    s1 = "Sample string";
    //print string 
    std::cout << s1 << std::endl;

    //declaring and initializing another string
    std::string s2= "New string";

    //swapping s1 and s2 strings
    s1.swap(s2);
    std::cout << "Swapped string s1 = " << s1 <<std::endl;
    std::cout << "Swapped string s2 = " << s2 <<std::endl;

    //replacing all the characters with 'm'
    for(int i = 0; i<s1.size(); i++)
    {
        s1.at(i) = 'm';
    }
    std::cout << s1 << std::endl;

    //printing out size and capacity of string
    std::cout << "Size = " << s1.size() << std::endl;
    std::cout << "Capacity = " << s1.capacity() << std::endl;

    //resize the string to 5 chracters and print size and capacity of the string
    s1.resize(5);
    std::cout << s1 << std::endl;
    std::cout << "Size = " << s1.size() << std::endl;
    std::cout << "Capacity = " << s1.capacity() << std::endl;

    //use shrink-to-fit to match the number of characters
    s1.shrink_to_fit();
    std::cout << s1 << std::endl;
    std::cout << "Size = " << s1.size() << std::endl;
    std::cout << "Capacity = " << s1.capacity() << std::endl;


    return 0;
}