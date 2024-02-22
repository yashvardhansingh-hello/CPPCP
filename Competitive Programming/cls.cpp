#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        int rollNumber;
        string name;

        void setAttributes() {
            cout<<"Enter Name: ";
            cin>>name;
            cout<<"Enter Roll Number: ";
            cin>>rollNumber;
        }
        void display(){
            cout<<"Name is "<<name<<"\n";
            cout<<"Roll Number is "<<rollNumber<<"\n";
        }
};

class Employee {
    public:
        int salary;
        
        void setSalary() {
            cout<<"Enter salary: ";
            cin>>salary;
        }
        
        void display(){
            cout<<"The salary is "<<salary+2000<<"\n";
        }
};

int main() {
    Student S1;
    Employee E1;
    E1.setSalary();
    E1.display();
    S1.setAttributes();
    S1.display();
} 