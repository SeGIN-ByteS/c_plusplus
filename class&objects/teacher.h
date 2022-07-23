#ifndef TEACHER_H

# define TEACHER_H

# include "user.h"

class Teacher : public User
{
    public :

        vector < string > classteaching;
        void output();

};




#endif