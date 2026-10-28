#include "accommodation.h"
#include "../Entity/entity.h"

Accommodation::Accommodation() {}

void Accommodation::enter(std::list<Entity*> *entities)
{
    if(entities == nullptr) return;
    for(auto entity = entities->begin(); entity != entities->end(); entity++){
        this->entities.insert(*entity);
    }
}

