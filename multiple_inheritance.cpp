//In multiple inheritance one class can inherit properties from one or more than one classes

//below code is example of multiple inheritance 

# include<iostream>
using namespace std;

// first class
class animals{

    public:
    int weight;
    string colour;
     
     public: 
     void bark()
     {
        cout<<"barking"<<endl;
     }
};

//second class
class human{

public: 
void speak()
{
    cout<<"speaking"<<endl;
}
};

//multiple inherited class
class hybrid: public human, public animals{

};

int main()
{
    hybrid first;
    first.speak();
    first.bark();
    return 0;
}