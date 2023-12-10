#include <iostream>
using namespace std;
class event{
    public:
    string name,time,venue;
    string description;
    list<student> registered;
    list<workforce> workforce;
    Coordinator cd;
    event(string event_name,string time,string ven,string des)
    {
        name=event_name;
        this->time=time;
        venue=ven;
        description=des;
    }
    void coordinator_name(Coordinator c){
        cd=c;
    }
    void register(string name,string id){
        student new_entry(name,id);
        registered.pushback(new_entry);
    }
    void dis(){
        cout<<"event details:"<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"time: "<<time<<endl;
        cout<<"venue: "<<venue<<endl;
        cout<<"description: "<<description<<endl;
    }
    void disp_reg(){
        cout<<"list of registered students :\n";
        for(auto i:registered)
            cout<<i->getName()<<" "<<i->getID()<<endl;
    }
    void disp_coordinator(){
        cout<<"coordinator for the event: "<<cd->getName()<<" "<<cd->getID()<<endl;
    }
     void disp_workforce(){
        cout<<"workforce for following event :\n";
        for(auto i:workforce)
            cout<<i->name<<" "<<i->ID<<endl;
    }
};
