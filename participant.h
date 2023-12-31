#include "student.h"
#include "workforce.h"

Workforce ::Workforce()
{
    this->coordinator_ID="";
    this->coordinator_name="";
}

Workforce ::Workforce(Student coordinator)
{
    this->coordinator_name=coordinator.getName();
    this->coordinator_ID=coordinator.getID();
}

Workforce& Workforce :: operator=(const Workforce& other)
{
    if (this != &other) { 
            this->crew = other.crew;
            this->coordinator_ID=other.coordinator_ID;
            this->coordinator_name=other.coordinator_ID;
            
        }
        
        return *this;
}

void Workforce ::addStudent(Student student)
{
    this->crew.push_back(student);
}

vector<Student> Workforce ::getWorkforce()
{
    return this->crew;
}

int Workforce ::getWorkforceSize()
{
    return crew.size();
}

void Workforce :: getCoordinatorDetails()
{
    cout << "coordinator for the event:  Name : " << this->coordinator_name << "\n ";
    cout << "Roll No : " << this->coordinator_ID << "\n";
}

string Workforce :: getCoordinatorName()
{
    return this->coordinator_name;
}

string Workforce :: getCoordinatorID()
{
    return this->coordinator_ID;
}


