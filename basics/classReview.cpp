#include <iostream>
using namespace std;

#define NAME_SIZE 50 // Defines a macro 
class Person {
    int id;
    char name [NAME_SIZE];
    // Person(int a): id(a){
    //     // The data member id is assigned before the ctual object is created 
    //     // and before the actual object is created and before the remainder 
    //     // of the constructor code is called. 
    // }


    public:
    virtual void aboutMe() = 0;
    virtual ~Person(){
        cout << "deleting virtual person" <<endl;
    }
};

class Student : public Person {
    public:
    void aboutMe(){
        cout << "I am a student" <<endl;
    }
    ~Student(){
        cout <<"Virtual destructor being called" <<endl;
    }
};

int main(){
    Person * p = new Student ();
    Student * p2 = new Student ();

    p->aboutMe();
    p2->aboutMe();
    delete p;
    return 0;
}