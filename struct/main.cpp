# include <iostream>

using std :: cout;

struct Rectangle
{
    double length;
    double width;

};

double area (double length, double width )
{
    return length * width;

}


int main ()
{
    Rectangle myRectangle;
    
    myRectangle.length = 10;
    myRectangle.width = 10;

   cout << area(myRectangle.length,myRectangle.width) << std :: endl;
    return 0;

}