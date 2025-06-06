#include "Target.h"

Target::Target(double x_init,double y_init, double vx_init,double vy_init)
    :x(x_init),y(y_init),vx(vx_init),vy(vy_init){}

void Target::move(double dt){
    x += vx * dt;
    y += vy * dt;
}