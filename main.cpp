#include <iostream>

using namespace std;
#include "Student.h"
#include <Student.h>
#include "Marks.h"



int main()
{
    int choose;//variable declaration
    char recur;//declaration of variable to allow user to perform operation again
    Marks sek;//object creation

    cout<<"UMAT STUDENT INFORMATION SYSTEM"<<endl;
    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;

    do{
        sek.Display();

        cout<<"Select your choice =  ";
        cin>>choose;
        cout<<endl;

        //if and else if statement to get information
        if(choose==1)
        {
            sek.getData();
            sek.InputData();
        }
        else if(choose==2)
        {
            sek.displayData();
            sek.OutputData();
        }
        else if(choose==3)
        {
            sek.Calculate();
        }
        else if(choose==4)
        {
            return 0;
        }

        cout<<endl;
        cout<<"please do you want to no more information:  ";//output to prompt user to perform again
        cin>>recur;
        cout<<endl;
    }while(recur=='r' || recur=='y');
    return 0;
}
