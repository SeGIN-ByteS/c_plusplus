# include <iostream>
# include <string>

        using std :: cout;
        using std :: endl;
        using std :: string;

template < typename T >

void swap ( T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}

int main ()
{
    int num1 = 10;
    int num2 = 20; 
    cout << num1 << "\t" << num2 << "\t" << endl;
    
    swap(num1,num2);
    cout << num1 << "\t" << num2 << "\t" << endl;

    string firstName = "Ace";
    string secondName = "Luffy";
    cout << firstName << "\t" << secondName << "\t" << endl;

    swap(firstName,secondName);
    cout << firstName << "\t" << secondName << "\t" << endl;
    
    return 0;
}