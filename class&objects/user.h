# ifndef USER  // pre processor derctive 

# define USER

# include <iostream>
# include <ostream>
# include <istream>
# include <vector>


    using std :: cout;
    using std :: cin;
    using std :: endl;
    using std :: vector;
    using std :: string;
    using std :: ostream;
    using std :: istream;
    

class User
{
    private:

        string userStatus;


    public:

        string firstName;
        string secondName;
        string lastName;

        User();
        ~User();
        virtual void output ();
        string getStatus(void);     
        void setStatus(string status);     

        static int getUserCount();         

        friend ostream& operator << (ostream& output, User &user);      
        friend istream& operator >> (istream& input, User &user);

};

static int userCount = 0;

# endif