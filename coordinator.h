#include<bits/stdc++.h>
using namespace std;


#ifndef COORDINATOR_H
#define COORDINATOR_H

#include "student.h"
#include "event.h"
#include "workforce.h"

class Coordinator : public Student {
protected:
   
    Workforce task_force;
    string core_committee_member_name;
    string core_committee_member_ID;
    vector<event> eventsManaged;

public:
    Coordinator(string name, string ID,Workforce task_force,Student coreCommitteeMember);
    void addEvent(event Event);
    void getCoordinatorDetails();
    void getCoreCommitteeMemberDetails();
    string getCoordinatorName();
    string getCoordinatorID();
    string getCoreCommitteeMemberName();
    string getCoreCommitteeMemberID();
    void getWorkforceDetails();
    void getEventDetails();
    void addNewWorker(Student worker);
       

    
};



#endif
