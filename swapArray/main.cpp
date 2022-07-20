# include <iostream>

    using std :: cout;
    using std :: endl;

int main()
{
    int array[] = {1,2,3,4,5,6,7,8,9,0};
    
    for (int i = 0; i < 5; i++)
    {
        int j = 9 - i;
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }


    for (int k = 0; k < 10; k++)
    {
        cout << array[k] << "\t";
    }
     cout << endl;
}
