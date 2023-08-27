//static data members can be used without creating objects by using ::

// *******static member function ******

//there are 5 types of member functions: simple ,static, const,inline,friend
//static member functions me bhi object create krne ki jarurat ni hoti
//this keywords are not used in static member fucntions
// static member function can only access static data members
// All the member functions defined inside the class definition are by default declared as Inline.

#include<iostream>
using namespace std;
class hero
{
   public: 
   int health;
   string name;
   char level;

static int timeleft;    //static data member

static int random(){
    return timeleft;
    // cout<<this.health<<endl;    //this statement will not get executed as this is static member function (this keyword and non static data members are used)
   
}

   void print()
   {
    cout<<health<<endl;
   }

};
int hero::timeleft=5;      //initialized value to static data member

int main()
{

// hero h1;
// h1.print();  //default const

cout<<hero::timeleft<<endl;              //static data member accessed without creating any object
cout<<hero::random();
    return 0;
}
