# include <iostream>
# include <vector>

    using std :: vector;
    using std :: cout;
    using std :: endl;

void printVector(vector < int > data)
{
    for (int i = 0; i < data.size(); i++)
    {
        cout << data[i] << "\t" ;
    }
    cout << endl;
}


int main ()
{
    vector < int > data = {1,2,3,4,5,6};

    printVector(data);

}