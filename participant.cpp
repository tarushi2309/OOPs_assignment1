#include<bits/stdc++.h>
#include "student.h"
using namespace std;
class Participant : public Student
{
    protected:
    vector<Event> events;
    public:
    Participant(string name, string ID):            
        Student(name,ID)
    {
    }

    void addEvent(Event new_event)                    
    {
        this->events.push_back(new_event);
    }

    /*void getEvents()                  
    {
        for(i=0;i<events.size();i++)
            events[i].getEventDetails();
    }*/
};
