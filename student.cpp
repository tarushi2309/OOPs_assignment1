#include<bits/stdc++.h>
#include "student.h"
using namespace std;
Student::Student(string name, string ID)
{
    this->name = name;
    this->ID = ID;
}

string Student::getName()
{
    return this->name;
}

string Student::getID()
{
    return this->ID;
}
