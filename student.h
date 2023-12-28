#include <bits/stdc++.h>
using namespace std;

class Student
{
    protected:                
    string name;
    string ID;

    public:
    Student(string name, string ID)
    {
        this->name=name;
        this->ID=ID;
    }
    string getName()                
    {
        return this->name;
    }
    string getID()                 
    {
        return this->ID;
    }
};
