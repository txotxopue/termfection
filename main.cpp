#include "scenario.h"
#include "structs.h"
#include <iostream>


int main() 
{
    Vector2 p;
    p.x = 0;
    p.y = 0;
    Scenario* scene = new Scenario;
    bool bVar = scene->isWalkable(p);
    std::cout << "Hello World!" << std::endl;
}