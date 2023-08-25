//constructors are called by default when we declare an object
//constructors are of 3 types default,parameterized,copy constructor

#include<iostream>
using namespace std;
class hero
{
   public: 
   int health;
   string name;
   char level;
   void print()
   {
    cout<<health<<endl;
   }

// default constructor
hero(){
    cout<<"Default constructor is called"<<endl;
    health=30;
}

// parameterizes constructor
hero(int health){
    cout<<"paremeterised constructor is called"<<endl;
    this->health=health;
}

// coppy constructor
 hero(hero &temp)
 {
    this->health=temp.health;
    this->level=temp.level;
    cout<<"coppy constructor is called"<<endl;
 }

};

int main()
{

hero h1;
h1.print();  //default const

hero h2(60);
h2.print();           //parameterised const

hero cp(h2);
cp.print();   //coppy constr


    return 0;
}