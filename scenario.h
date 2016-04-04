#pragma once
#ifndef Scenario_H
#define Scenario_H
#include "structs.h"


class Scenario
{
    Dimension _dimension;
    char _map[400];
    
    ////// Singleton stuff
    // Private Constructor
    //Scenario();
    // Stop the compiler generating methods of copy the object
    //Scenario(Scenario const& copy);            // Not Implemented
    //Scenario& operator=(Scenario const& copy); // Not Implemented
public:
    // Initialise scenario (allocate and load map?)
    Scenario();
    // Clear scenario (free map memory?)
    ~Scenario();
    
    // Gets the singleton instance
    //static Scenario& getInstance();
    
    // Get map chunk visible from camera position given certain screen dimensions
    void getMapChunk(Vector2 pCameraPosition, Dimension pDimension, char* outMap);

    // Draw a given char at a given position in the map buffer
    void drawChar(char pCharToDraw, Vector2 pPosition);
    
    // Is the given position walkable?
    bool isWalkable(Vector2 pPosition);
};

#endif