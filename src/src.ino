#include <Arduino.h>
#include "cnode.h"
#include "node.h"
Node *nodes[1000]; 
void testNode()
{
    
    long ms = micros();

    for(int j=0;j<1000;j++)
    {
        for(int i=0;i<1000;i++)
        {
            nodes[i]->x = 4.0f;
            nodes[i]->y = 5.0f;
            nodes[i]->z = 6.0f;
        }
    }
    Serial.print("\nnode:");
    Serial.println(micros()-ms);
}
void testCnode()
{
    long ms = micros();
    for(int j=0;j<1000;j++)
    {
        for(int i=0;i<1000;i++)
        {
            x_node[i] = 4.0f;
            y_node[i] = 5.0f;
            z_node[i] = 6.0f;
        }
    }
    Serial.print("cnode:");
    Serial.println(micros()-ms);
}
void setup()
{
    Serial.begin(115200);
    for(int i=0;i<1000;i++)
    {
        nodes[i] = new Node();
    }
}
void loop()
{
    testCnode();
    testNode();
    delay(1000);
}