# include <iostream>

    using std :: cout;
    using std :: endl;
    using std :: string;

    

class User
{
    private:
        string status;
        static int UserCount;
        

    public:
        string firstName;
        string secondName;
    
        static int getUserCount()
        {
            return UserCount;
        }


    User()
    {
        UserCount++;
    }
    ~User()
    {
        UserCount--;
    }
};

    int User::UserCount = 0;

    
int main()
{
    User user1, user2, user3, user4;

    cout << User::getUserCount() << endl;

    user1.~User();

    cout << User::getUserCount() << endl;

}