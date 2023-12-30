#include <bits/stdc++.h>
using namespace std;

#include "student.h"
#include "student.cpp"
#include "participant.cpp"
#include "Coordinator.cpp"
#include "core_committee.cpp"
#include "event.cpp"

//Assumption: event list needs to be hardcoded and displayed with unique ID's as the menu driven feature works based on that
//used global variables to seem like central database (easier to implement for now)

vector<Participant> list_participants;
vector<event> event_list;
vector<Core> core_committee;

int main()
{
    cout << "Welcome to Tech Fest 2024!" << endl;
    cout << "These are all the events to take place" << endl;

    viewEvents(event_list);

    cout << "Kindly enter your choice as per your role" << endl;
    cout << "1. For Participants" << endl;
    cout << "2. For Core Committee" << endl;
    cout << "3. For Coordinators" << endl;
    cout << "4. Exit" << endl;

    int ch = -1;

    while(ch != 4)
    {
        cout << "Enter your choice: " << endl;

        if(ch == 1)
        {
            DisplayParticipantMenu();

            int chr;
            cin >> chr;

            switch (chr)
            {
                case 1:
                {
                    addParticipant();
                    break;
                }
                case 2:
                {
                    registerEvent();
                    break;
                }
                case 3:
                {
                    viewMyEvents();
                    break;
                }
            }
            break;
        }

        if(ch == 2)
        {
            DisplayCommitteeMenu();

            int chr;
            cin >> chr;

            switch (chr)
            {
                case 1:
                {
                    addCoreMember();
                    break;
                }

                case 2:
                {
                    addCoordinator();
                    break;
                }

                case 3:
                {
                    viewMyCoordinators();
                    break;
                }
            }
        }

        if(ch == 3)
        {
            int coreID, coordID;

            cout << "Enter ID of core member you work under: " << endl;
            cin>>coreID;

            cout << "Enter your assigned ID: " << endl;
            cin>>coordID;

            Coordinator current = core_committee[coreID - 1].getCoordinatorByID(coordID);

            displayCoordinatorMenu();

            int chr;
            cin >> chr;

            switch (chr)
            {
                case 1:
                {
                    manageNewEvent(current);
                    break;
                }

                case 2:
                {
                    current.displayEventsManaged();
                    break;
                }
                case 3:
                {
                    addNewWorkforce(current);
                    break;
                }
                case 4:
                {
                    current.displayWorkforce();
                    break;
                }
            }
        }
    }

    cout<<"Thank you for visiting!"<<endl;

    return 0;
}


void viewEvents(vector<event> ev)
{

    int i;
    for (i = 0; i < ev.size(); i++)
    {
        ev[i].getEventDetails();
        
    }
}

//functions to display use-case menu

void DisplayParticipantMenu(){

    cout << "1. To add a new participant : " << endl;
    cout << "2. To register for events " << endl;
    cout << "3. To see events in which you are participating " << endl;
    cout << "Enter your choice : ";
}

void DisplayCommitteeMenu(){

    cout << "1. To add a new core member " << endl;
    cout << "2. To add a coordinator" << endl;
    cout << "3. To view all coordinators under a member" << endl;
    cout << "Enter your choice : ";
}

void displayCoordinatorMenu(){

    cout << "1. To manage a new event" << endl;
    cout << "2. To view all events being managed" << endl;
    cout << "3. To add a new member to workforce" << endl;
    cout << "4. To view all students in the workforce" << endl;
    cout << "Enter your choice : ";
}

//functions for participants

void addParticipant() {

    string name;
    string roll_no;
    cout << "Enter name of participant : ";
    cin >> name;
    cout << "Enter roll no. of participant : ";
    cin >> roll_no;
    Participant p_new(name, roll_no);
    list_participants.push_back(p_new);
    cout << "ID No : " << list_participants.size() << endl;
}

void registerEvent() {

    int ID_no;
    cout << "Enter ID_no provided to you : " << endl;
    cin >> ID_no;

    Participant p = list_participants[ID_no - 1];

    viewEvents(event_list);

    cout << "Enter no. of events you want to register in : " << endl;
    int num;
    cin >> num;
    int entry;

    for (int i = 0; i < num; i++)
    {
        cout << "Enter event no. : ";
        cin >> entry;
        p.addEvent(event_list[entry - 1]);
    }

    cout<<"Event added"<<endl;

}

void viewMyEvents(){
    int ID_no;
    cout << "Enter ID_no provided to you : " << endl;
    cin >> ID_no;

    Participant p = list_participants[ID_no - 1];
    p.getEvents();

}

//functions for core members

void addCoreMember() {
    string name;
    string roll_no;
    string spec;

    cout << "Enter name of core member: ";
    cin >> name;
    cout << "Enter roll no. of core member: ";
    cin >> roll_no;
    cout << "Enter specialization of core member: ";
    cin >> spec;

    Core new_core(name, roll_no, spec);
    core_committee.push_back(new_core);

    cout << "Your ID is : " << core_committee.size() << endl;
}

void addCoordinator() {

    int ID_no;
    string name;
    string roll_no;
    cout << "Enter ID of respective core member : " << endl;
    cin >> ID_no;

    Core core_member = core_committee[ID_no - 1];

    cout << "Enter name of coordinator: ";
    cin >> name;
    cout << "Enter roll no. of coordinator: ";
    cin >> roll_no;

    Coordinator new_coord = Coordinator(name, roll_no);
    core_member.addCoordinator(new_coord);

    cout << "You're coordinator ID is " ;
    cout << core_member.assignCoordinatorID(new_coord) << endl;

}

void viewMyCoordinators() {

    int ID_no;
    cout << "Enter ID of respective core member : " << endl;
    cin >> ID_no;

    Core core_member = core_committee[ID_no - 1];

    vector<Coordinator> ListOfCoords = core_member.getCoordinatorList();

    for(int i = 0; i < ListOfCoords.size(); i++)
    {
        ListOfCoords[i].displayCoordinatorInfo();
    }
}

//functions for coordinators

void manageNewEvent(Coordinator current) {

    int eventID;
    cout << "Enter Event ID" << endl;
    cin >> eventID;

    current.EventsToBeManaged(event_list[eventID - 1]);
}

void addNewWorkforce(Coordinator current){
    string name;
    string roll_no;

    cout << "Enter name of new workforce: ";
    cin >> name;
    cout << "Enter roll no. of new workforce: ";
    cin >> roll_no;   

    Workforce new_worf = Workforce(name, roll_no);

    current.addMemberToWorkforce(new_workf);

}


