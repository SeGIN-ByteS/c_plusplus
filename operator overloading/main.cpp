# include <iostream>


class Posistion
{
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

};

int main()
{
    Posistion posOne,posTwo,posThree;

    posThree = posOne + posTwo;

    if( posOne == posTwo )
    {
        std :: cout << "equal" << std :: endl ;
    }

    std :: cout << posThree.x << "\t" << posThree.y << std :: endl;
}