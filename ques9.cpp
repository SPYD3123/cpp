#include <iostream>
using namespace std;
class Person
{
private:
    string name;
public:
    Person(string a){
        name=a;
    }
    string getname(){
        return name;
    }
    virtual void display(){};

};

class Student :public Person
{
private:
    string course;
    int year, marks;
public:
    Student(int a, int b, string c, string d):Person(d){
        course=c;
        year=b;
        marks=a;
    }
    void display(){
        cout<<"Student"<<endl;
        cout<<"Name:- "<<getname()<<endl;
        cout<<"Marks:- "<<marks<<endl;
        cout<<"Year:- "<<year<<endl;
        cout<<"Course:- "<<course<<endl;
    }

};

class Employee :public Person
{
private:
    string department;
    int salary;
public:
    Employee(int a, string c, string d):Person(d){
        department=c;
        salary=a;
    }
    void display(){
        cout<<"Employee"<<endl;
        cout<<"Name:- "<<getname()<<endl;
        cout<<"Salary:- "<<salary<<endl;
        cout<<"Department:- "<<department<<endl;
    }

};


int main()
{
    Person *p[2];
    Student S1(97,2023,"computer science","Ankit Chawla");
    Employee E1(999999,"Production","Sahil");
    p[0]=&S1;
    p[1]=&E1;
    p[0]->display();
    p[1]->display();
    return 0;
}
