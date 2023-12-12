#include <iostream>
using namespace std;
class event{
    public:
    string name,time,venue;
    string description;
    list<Student> registered;
    list<Workforce> workforce;
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
     void disp_workforce(){
        cout<<"workforce for following event :\n";
        for(int i=0:i<workforce.size();i++)
            {
            cout << "Workforce number : " << (i+1) << endl;
            cout << "Workforce size : " << workforce[i].getWorkforceSize() << endl;
            cout << "Workforce role : " << workforce[i].getWorkforceRole() << endl;
            cout << "**********************************************" << endl;
            }
            
    }
};
