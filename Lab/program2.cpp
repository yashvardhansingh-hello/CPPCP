#include<iostream>
#include<string>
using namespace std;

class Student {
    private:
        int rollNumber;
        string name;
    public:
        void setAttributes();
        void display();
};

 void Student::setAttributes() {
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Roll Number: ";
    cin>>rollNumber;
  
}

void Student::display() {
    cout<<"Name is "<<name<<"\n";
    cout<<"Roll Number is "<<rollNumber<<"\n";
    
}

int main() {
    Student S1;
    S1.setAttributes();
    S1.display();
} 