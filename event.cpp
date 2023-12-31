#include <bits/stdc++.h>
using namespace std;

#include "event.h"

event::event(string name, string time, string venue, string description, Student event_coordinator)
{
    this->name = name;
    this->time = time;
    this->venue = venue;
    this->description = description;
    this->coordinator_name = event_coordinator.getName();
    this->coordinator_ID = event_coordinator.getID();
}

void event :: registerForEvent(Participant new_entry)
{
    registered.push_back(new_entry);
}
void event :: getEventDetails()
{
    cout << "Event details:" << endl;
    cout << "name: " << this->name << endl;
    cout << "time: " << this->time << endl;
    cout << "venue: " << this->venue << endl;
    cout << "description: " << this->description << endl;
    cout << "*********************************" << endl;
}
void event :: getRegisteredStudents()
{
    cout << "list of registered students :\n";
    for (auto it : registered)
        cout << it.getName() << " " << it.getID() << endl;
}
void event :: getCoordinatorDetails()
{
    cout << "coordinator for the event:  Name : " << this->coordinator_name << "\n ";
    cout << "Roll No : " << this->coordinator_ID << "\n";
}

string event :: getCoordinatorName()
{
    return this->coordinator_name;
}

string event :: getCoordinatorID()
{
    return this->coordinator_ID;
}


