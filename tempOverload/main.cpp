# include <iostream>


    using std :: cout;
    using std :: endl;


template < typename T >

void swapArray ( T arr1 [], T arr2 [], T size)
{
    for (int i = 0; i < size; i++)
    {
        T temp = arr1 [i];
        arr1 [i] = arr2 [i];
        arr2 [i] = temp;

    }
}

template <typename T>

void swapArray (T arr [], T size)
{
    size = size / 2;

    for (int i = 0; i < size; i++)
    {
        int j = 9 - i;
        T temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}


void printArray ( int array [], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array [i] << "\t";
    }
    cout << endl;
    
}

int main ()
{
    int ary1 [] = {0,1,2,3,4,5,6,7,8,9};
    // int ary2 [] = {9,8,7,6,5,4,3,2,1,0};

    swapArray (ary1,10);

    printArray(ary1,10);
    // printArray(ary2,10);
    
}