#include "coordinator.h"

Coordinator::Coordinator(string name, string ID, Workforce task_force, Student coreCommitteeMember) : Student(name, ID)
{
    this->name = name;
    this->ID = ID;
    this->task_force = task_force;
    this->core_committee_member_ID = coreCommitteeMember.getID();
    this->core_committee_member_name = coreCommitteeMember.getName();
}

void Coordinator::addEvent(event Event)
{
    eventsManaged.push_back(Event);
}

void Coordinator::getCoordinatorDetails()
{
    cout << "Coordinator Name: " << this->getName() << endl;
    cout << "Coordinator ID: " << this->getID() << endl;
}

void Coordinator::getCoreCommitteeMemberDetails()
{
    cout << "Coordinator Name: " << this->core_committee_member_name << endl;
    cout << "Coordinator ID: " << this->core_committee_member_ID << endl;
}

string Coordinator::getCoordinatorName()
{
    return this->getName();
}
string Coordinator::getCoordinatorID()
{
    return this->getID();
}

string Coordinator::getCoreCommitteeMemberName()
{
    return this->core_committee_member_name;
}

string Coordinator::getCoreCommitteeMemberID()
{
    return this->core_committee_member_ID;
}

void Coordinator::getWorkforceDetails()
{
    cout << "Workforce under the coordinator:" << endl;
    vector<Student> crew = this->task_force.getWorkforce();
    for (auto it : crew)
    {
        cout << "Student Name : " << it.getName() << "  Student ID : " << it.getID() << endl;
    }
}

void Coordinator :: getEventDetails()
{
    for(auto it : this->eventsManaged)
    {
        it.getEventDetails();
        cout <<"\n";
    }
}

void Coordinator::addNewWorker(Student worker)
{
    this->task_force.addStudent(worker);
}
