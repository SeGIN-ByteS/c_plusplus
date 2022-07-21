# include <iostream>
    
    using std :: istream;
    using std :: ostream;
    using std :: cout;
    using std :: cin;
    using std :: endl;

class Posistion
{

    private:
        
        int DOF = 3;

    public:

        int x = 10;
        int y = 20;

        Posistion operator + (Posistion pos)
        {
            Posistion newPos;

            newPos.x = x + pos.x;
            newPos.y = y + pos.y;
            

            return newPos;
        }

        bool operator == (Posistion pos)
        {
            if( x == pos.x  &&  y == pos.y)
            {
                return true;
            }
            return false;
        }

        friend void get_DOF(Posistion pos);
   
};

    void get_DOF(Posistion pos)
    {
        cout << pos.DOF << endl;
    }


    ostream& operator << (ostream& output, Posistion pos)
    {
        output << pos.x << "\t" << pos.y;
        return output;
    }

    istream& operator >> (istream& input, Posistion &pos)
    {
        cout << "enter your X pos : ";
        input >> pos.x;
        
        cout << "enter your Y pos : ";
        input >> pos.y;

        return input;
    }


int main()
{
    Posistion posOne,posTwo,posThree;
    // posThree = posOne + posTwo;

    // if( posOne == posTwo )
    // {
    //     std :: cout << "equal" << std :: endl ;
    // }

    // cin >> posOne ;

    //  std :: cout << posOne << std :: endl;

    get_DOF(posOne);


}