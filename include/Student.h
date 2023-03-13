#ifndef STUDENT_H
#define STUDENT_H


class Student
{
    public:
        Student();
        void getData();// function to get student data
        void displayData();//function to display student data

    protected:

    int StudentID;//variable to store student id
    char StudentName[100]; //variable to store student name
    char Campus[100];//variable to store student campus

    private:
};

#endif // STUDENT_H
