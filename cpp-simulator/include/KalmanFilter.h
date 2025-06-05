#ifdef KALMAN_FILTER_H
#define KALMAN_FILTER_H

#include <Eigen/Dense>

class KalmanFilter{
public:
    Eigen::VectorXd state;
    Eigen::MatrixXd P,F,Q,H,R;

    KalmanFilter();
    void predict();
    void update(const Eigen::VectorXd& measurement);
};

#endif