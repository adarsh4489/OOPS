// this is basically a type of inheritance where we will see all other inheritance at one place one class will inherit properties from one or more class including multilevel inheritenace (ie two or more type of inheritance will be applied at one place)


//below code is the example of hybrid inheritance
#include<iostream>
using namespace std;
class A{
    public:
    void func1(){
        cout<<"this is function 1 of class A"<<endl;
    }
};

//single inheritance
class B: public A{
    public:
    void func2(){
        cout<<"this is function 2 of class B"<<endl;
    }
};

class C{
    public:
    void func3(){
        cout<<"this is function 3 of class C"<<endl;
    }
};

// multiple inheritance
class D: public B, public C{
    public:
    void func4(){
        cout<<"this is function 4 of class D"<<endl;
    }
};

int main()
{
    A obj1;
    obj1.func1();

    B obj2;
    obj2.func1();
    obj2.func2();

    D obj4;
    obj4.func1();
    obj4.func2();
    obj4.func3();
    obj4.func4();
        
    return 0;
}