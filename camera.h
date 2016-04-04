#pragma once
#ifndef Camera_H
#define Camera_H
#include "structs.h"
#include "character.h"


class Camera
{
    Vector2 _position;
    Dimension _dimension;
    Character* _charToFollow;
public:
    // Initialise camera
    Camera();
    // Clear camera
    ~Camera();
}

#endif