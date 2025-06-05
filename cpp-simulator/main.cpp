#include "Target.h"
#include "Sensor.h"
#include "KalmanFilter.h"
#include <iostream>
#include <Eigen/Dense>

int main() {
    Target target(0, 0, 1, 0.5);
    Sensor sensor(0.1);
    KalmanFilter kf;

    for (int t = 0; t < 100; ++t) {
        target.move(1.0);
        auto [mx, my] = sensor.observe(target);

        kf.predict();
        kf.update(Eigen::Vector2d(mx, my));

        std::cout << "Time: " << t
                  << " | True: (" << target.x << ", " << target.y << ")"
                  << " | Measured: (" << mx << ", " << my << ")"
                  << " | Estimated: (" << kf.state(0) << ", " << kf.state(1) << ")\n";
    }

    return 0;
}