//when base class copies object from derived class then it do not copy data memers of derived class

#include<iostream>
using namespace std;

class A{

public :
int a=10;
int b=10;

void display()
{
    cout<<"class A"<<a<<b<<endl;
}

};

class B : public A{
int c=20;
void show()
{
    cout<<a<<b<<c<<endl;
}
};
int main()
{
 
 B obj1;
 A obj2=obj1;

 cout<<sizeof(A);

    return 0;
}