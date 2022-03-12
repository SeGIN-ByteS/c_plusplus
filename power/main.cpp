# include <iostream>
    using std :: cout;
    using std :: cin;
    using std :: endl;

void power (int base,int exponent);


int main (void)
{
    int base;
    cout << "base =  ";
    cin  >> base;
    int exponent;
    cout << "exponent =  ";
    cin  >> exponent;
    power(base,exponent);

}

void power (int base,int exponent)
{
    int power = 1 ;
    for(int i = 1; i < exponent+1; i++)
    {
        power = power * base;
    }
    
    cout << power << endl;
    cout << endl;
    cout << "test" << endl;
    
}
