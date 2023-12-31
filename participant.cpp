#include<bits/stdc++.h>
#include "participant.h"
using namespace std;
 
Participant::Participant(string name, string ID):            
        Student(name,ID)
    {
        this->name=name;
        this->ID=ID;
    }

    void Participant:: addEvent(event new_event)                    
    {
        this->events.push_back(new_event);
    }

    void Participant::getEvents()                  
    {
        int i;
        for(i=0;i<events.size();i++)
            events[i].getEventDetails();
    }

