#include <iostream>
#include <vector>

void printIt (int val)
{
    std::cout << "Value: " << val << std::endl;
}

void squarIt( int val)
{
    std::cout << "squar is: " << val * val << std::endl;
}


void ForEach(std::vector <int> &victor, void(*func)(int val))
{
    for(auto i : victor)
        func(i);
}


int main (void)
{
    std::vector <int> victor = {0,1,2,3,4,5,6};
    ForEach(victor,printIt);
}