#include <iostream>
using namespace std;
class event{
    public:
    string name,time,venue;
    string description;
    list<student> registered;
    Coordinator cd;
    event(string name,string time,string venue,string description)
    {
        this->name=name;
        this->time=time;
        this->venue=venue;
        this->description=description;
    }
    void coordinator_assigned(Coordinator c){
        cd=c;
    }
    void register(student new_entry){
        registered.pushback(new_entry);
    }
    void getEventDetails(){
        cout<<"Event details:"<<endl;
        cout<<"name: "<<this->name<<endl;
        cout<<"time: "<<this->time<<endl;
        cout<<"venue: "<<this->venue<<endl;
        cout<<"description: "<<this->description<<endl;
        cout << "*********************************" <<endl;
    }
    void disp_reg(){
        cout<<"list of registered students :\n";
        for(auto i:registered)
            cout<<i->getName()<<" "<<i->getID()<<endl;
    }
    void disp_coordinator(){
        cout<<"coordinator for the event: "<<cd->getName()<<" "<<cd->getID()<<endl;
    }
         
    }
};
