#include "building.h"

Building::Building(int maxUpperFloor, int maxUnderGroundFloor)
{
    // Generating Ground Floor
    floors.push_front(Floor(FloorType::Ground,0));

    // Generating Upper Floor
    for(int i = 0; i <= maxUpperFloor; ++i){
        floors.push_front(Floor(FloorType::Upper,i));
    }

    // Generating UnderGround Floor
    for(int i = 0; i <= maxUnderGroundFloor; ++i){
        floors.push_back(Floor(FloorType::UnderGround,i*-1));
    }
}

bool Building::setEntity(Entity* entity){
    entity_list.push_back(entity);
    return true;
}

bool Building::entityGotoFloor(Floor floors)
{
    return true;
}

Floor::Floor(FloorType type, int level): type(type), level(level)
{

}

bool Floor::setEntity(Entity *entity)
{
    return true;
}

void Floor::Details()
{

}
