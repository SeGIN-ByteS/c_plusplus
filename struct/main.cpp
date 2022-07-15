# include <iostream>

using std :: cout;
using std :: endl;

struct Rectangle
{
    double length;
    double width;
};

double area (double length, double width)
{
    return length * width;
}
double area (double length)
{
    return length * length;
}

double pow (double base, int pow = 2)
{
    int total = 1;

    for (int i = 0; i < pow; i++ )
    {
        total = total * base;
    }
    return total;
}


int main ()
{
    // Rectangle myRectangle;
    // myRectangle.length = 2;
    // myRectangle.width = 10;
    // cout << area(myRectangle.length) << endl;

    cout << pow(3,3) << endl;
    return 0;

}