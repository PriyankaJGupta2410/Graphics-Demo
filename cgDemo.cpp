#include<iostream> 
#include<graphics.h>
using namespace std; 

int main() 
{ 

    int gd = DETECT, gm; 

    initgraph(&gd, &gm, NULL); 

    circle(50, 50, 30); 
    line(0,0,640,480);

    delay(5000);
    closegraph(); 

    return 0; 
} 