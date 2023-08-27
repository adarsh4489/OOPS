//wraping up data members and data functions in a single entity is known as encapsulation 
//in fully encapsulated class all the data members are private
//encapsulation increases data security if we want we can make class read only
//helps in unit testing and code reusibility


# include<iostream>
using namespace std;

class students{
private:
string name;
int age;

public:
int getage()
{
    return this->age;
}
};

int main()
{
    students s1;
    cout<<"everything is fine"<<endl;
    // getage();     //gives error because age is private


    return 0;
}