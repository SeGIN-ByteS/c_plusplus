# include <iostream>
# include <vector>

int main ()
{

// Iterating over whole array
    std::cout << "iterating over whole array\n";
    std::vector <int> v = {0, 1, 2, 3, 4, 5};
    for(auto i : v)
        std::cout << i << "\t";
        std::cout << '\n';

// the initializer may be a braced-init-list
    std::cout << "iterating in braced-init-list\n";
    for(int n : {0,1,2,3,4,5})
        std::cout << n << "\t" ;
        std::cout << '\n';

// Iterating over array
    std::cout << "Just looping in a array\n";
    int a[] = {0, 1, 2, 3};
    for(int n : a)
        std::cout << n << "\t";
        std::cout << '\n';    

// Printing string char
    std::cout << "printing string char\n";
    std::string str = "Geeks";
    for (char c : str)
        std::cout << c << "\t";
        std::cout << '\n';


}