#include "structs.h"
#include "scenario.h"


Scenario& Scenario::getInstance()
{
    // The only instance
    // Guaranteed to be lazy initialized
    // Guaranteed that it will be destroyed correctly
    static Scenario instance;
    return instance;
}

void Scenario::getMapChunk(Vector2 pCameraPosition, Dimension pDimension, char* outMap)
{
    outMap = _dimension.width * (pCameraPosition.y - 1) + pCameraPosition.x;
    //int arrayLength = pDimension.width*pDimension.height;
    //outMap = (char*)malloc(arrayLength*sizeof(char));
}