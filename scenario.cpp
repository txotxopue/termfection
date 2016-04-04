#include "structs.h"
#include "scenario.h"


// Gets the singleton instance
/*
Scenario& Scenario::getInstance()
{
    // The only instance
    // Guaranteed to be lazy initialized
    // Guaranteed that it will be destroyed correctly
    static Scenario instance;
    return instance;
}
*/


// Scenario constructor
Scenario::Scenario()
{
    _dimension.width = 20;
    _dimension.height = 20;
}


// Get map chunk visible from camera position given certain screen dimensions
void Scenario::getMapChunk(Vector2 pCameraPosition, Dimension pDimension, char* outMap)
{
    int index = _dimension.width * (pCameraPosition.y - 1) + pCameraPosition.x;
    outMap = &_map[index];
    //int arrayLength = pDimension.width*pDimension.height;
    //outMap = (char*)malloc(arrayLength*sizeof(char));
}


// Draw a given char at a given position in the map buffer
void Scenario::drawChar(char pCharToDraw, Vector2 pPosition)
{
    int index = (_dimension.width * (pPosition.y - 1)) + pPosition.x;
    _map[index] = pCharToDraw;
}


// Is the given position walkable?
bool Scenario::isWalkable(Vector2 pPosition)
{
    return true;
}