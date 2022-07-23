
# include "user.h"
# include "teacher.h"


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

void User :: output()
{
    cout << "i am a user\n";
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

