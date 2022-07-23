# include <iostream>
# include "user.h"

    using std :: string;
    using std :: cout, std :: endl, std :: cin;
    using std :: istream, std :: ostream;


User :: User()
{
    userCount++;
}

User :: ~User()
{
    userCount--;
}

int User :: getUserCount()
{
    return userCount;
}

void User :: setStatus(string status)
{
    if (status == "gold" || status == "silver" 
        || status == "platinum" )
    {
        userStatus = status;
    }

}

string User :: getStatus(void)
{
    return userStatus;
}

ostream& operator << (ostream& output, User &user)
{
    output << user.firstName << " " << user.secondName << " " << user.lastName;
    output << "\n" << user.userStatus;

    return output;
} 

istream& operator >> (istream& input, User &user)
{
    cout << "Enter your Name : ";
    input >> user.firstName >> user.secondName >> user.lastName;
    cout << "Enter your status : ";
    input >> user.userStatus;

    return input;
}

