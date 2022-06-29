# include <iostream>
# include <string>

    using std :: cout;
    using std :: endl;
    using std :: string;



void swap (int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << a << "\t" << b << endl;
}

void swap (string &a, string &b)
{
    string temp = a;
    a = b;
    b = temp;

    cout << a << "\t" << b << endl;

}

int main()
{

    int a = 2, b = 3;
    swap(a,b);
    cout << a << "\t" << b << endl;

    string x = "luffy", y = "zoro";
    swap(x,y);

    cout << x << "\t" << y << endl;


}