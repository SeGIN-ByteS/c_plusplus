# include <iostream>
# include <string>
# include <vector>

    using std :: vector;
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
    
    cout << userOne.firstName << endl;


}