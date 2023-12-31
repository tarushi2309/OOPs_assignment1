#ifndef EVENT_H
#define EVENT_H

#include "participant.h"

class event{
    protected:
    string name,time,venue;
    string description;
    list<Participant> registered;
    string coordinator_name;
    string coordinator_ID;

    public:

    event(string name,string time,string venue,string description,Student event_coordinator);
    void registerForEvent(Participant new_entry);
    void getEventDetails();
    void getRegisteredStudents();
    void getCoordinatorDetails();
    string getCoordinatorName();
    string getCoordinatorID();

};


#endif
