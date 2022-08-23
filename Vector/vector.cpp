// Here we will see how vectors works in C++

#include<iostream>
#include<vector>

void print_vector(std::vector<int> &v)
{
    for(int i=0; i<v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    //declaring a vector that expands with integers
    std::vector<int> v1;

    for(int i = 0; i<10; i++)
    {
        //adding values in vector
        v1.push_back(i);
    }

    //printing the vector
    print_vector(v1);

    //print the first element
    std::cout<< "First element = " << v1.front() << std::endl;

    //print the last element
    std::cout<< "Last element = " << v1.back() << std::endl;

    //print first-element using array-like indexing
    std::cout<< "First element using array-like indexing = " << v1[0] << std::endl;

    //clearing the vector and printing size
    v1.clear();
    std::cout<<"Cleared vector size = " << v1.size() <<std::endl;

    //resize the vector and print size and vector
    v1.resize(10);
    std::cout << "Resized vector size = " << v1.size() <<std::endl;
    print_vector(v1);

    //reinitialize the vector
    for(int i=0; i<10; i++)
    {
        //expanding the vector
        v1.at(i) = i;
    }

    //insert into vector before a chosen position
    v1.insert(v1.begin() + 4, 5);
    print_vector(v1);

    //erase an element in the vector given at a specific position
    v1.erase(v1.begin() + 4);
    print_vector(v1);

    //erase the end element
    v1.pop_back();
    print_vector(v1);

    return 0;

}