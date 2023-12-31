#include "core_committee.h"

Core::Core(string name, string ID, string speciality) : Student(name,ID)
{
    this->name=name;
    this->ID=ID;
    this->member_speciality=speciality;

}

void Core::addCoordinator(Coordinator coordinator)
{
    coord_force.push_back(coordinator);
}
string Core::getCoreCommitteeSpeciality()
{
    return this->member_speciality;
}
vector<Coordinator> Core::getCoordinatorList()
{
    return this->coord_force;
}
  
