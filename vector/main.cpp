# include <iostream>
# include <vector>

    using std :: vector;
    using std :: cout;
    using std :: endl;

int main()
{
    vector <int> data = {1,2,3,4};

    data.push_back(12);

    for(int i = 0; i < data.size(); i++)
    {
        cout << data[i] << "\t";
    }
    cout << endl;

    data.pop_back();

    for(int i = 0; i < data.size(); i++)
    {
        cout << data[i] << "\t";
    }
    cout << endl;

    
}