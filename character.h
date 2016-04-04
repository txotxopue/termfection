#pragma once
#ifndef Character_H
#define Character_H
#include "structs.h"


class Character
{
    // Position on world map
    Vector2 _position;
    // Character's char representation
    char _avatar;
    
public:
    // Initialise character
    Character();
    // Clear character
    ~Character();
    
    // Get world position
    Vector2 getPosition();
    
    // Get character's representing char
    char getAvatar();
    
    // Move the character in some direction
    void move(Vector2 pMovement);
}

#endif