#ifndef ELEVATOR_H
#define ELEVATOR_H
#include <list>
#include <vector>

class Building;
class Floor;
class Entity;

class Elevator
{
public:
    class Car;
    class LandingDoor;
public:
    Elevator(Building* building);
private:
    Building* building;
public:
    class Car
    {
    public:
        Car();
    protected:
        std::list<Entity*> entities;
        void entitiesEnter(std::vector<Entity*>* entities);
        std::vector<Entity*>* entitiesExit();
    };
    class LandingDoor
    {
    public:
        LandingDoor();

    };
};

#endif // ELEVATOR_H
