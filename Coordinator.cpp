#include <iostream>
#include <string>
#include <list>
using namespace std;

class Coordinator : public Student {
protected:
   /*string name;
    int id;*/
    list<string> workforce;
    /*list<string> coreCommittee;*/
    list<Core> coreCommitte;
    /*list<string> eventsManaged;*/
    list<Event> eventsManaged;

public:
    /*Coordinator(const string& coordinatorName, int coordinatorId) : name(coordinatorName), id(coordinatorId) {}*/
    Coordinator(const string& coordinatorName, int coordinatorId) : Student(coordinatorName, coordinatorId) {}
 
    void addMemberToWorkforce(const string& member) {
        workforce.push_back(member);
    }

   /* void head_CoreCommittee(const string& member) {
        coreCommittee.push_back(member);
    }*/

    void head_CoreCommittee(const Core& member) {
        coreCommittee.push_back(member);

    /*void EventsToBeManaged(const string& event) {
        eventsManaged.push_back(event);
    }*/

     void EventsToBeManaged(const Event& event) {
        eventsManaged.push_back(event);
    }


    void displayCoordinatorInfo() {
        cout << "Coordinator Name: " << name << endl;
        cout << "Coordinator ID: " << id << endl;
    }

    void displayWorkforce() {
        cout << "Workforce under the coordinator:" << endl;
        for (const auto& member : workforce) {
            cout << "- " << member << endl;
        }
    }

    void displayCoreCommittee() {
        cout << "Core committee to which the coordinator reports:" << endl;
        for (const auto& member : coreCommittee) {
           /* cout << "- " << member << endl;*/
            cout << "- Member name : " << member.getName() << endl;
            cout << "- Member ID : " << member.getID() << endl;
            cout << "- Member Speciality" : << member.getSpeciality() << endl;
        }
    }

    void displayEventsManaged() {
        cout << "Events managed by the coordinator:" << endl;
        for (const auto& event : eventsManaged) {
            /*cout << "- " << event << endl;*/
        }
    }
};
