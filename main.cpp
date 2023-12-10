void viewEvents(vector<Event> ev)
{

    int i;
    for (i = 0; i < ev.size(); i++)
    {
        cout << "Event ID : " << (i + 1) << endl;
        cout << "Event name : " << ev[i].getName() << endl;
        cout << "Event activity : " << ev[i].getActivity() << endl;
        cout << "Event Date and Time : " << ev[i].getDateTime() << endl;
        cout << "Event venue : " << ev[i].getVenue() << endl;
        cout << "*********************************************************" << endl;
    }
}

enum specialization
{
    logistics, treasury, website_lead,publicity
};

int main()
{
    vector<Participant> list_participants;
    //event list needs to be hardcoded and displayed with unique ID's as the menu driven feature works based on that
    vector<Event> event_list;
    vector<Core> core_committee;


    cout << "Welcome to Tech Fest 2024 !!!" << endl;

    cout << "These are all the events to take place" << endl;
    viewEvents();

    cout << "Kindly enter you choice as per your role" << endl;
    cout << "1. For Participants" << endl;
    cout << "2. For Core Committee" << endl;
    cout << "3. For Coordinators" << endl;
    cout << "Enter your choice" << endl;
    int ch;

   

    switch (ch)
    {
    case 1:
    {
        cout << "1. To add a new participant : " << endl;
        cout << "2. To register for events " << endl;
        cout << "3. To see events in which you are participating " << endl;
        cout << "Enter your choice : ";
        int chr;
        cin >> chr;

        switch (chr)
        {
            case 1:
            {
                string name;
                string roll_no;
                cout << "Enter name of participant : ";
                cin >> name;
                cout << "Enter roll no. of participant : ";
                cin >> roll_no;
                Participant p_new(name, roll_no);
                list_participants.push_back(p_new);
                cout << "ID No : " << list_participants.size() << endl;
                break;
            }

            case 2:
            {
                int ID_no;
                cout << "Enter ID_no provided to you : " << endl;
                cin >> ID_no;
                Participant p = list_participants[ID_no - 1];

                viewEvents(event_list);
                cout << "Enter no. of events you want to register in : " << endl;
                int num;
                cin >> num;
                int entry;
                vector<int> events;
                for (int i = 0; i < num; i++)
                {
                    cout << "Enter event no. : ";
                    cin >> entry;
                    events.push_back(entry);
                }

                for (int i = 0; i < num; i++)
                {
                    Event e = event_list[events[i] - 1];
                    p.addEvent(e);
                }

                cout << "Events added successfully!!!" << endl;
                break;
            }
        }
    }
    case 2:
    {
        cout << "1. To add a new core member " << endl;
        cout << "2. To add a coordinator" << endl;
        cout << "3. To view all coordinators under a member" << endl;
        cout << "Enter your choice : ";

        int chr;
        cin >> chr;

        switch (chr)
        {
            case 1:
            {
                string name;
                string roll_no;
                enum specialization spec;
                cout << "Enter name of core member: ";
                cin >> name;
                cout << "Enter roll no. of core member: ";
                cin >> roll_no;
                cout << "Enter specialization of core member: ";
                cin >> spec;

                Core new_core(name, roll_no, spec);
                core_committee.push_back(new_core);

                cout << "ID : " << core_committee.size() << endl;

                break;
            }

            case 2:
            {
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
                
                break;
            }
            case 3:
            {
                int ID_no;
            
                cout << "Enter ID of respective core member : " << endl;
                cin >> ID_no;

                Core core_member = core_committee[ID_no - 1];

                vector<Coordinator> ListOfCoords = core_member.getCoordinatorList();

                for(int i = 0; i < ListOfCoords.size(); i++)
                {
                    ListOfCoords[i].displayCoordinatorInfo();
                }
                
                break;
            }

        }
    }
    case 3:
    {
        int coreID, coordID;

        cout << "Enter ID of core member you work under: " << endl;
        cin>>coreID;

        cout << "Enter your assigned ID: " << endl;
        cin>>coordID;

        Coordinator current = Core core_member = core_committee[coreID - 1].getCoordinatorByID(coordID);


        cout << "1. To manage a new event" << endl;
        cout << "2. To view all events being managed" << endl;
        cout << "3. To add a new member to workforce" << endl;
        cout << "4. To view all students in the workforce" << endl;

        cout << "Enter your choice : ";

        int chr;
        cin >> chr;

        switch (chr)
        {
            case 1:
            {
                int eventID;
                cout << "Enter Event ID" << endl;
                cin >> eventID;

                current.EventsToBeManaged(event_list[eventID - 1]);
                
                break;
            }

            case 2:
            {
                current.displayEventsManaged();

                break;
            }
            case 3:
            {
                string name;
                string roll_no;

                cout << "Enter name of new workforce: ";
                cin >> name;
                cout << "Enter roll no. of new workforce: ";
                cin >> roll_no;   

                Workforce new_worf = Workforce(name, roll_no);

                current.addMemberToWorkforce(new_workf);

                break;
            }
            case 4:
            {
                current.displayWorkforce();
                break;
            }

        }
    }

    return 0;

    }
}
