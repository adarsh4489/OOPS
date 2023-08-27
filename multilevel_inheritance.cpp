//In multilevel inheritance parent class is accesed by its child class and another class which is child class of second class access the super parent class , ie: Parent class--> child class(parent class for upcoming child class)-->child class(this class acess the parent class data members then its known as multilevel inheritance) 

//below code is example of multilevel inheritance 
# include<iostream>
using namespace std;

// parent class
class animals{

    public:
    int weight;
    string colour;
     
     public: 
     void speak()
     {
        cout<<"speaking"<<endl;
     }
};

//child class
class dog: public animals{

public:
string name;

};

// grandchild class
class labrador: public dog{

};

int main()
{
    labrador first;
    first.speak();
    return 0;
}