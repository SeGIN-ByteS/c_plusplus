# include <iostream>
    
    using std :: string;
    using std :: cout;
    using std :: endl;

class User
{
    public:
        string firstName;
        string secondName;

    User()
    {
        cout << "constructor" << endl;
    }
     
    User(string firstName, string secondName)
    {
        this-> firstName = firstName;
        this-> secondName = secondName;
        cout << "constructor" << endl;
    }
    ~ User()
    {
        cout << "kaboom " << endl;
    }
        
};

int main ()
{
    User userOne("segin","mathew");
    User userMe;
}