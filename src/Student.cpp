#include "Student.h"
#include <Student.h>

#include <iostream>

using namespace std;
Student::Student()
{
    //ctor
}
void Student::getData()
{
    cout<<"Enter the StudentID=  ";
    cin>>StudentID;
    cout<<"Enter the Student Name=  ";
    cin>>StudentName;
    cout<<"Enter the Student Campus=  ";
    cin>>Campus;
    cout<<endl;
}

void Student::displayData()
{
    cout<<"StudentID=  "<<StudentID<<endl;
    cout<<" Student Name=  "<<StudentName<<endl;
    cout<<"Student Campus=  "<<Campus<<endl;
    cout<<endl;
}
