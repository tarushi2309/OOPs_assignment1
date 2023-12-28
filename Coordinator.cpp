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
    
    Coordinator(const string& Name, int Id) : Student(Name, Id) {
       this->Name = Name;
       this->Id = Id;
    }

    string get_coordinatorName()
    {
      return this->Name;
    }

    string get_coordinatorId()
    {
      return this->cId;
    }
 
    void addMemberToWorkforce(const string& member) {
        workforce.push_back(member);
    }

    void head_CoreCommittee(const Core& member) {
        coreCommittee.push_back(member);
    }

     void EventsToBeManaged(const Event& event) {
        eventsManaged.push_back(event);
    }


    void displayCoordinatorInfo() {
        cout << "Coordinator Name: " << name << endl;
        cout << "Coordinator ID: " << id << endl;
    }


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


