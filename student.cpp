#include<string>
#include<stdio.h>
#include <iostream>
using namespace std;
class Student
{
     public:
    string name;
    string ID;
   
    Student(string in_name,string in_ID)
    {
        name=in_name;
        ID=in_ID;
    }

};