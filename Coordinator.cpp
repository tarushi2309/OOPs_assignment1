#include <iostream>
#include <string>
#include <list>
#include <vector>
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
    Coordinator(const string& coordinatorName, int coordinatorId) : Student(coordinatorName, coordinatorId) {
       this->coordinatorName = coordinatorName;
       this->coordinatorId = coordinatorId;
    }

    string get_coordinatorName()
    {
      return this->coordinatorName;
    }

    string get_coordinatorId()
    {
      return this->coordinatorId;
    }
 
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

struct Worker {
    string name;
    string role;
};

class Workforce : public Student {
protected:
    vector<string> roles;
    vector<Worker> workers;

public:
    // Constructor to initialize roles
    Workforce(const vector<string>& festRoles) : roles(festRoles) {}

    // Function to add a worker
    void addWorker(const string& name) {
        workers.push_back({name, ""});
    }

    // Function to assign roles to workers
    void assignRoles() {
        size_t roleIndex = 0;
        for (size_t i = 0; i < workers.size(); ++i) {
            workers[i].role = roles[roleIndex];
            roleIndex = (roleIndex + 1) % roles.size(); 
        }
    }

    // Function to display worker information
    void displayWorkers() {
        cout << "Workers and their roles:" << endl;
        for (const auto& worker : workers) {
            cout << "Name: " << worker.name << ", Role: " << worker.role << endl;
        }
    }
};
