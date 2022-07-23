
# include "user.h"
# include "teacher.h"


int main()
{
    // User user,user1,user2,user3,user4;

    // // cin >> user;

    // Teacher teacher1;

    // teacher1.firstName = "Donald";
    // teacher1.secondName = "Ervin";
    // teacher1.lastName = "Knuth";

    // user.firstName = "Monkey";
    // user.secondName = "D";
    // user.lastName = "Luffy";


    // cout << teacher1 << endl;

    // cout << user << endl;

    // cout << User :: getUserCount() << endl;

    User u1;
    Teacher teacher;

    User& u = teacher;
    u1.output();
    u.output();

}


