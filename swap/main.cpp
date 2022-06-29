# include<iostream>

using std :: cout;
using std :: endl;

void swap (int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << a << "\t" << b << endl;
}

int main()
{

    int x = 2, y = 3;
    swap(x,y);

    cout << x << "\t" << y << endl;


}