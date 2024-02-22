#include<iostream>
using namespace std;

class Employee {
    private:
        int salary;
    public:
        void setSalary() {
            cout<<"Enter salary: ";
            cin>>salary;
        }
        
        void display(){
            cout<<"The salary is "<<salary+2000<<"\n";
        }
};

int main() {
    Employee E1;
    E1.setSalary();
    E1.display();
} 