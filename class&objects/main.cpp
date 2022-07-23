# include <iostream>
# include "user.h"

    using std :: cout;
    using std :: cin;
    using std :: endl;

int main()
{
    User user,user1,user2,user3,user4;

    user.firstName = "Monkey";
    user.secondName = "D";
    user.lastName = "Luffy";
    user.setStatus("gold");

    cin >> user;
    cout << user << endl;
    
    // cout << user.getStatus() << endl;
    // cout << User :: getUserCount() << endl;


    
    
}



// TODO constructors and deconstructors
// TODO friend functions
// TODO getters and setters
// TODO static data


