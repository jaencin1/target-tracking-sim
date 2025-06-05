#ifndef TARGET_H
#define TARGET_H

class Target {
public:
    double x,y,vx,vy;

    Target(double x_init,double y_init,double vx_init, double vy_init);
    void move(double dt);
};

#endif