# include <iostream>
# include <string>

    using std :: string;
    using std :: cout;
    using std :: endl;


struct User
{
    string firstName;
    string secondName;
    string thirdName;
    
    string getStatus()
    {
        
        membership = "gold";
        return membership;
    }

    private:
        string membership;

};

int main()
{
    User userOne;

    userOne.firstName = "Monkey";
    userOne.secondName = "D";
    userOne.thirdName = "Luffy";
    

    cout << userOne.getStatus() << endl;
    
}