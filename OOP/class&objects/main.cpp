# include <iostream>
# include <string>

    using std :: string ;
    using std :: cout;
    using std :: endl;

class User
{
    string status;

    public:
        string firstName;
        string secondName;
        string thirdName;

        string getStatus()
        {
            status = "gold";
            return status;
        }
};


int main ()
{
    User userOne;

    userOne.firstName = "monkey";
    userOne.secondName = "D";
    userOne.thirdName = "luffy";

    cout << userOne.getStatus() << endl;


}