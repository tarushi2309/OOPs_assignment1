void viewEvents(vector<Event> ev)
{

    int i;
    for (i = 0; i < ev.size(); i++)
    {
        cout << "Event number : " << (i + 1) << endl;
        cout << "Event name : " << ev[i].getName() << endl;
        cout << "Event activity : " << ev[i].getActivity() << endl;
        cout << "Event Date and Time : " << ev[i].getDateTime() << endl;
        cout << "Event venue : " << ev[i].getVenue() << endl;
        cout << "*********************************************************" << endl;
    }
}

int main()
{
    cout << "Welcome to Tech Fest 2024 !!!" << endl;
    cout << "1. For Participants" << endl;
    cout << "Enter your choice" << endl;
    int ch;

    vector<Participant> list_participants;
    vector<Event> event_list;

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
    }

    return 0;
}
