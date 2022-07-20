# include <iostream>

    using std :: string;
    using std :: cout;
    using std :: endl;


class User
{   
    private:
        string _status;

    public:
        string firstName;
        string secondName;
        string thirdName;
    
  
    void setStatus (string user_status)
    {
        if (user_status == "gold" || user_status == "silver" || user_status == "platinum")
        {
            this-> _status = user_status; 
        }
    }
     
    string getStatus (void)
    {
        return _status;
    }

};

int main()
{
    User me;
    me.setStatus("platinum");

    cout << me.getStatus() << endl;
}