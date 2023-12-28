#include <bits/stdc++.h>
using namespace std;
#ifndef STUDENT_H
#define STUDENT_H
class Student
{
    protected:
    string name;
    string ID;

public:
    Student(string name, string ID);
    string getName();
    string getID();
};

#endif // STUDENT_H
