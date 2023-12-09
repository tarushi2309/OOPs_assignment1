#include <iostream>
#include <string>
#include <list>
using namespace std;

class Coordinator : public Student {
protected:
    std::string name;
    int id;
    std::list<std::string> workforce;
    std::list<std::string> coreCommittee;
    std::list<std::string> eventsManaged;

public:
    Coordinator(const std::string& coordinatorName, int coordinatorId) : name(coordinatorName), id(coordinatorId) {}
 
    void addMemberToWorkforce(const std::string& member) {
        workforce.push_back(member);
    }

    void head_CoreCommittee(const std::string& member) {
        coreCommittee.push_back(member);
    }

    void EventsToBeManaged(const std::string& event) {
        eventsManaged.push_back(event);
    }

    void displayCoordinatorInfo() {
        std::cout << "Coordinator Name: " << name << std::endl;
        std::cout << "Coordinator ID: " << id << std::endl;
    }

    void displayWorkforce() {
        std::cout << "Workforce under the coordinator:" << std::endl;
        for (const auto& member : workforce) {
            std::cout << "- " << member << std::endl;
        }
    }

    void displayCoreCommittee() {
        std::cout << "Core committee to which the coordinator reports:" << std::endl;
        for (const auto& member : coreCommittee) {
            std::cout << "- " << member << std::endl;
        }
    }

    void displayEventsManaged() {
        std::cout << "Events managed by the coordinator:" << std::endl;
        for (const auto& event : eventsManaged) {
            std::cout << "- " << event << std::endl;
        }
    }
};
