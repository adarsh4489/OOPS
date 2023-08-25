//classes are userdefined datatype
//here inthis code hero is userdefined data type
//** empty class me 1 byte ki memory allocate hoti h 
// by default access modifiers in a class is private
// we can access these private values by getter and setter


#include<iostream>
using namespace std;
class hero{       

public:   //acess specifier
//data member
string name;            
int health ;            
char level;

// getter
string get_name()
{
    return name;
}

char get_level()
{
    return level;
}

char get_health()
{
    return health;
}

// setter
void setname(string n)
{
    name=n;
}
void setlevel(char n)
{
    level=n;
}
void sethealth(int h)
{
    health=h;
}

};
int main()
{
     //creation of object statically
//   hero h1;  
//   h1.sethealth(55);
//   cout<<(int)h1.get_health()<<endl;

//   dynamic allocation of object 
hero *h = new hero;             
   cout<<h->get_health()<<endl;
   cout<<h->get_health()<<endl;

    return 0;
}