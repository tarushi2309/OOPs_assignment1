
#ifndef WORKFORCE_H
#define WORKFORCE_H

#include "student.h"
using namespace std;

class Workforce
{
protected:
    vector<Student> crew;
    string coordinator_name;
    string coordinator_ID;

public:
    Workforce();
    Workforce(Student coordinator);
    Workforce& operator=(const Workforce& other);
    void addStudent(Student student);
    vector<Student> getWorkforce();
    int getWorkforceSize();
    string getCoordinatorName();
    string getCoordinatorID();
    void getCoordinatorDetails();
};

#endif
