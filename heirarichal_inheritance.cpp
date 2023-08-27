// In this one class act as parent class for one or more than one classes

//below code is example of multiple inheritance
#include<iostream>
using namespace std;

class A{
public:
void func1()
{
    cout<<"function 1 is called"<<endl;
}
} ;

// creating class B which will inherit property of A class
class B: public A{
public:
void func2()
{
    cout<<"function 2 is called"<<endl;
}
} ;

// creating class C which will inherit property of A class
class C: public A{
public:
void func3()
{
    cout<<"function 3 is called"<<endl;
}
} ;


int main()
{
    A obj1;
    obj1.func1();

    B obj2;
    obj2.func1();
    obj2.func2();

    C obj3;
    obj3.func1();
    // obj3.func2();          //this will give error as obj3 cant access function 2
    obj3.func3();


    return 0;
}