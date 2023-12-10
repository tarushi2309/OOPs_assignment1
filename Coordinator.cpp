#include <iostream>
#include <string>
#include <list>
#include <vector>
using namespace std;

class Coordinator : public Student {
protected:
   
    list<Workforce> workforce;
    list<Core> coreCommitte;
    list<Event> eventsManaged;

public:
    
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

    void head_CoreCommittee(const Core& member) {
        coreCommittee.push_back(member);

     void EventsToBeManaged(const Event& event) {
        eventsManaged.push_back(event);
    }


    void displayCoordinatorInfo() {
        cout << "Coordinator Name: " << name << endl;
        cout << "Coordinator ID: " << id << endl;
    }

    /*void displayWorkforce() {
        cout << "Workforce under the coordinator:" << endl;
        for (const auto& member : workforce) {
            cout << "- " << member << endl;
        }
    }*/

       void displayWorkforce()
   {
      cout << "Workforces under the coordinator:" << endl;
      for(int i=0;i<workforce.size();i++)
         {
            cout << "Workforce number : " << (i+1) << endl;
            cout << "Workforce size : " << workforce[i].getWorkforceSize() << endl;
            cout << "Workforce role : " << workforce[i].getWorkforceRole() << endl;
            cout << "**********************************************" << endl;
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



class Workforce
{
   protected:
   vector<Student> workforce;
   string role;

   public:
   Workforce(string role)
{
   this->role = role;
}

// Function to add a worker
void addStudent(Student student)
{
   this->workforce.push_back(student);
}

vector<Student> getWorkforce()
{
   return this->workforce;
}

string getWorkforceRole()
{
   return this->role;
}

int getWorkforceSize()
{
   return workforce.size();
}
   
};

/*class Workforce : public Student {
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
};*/
