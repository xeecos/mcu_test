#pragma once
class Node
{
    public:
        float x;
        float y;
        float z;
        Node(float x=0.0, float y=0.0, float z=0.0)
        {
            this->x = x;
            this->y = y;
            this->z = z;
        }
};