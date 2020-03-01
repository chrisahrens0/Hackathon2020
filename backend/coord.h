#ifndef coord_h
#define coord_h
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct Site {
    float x;
    float y;
};

Site(float xc, float yc){
    x = xc;
    y = yc;
}
Site(){
    x = NULL;
    y = NULL;
}

float findDist(Site site1, Site site2){
    return sqrt(((site1->x + site2->x)^2)*((site1->y + site2->y)^2));
}