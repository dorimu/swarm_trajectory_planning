#ifndef DATA_FITTING_H
#define DATA_FITTING_H

#include <cstdio>
#include <iostream>
#include <cmath>
#include <vector>

void fitting_run(double time_without_obstacles, std::vector<double> x, std::vector<std::vector<double>> y);
std::vector<double> lin_fit(std::vector<double> x, std::vector<double> y);
std::vector<double> exp_fit(std::vector<double> x, std::vector<double> y);

#endif //DATA_FITTING_H
