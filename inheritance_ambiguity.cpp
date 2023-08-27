

# include<iostream>
using namespace std;

class dogs{

    public:
     
     public: 
     void speak()
     {
        cout<<"barking"<<endl;
     }
};
class humans{
    public:
     
     public: 
     void speak()
     {
        cout<<"speaking"<<endl;
     }
};

class temp:public humans, public dogs{

};

int main()
{
    temp a;
    // a.speak();          //here speak function is availiable in both dogs and human class so compiler is unable to get where to run this function  that's why this will show error,to overcome this error

    //now we will call the function with using :: 
    a.humans::speak(); 
    a.dogs::speak();

    return 0;
}