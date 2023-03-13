#include "Marks.h"
#include <Student.h>
#include "Student.h"
#include <iostream>

using namespace std;


Marks::Marks()
{
    //ctor
}


void Marks::Display()
{
    cout<<"1.Enter student data"<<endl;
    cout<<"2.Display student data"<<endl;
    cout<<"3.Calculate Mean Mark"<<endl;
    cout<<"4.exit"<<endl;
    cout<<endl;
}

void Marks::InputData()
{
    cout<<"Enter the mark for the First course:   ";
    cin>>course1;
    cout<<"Enter the mark for the Second course:   ";
    cin>>course2;
    cout<<"Enter the mark for the Third course:   ";
    cin>>course3;
    cout<<endl;
}

void Marks::OutputData()
{
    cout<<"First course Marks=   "<<course1<<endl;
    cout<<"Second course Marks=   "<<course2<<endl;
    cout<<"Third course Marks=   "<<course3<<endl;
    cout<<endl;
}

void Marks::Calculate()
{
    Total=course1+course2+course3;
    float averageMean;//variable to store mean mark
    averageMean=Total/3;//calculation of mean mark

    //if statement to display  average and grade accordinly
    if(averageMean >=80 && averageMean <=100)
    {
        cout<<"Mean Mark is "<<averageMean<<", Grade A and Excellent"<<endl;
    }
    if(averageMean >=70 && averageMean <=79.99)
    {
        cout<<"Mean Mark is "<<averageMean<<", Grade B and Very Good"<<endl;
    }
    if(averageMean >=60 && averageMean <=69.99)
    {
        cout<<"Mean Mark is "<<averageMean<<", Grade C and Good"<<endl;
    }
    if(averageMean >=50 && averageMean <=59.99)
    {
        cout<<"Mean Mark is  "<<averageMean<<", Grade D and Credit"<<endl;
    }
    if(averageMean <=49.99)
    {
        cout<<"Mean Mark is  "<<averageMean<<", Grade E and Fail"<<endl;
    }
}

