# target-tracking-sim
# https://github.com/jaencin1/target-tracking-sim.git
Target Tracking Simulation System

  About

This C++ project simulates a real time target tracking system using a Kalman Filter, designed to reflect the dynamics of radar and sensor based systems commonly found in aerospace and defense environments. It models sensor noise, target motion, and predictive filtering to emulate how defencse systems might track fast moving objects such as aircraft or missiles.

  Features

Simulated Target Motion – Models a moving object in 2D/3D space
Kalman Filter Implementation – Filters noisy measurements to estimate true target position
Modular Architecture – Easily extendable for more complex sensors, 3D tracking, or multi-target simulation

  Technologies Used

C++ – Core simulation and filter logic
Visual Studio Code – Development environment

  Why It Matters

This project is inspired by real world sensor fusion and tracking systems used in defense and aerospace. It showcases:

Algorithmic problem solving using the Kalman Filter.
Simulation and modeling of noisy environments.
Programming and systems thinking with C++.
Understanding of real time tracking constraints.

  Developer Notes

This simulation mimics how radar systems work:
You're tracking a moving target (like an aircraft), while only receiving imperfect or noisy data from sensors. Using a Kalman Filter, the system predicts and corrects the target's position over time, just like real radar or missile defense systems do.


  Future Improvements 

Add visualization for target

