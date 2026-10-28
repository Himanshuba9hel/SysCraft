#ifndef ACCOMMODATION_H
#define ACCOMMODATION_H
#include <list>
#include <unordered_set>

class Entity;
class Accommodation
{
public:
    Accommodation();
    void enter(std::list<Entity*>* entities);
    std::list<Entity*>* exit();
protected:
    std::unordered_set<Entity*> entities;
};

#endif // ACCOMMODATION_H
