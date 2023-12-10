#include<string>
#include<vector>
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
    string getName()                
    {
        return name;
    }
    string getID()                 
    {
        return ID;
    }


};
class Participant: private Student
{
    vector <Event> events();
    public:
    Participant()
    {
        
    }
   void addEvent(Event new_event)
    {
        events.push_back(new_event);
    }
    vector<Event> getEvents()                    
    {
        return events;
    }
};
