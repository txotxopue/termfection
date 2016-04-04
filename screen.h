#pragma once
#ifndef Screen_H
#define Screen_H
#include "structs.h"
#include "camera.h"


class Screen
{
    Dimension _dimension;
    Camera* _cameraToFollow;
public:
    // Initialise camera
    Screen();
    // Clear camera
    ~Screen();
}

#endif