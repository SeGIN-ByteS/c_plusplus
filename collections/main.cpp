# include <iostream>

        using std :: cout;
        using std :: endl;

namespace utilz
{

    void printArray(int data [], int size)
    {
        for (int i = 0; i < size; i++)
        {
            cout << data [i] << "\t";
        }
        cout << endl;
    }
 
}



int main() 
{
    int array [] = {1,2,3,4,6,8,0,9};
   utilz :: printArray(array,8);
}