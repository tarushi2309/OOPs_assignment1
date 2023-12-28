#include <iostream>
#include <string>
#include <list>
#include <vector>
using namespace std;

class Coordinator : public Student {
protected:
   
    list<Workforce> crew;
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
      return this->Id;
    }
 
    void addMemberToCrew(const string& member) {
        crew.push_back(member);
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


       void displayCrew()
   {
      cout << "Crew under the coordinator:" << endl;
      for(int i=0;i<crew.size();i++)
         {
            cout << "Crew number : " << (i+1) << endl;
            cout << "Crew size : " << crew[i].getWorkforceSize() << endl;
            cout << Crew role : " << crew[i].getWorkforceRole() << endl;
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
   vector<Student> crew;
   string role;

   public:
   Workforce(string role)
{
   this->role = role;
}

// Function to add a worker
void addStudent(Student student)
{
   this->crew.push_back(student);
}

vector<Student> getWorkforce()
{
   return this->crew;
}

string getWorkforceRole()
{
   return this->role;
}

int getWorkforceSize()
{
   return crew.size();
}
   
};


