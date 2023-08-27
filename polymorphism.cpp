//polymorphism ability of a code to function in different way in different situations
// for analogy we can say that our father is husband of our mother, brother of his sister (one person is having different relations in different situtaions).

// polymorphism is of two types : 1> Compile time polymorphism (static)       2> Run time polymorphism (dynamic)
                                 
//   operator overloading ----------compile time polymorphism are of 2 types------------function overloading
// virtual functions in runtime polymorphism

// function overloading:
// we cant create 2 functions with same name in same class if we create we have to create it properly

//                                   **************
//     we have to pass peremeters different (if we pass pointer in one and array in another than both are  equivalent it will give error) 
//                                   ******************


#include<iostream> 
using namespace std;


//function overloading             
class student{
public: 
void speak()
{
    cout<<"hello Adarsh"<<endl;
}

void speak(string name)
{
    cout<<"hello"<<" "<<name<<endl;
}
};

int main()
{
 student s1;
 s1.speak();          //this will give error because both functions are having same name 
s1.speak("aman");

    return 0;
}