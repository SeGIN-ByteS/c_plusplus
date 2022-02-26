# include <iostream>
# include <math.h>

    using std :: cout;
    using std :: cin;
    using std :: endl;

int main(void)
{
    int base;
    cout << "enter base number" << endl;
    cin >> base;
    int exponent;
    cout << "enter exponent of number " << endl;
    cin >> exponent;

    double power = pow(exponent,base);
    cout << power << endl;

    
}