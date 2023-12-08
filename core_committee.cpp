#include <bits/stdc++.h>
using namespace std;

enum specialization
{
    logistics, treasury, website_lead,publicity
};

class Core : public Student{

    protected:
    specialization member_speciality;
    vector<Coordinator> coord_force;

    public:
    Core(string name, string rollNo, specialization sp) : Student(name,rollNo)
    {
        this->member_speciality=sp;
    }

    void addCoordinator(Coordinator coordinator)
    {
        this->coord_force.push_back(coordinator);
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
