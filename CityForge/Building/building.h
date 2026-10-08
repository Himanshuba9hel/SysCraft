#ifndef BUILDING_H
#define BUILDING_H
#include <list>
#include <vector>

class Floor;
class Room;
class Lift;
enum class FloorType;

class Entity;

class Building
{
public:
    Building(int maxUpperFloor = 0, int maxUnderGroundFloor = 0);
protected:
    std::list<Floor> floors;

private:
    std::vector<Lift> lifts;
public:
    void setLift();

protected:
    std::vector<Entity*> entity_list;
public:
    bool setEntity(Entity* entity);
    bool entityGotoFloor(Floor floors);
};

enum class FloorType
{
    Upper,
    Ground,
    UnderGround
};

class Floor {
public:
    Floor(FloorType type = FloorType::Ground, int level = 0);
protected:
    FloorType type = FloorType::Ground;
    int level = 0;
    void Details();
    std::pair<FloorType, int> getDetails() { return std::pair<FloorType, int>(type, level); };
private:
    Building* parent = nullptr;

// Room's
protected:
    std::vector<Room> rooms;
public:

protected:
    std::vector<Entity**> entity_list;
public:
    bool setEntity(Entity* entity);
};

class Room {
public:
    Room(Floor* parent, unsigned int number);
private:
    Floor* parent = nullptr;
protected:
    unsigned int number = 0;
};

class Lift
{
};


#endif // BUILDING_H
