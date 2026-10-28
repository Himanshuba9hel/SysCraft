#include "elevator.h"

Elevator::Elevator(Building* building): building(building)
{

}

Elevator::LandingDoor::LandingDoor()
{

}


void Elevator::Car::entitiesEnter(std::vector<Entity *> *entities)
{
    if(entities == nullptr){
        return;
    }
    for(auto entity = entities->begin(); entity != entities->end(); entity++){

    }
}
