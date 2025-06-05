#include "KalmanFilter.h"

KalmanFilter::KalmanFilter() {
    state = Eigen::VectorXd(4); // [x, y, vx, vy]
    state << 0, 0, 0, 0;

    P = Eigen::MatrixXd::Identity(4, 4);
    F = Eigen::MatrixXd::Identity(4, 4);
    F(0, 2) = 1;
    F(1, 3) = 1;

    Q = Eigen::MatrixXd::Identity(4, 4) * 0.01;
    H = Eigen::MatrixXd(2, 4);
    H << 1, 0, 0, 0,
         0, 1, 0, 0;

    R = Eigen::MatrixXd::Identity(2, 2) * 0.1;
}

void KalmanFilter::predict() {
    state = F * state;
    P = F * P * F.transpose() + Q;
}

void KalmanFilter::update(const Eigen::VectorXd& measurement) {
    Eigen::VectorXd y = measurement - H * state;
    Eigen::MatrixXd S = H * P * H.transpose() + R;
    Eigen::MatrixXd K = P * H.transpose() * S.inverse();

    state = state + K * y;
    P = (Eigen::MatrixXd::Identity(4, 4) - K * H) * P;
}