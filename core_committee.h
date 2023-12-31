#include<bits/stdc++.h>
using namespace std;


#ifndef CORE_H
#define CORE_H

#include "coordinator.h"

class Core : public Student{

    protected:
    string member_speciality;
    vector<Coordinator> coord_force;
    public:
    Core(string name, string ID, string speciality);
    void addCoordinator(Coordinator coordinator);
    string getCoreCommitteeSpeciality();
    vector<Coordinator> getCoordinatorList();

    
};

#endif
