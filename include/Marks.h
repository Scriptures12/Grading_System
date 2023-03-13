#ifndef MARKS_H
#define MARKS_H

#include <Student.h>


class Marks : public Student
{
    public:
        Marks();
        void Display();//functions to display a menu list
        void InputData();//function allow user to input marks for the coursess
        void OutputData();//function to output marks of the courses
        void Calculate();//function to calcualte student mean mark

    protected:
        float course1;
        float course2;
        float course3;
        float Total;//variable which stores sum of courses

    private:
};

#endif // MARKS_H
