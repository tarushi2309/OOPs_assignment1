#include <bits/stdc++.h>
using namespace std;

class Student
{
    protected:                // changed access specifier to protected instead of public so that variables are not inadvertently changed 
    string name;
    string ID;

    public:

    Student(string name, string ID)
    {
        this->name=name;
        this->ID=ID;
    }

    string getName()                // getter function for name
    {
        return this->name;
    }

    string getID()                 // getter function for ID
    {
        return this->ID;
    }
};

class Participant : public Student
{
    protected:
    vector<Event> events;

    public:

    Participant(string name, string ID):            // first constructor of student is called
        Student(name,ID)
    {
        

    }

    void addEvent(Event new_event)                    // setter function to add events
    {
        this->events.push_back(new_event);
    }

    void getEvents()                    // getter function to get list of events a student is participating in
    {
        for(i=0;i<events.size();i++)
            events[i].getEventDetails();
        
    }

};

enum specialization
{
    logistics, treasury, website_lead,publicity
};

class Core : public Student{

    protected:
    specialization member_speciality;
    vector<Coordinator> coord_force;

    public:
    Core(string name, string ID, specialization sp) : Student(name,ID)
    {
        this->member_speciality=sp;
    }

    void addCoordinator(Coordinator coordinator)
    {
        this->coord_force.push_back(coordinator);
    }

    int assignCoordinatorID(Coordinator coordinator){
        for(int i=0;i<coord_force.size();i++)
            {
                if((this->coord_force[i]).getID()==coordinator.getID())
                    return (i+1);
            }
        return -1;
                
    }

    Coordinator getCoordinatorbyID(int id){
        return this->coord_force[id-1];
    }

    string getSpeciality()
    {
        if(this->member_speciality==logistics)
        {
            return "Logistics";
        }
        else if(this->member_speciality==treasury)
        return "Treasury";
        else if(this->member_speciality==website_lead)
        return "Website Lead";
        else if(this->member_speciality==publicity)
        return "Publicity";
    }

    vector<Coordinator> getCoordinatorList()
    {
        return this->coord_force;
    }


};
