//private data member of any class can't be inherited     **important 
// there are 4 types of inheritance : single inheritance, multiple inheritance, multilevel inheritance, hybrid,hierarchical inheritance. 
 


//below code is example of single inheritance
# include<iostream>
using namespace std;

// parent class
class human{

    public:
    int age;
    string name;
    int height;

    public:
    void setdetails()
    {
        this->age=24;
        this->height=180;
        this->name="Adarsh";
    }

    void getdetails(){
        cout<<"age"<<" "<<this->age<<endl;
        cout<<"height"<<" "<<this->height<<endl;
        cout<<"name"<<" "<<this->name<<endl;
    }

};
 
//  child class ||  inherited class 
// syntax:
// class child_classname: mode parent_classname


class male: public human{     
 public:
 int salary;

void details()
{
    cout<<"males are heavy"<<endl;
}

};

int main()
{
    male obj;         //child object
    obj.setdetails();

    obj.getdetails();
    return 0;
}