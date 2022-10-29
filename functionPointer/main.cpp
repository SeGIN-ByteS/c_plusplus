# include <iostream>

void helloWorld(int val)
{ 
    std::cout << "helloWorld" << val << std::endl;
}

int main(void){

    // typedef void(*Fptr)(int);
    // Fptr function = helloWorld; // using typedef to make life easy
    
    // void(*function)() = helloWorld; // actual Type for function pointer
    auto function = helloWorld;  // easy way to make a function pointer

    function(1);
    function(2);
}