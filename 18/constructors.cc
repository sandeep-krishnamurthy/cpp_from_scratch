#include <iostream>
#include <cassert>
#include <unistd.h>

// Demonstrate constructors

/*
Place = location + Name. 
Assume it is a straight light. 
House is at 0.
If work is at 10. Then going from home to work is going from 0 to 10.
Maintain current location of person.
*/

class Place {
    private:
        int m_location;
        std::string m_name;
    public:
        Place() : m_location(-1), m_name("") {
        }

        Place(int location, std::string name) {
            assert(location >= 0);
            assert(name.length() > 1);

            m_location = location;
            m_name = name;
        }

        int getLocation() {
            return m_location;
        }

        const std::string getName() {
            return m_name;
        }
};

class Person {
    private:
        std::string m_name;
        Place m_current_place;

    public:
        Person(std::string name, Place current_place) 
            : m_name(name), m_current_place(current_place) {
        }

        Place getCurrentPlace() {
            return m_current_place;
        }

        void updateCurrentPlace(Place place) {
            m_current_place = place;
        }

        void driveTo(Place destination_place) {
            std::string source = m_current_place.getName();
            std::string destination = destination_place.getName();
            std::cout << "Driving FROM - " << source << " TO " << destination << std::endl;
            int distance = destination_place.getLocation() - m_current_place.getLocation();
            if (distance < 0) {
                // Returning back
                _travel(source, destination, (distance * -1));
            } else {
                // Going forward
                _travel(source, destination, distance);
            }

            updateCurrentPlace(destination_place);
        }
    
    private:
        // Utility helpers
        void _travel(const std::string source, const std::string destination, const int distance) {
            std::cout << source;
            for(auto i=0; i<distance; i++) {
                std::cout << " |oo| ";
                _sleep(8*20000);
            }
            std::cout << destination << std::endl;

        }

        void _sleep(int microseconds) {
            usleep(microseconds);
        }
};

int main() {
    Place home(0, "Home");
    Place work(5, "Work");

    Person me("Sandeep", home);

    me.driveTo(work);
    std::cout << "\nMy current location - " << me.getCurrentPlace().getName() << std::endl;
    me.driveTo(home);
}