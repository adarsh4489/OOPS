
#include<iostream>
using namespace std;

class A{
private:
    int private_variable;
 
protected:
    int protected_variable;
 
public: 
//constructor
    A()
    {
        private_variable = 10;
        protected_variable = 99;
    }

// friend function declaration
friend class f;

 // friend function declaration
    friend void ff(A& obj);
};
 class f{
    public:
void display(A& temp)
{ 
    cout<<temp.private_variable<<endl;
    cout<<temp.protected_variable<<endl;
}
 };

  
// friend function definition
void ff(A& obj)
{
    cout << "Private Variable: " << obj.private_variable
         << endl;
    cout << "Protected Variable: " << obj.protected_variable;
}

int main()
{
   A obj1;
   f obj2;
   obj2.display(obj1);

   ff(obj1);
    return 0;
}