# ifndef USER  // pre processor derctive 

# define USER

    using std :: endl;
    using std :: string;
    using std :: cout, std :: cin;
    using std :: ostream, std:: istream;
    

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

        string getStatus(void);     
        void setStatus(string status);     

        static int getUserCount();         

        friend ostream& operator << (ostream& output, User &user);      
        friend istream& operator >> (istream& input, User &user);

};

static int userCount = 0;

# endif