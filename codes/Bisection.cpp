//
// Created by stybill on 11/04/2017.
//

#include <iostream>
#include <cmath>
#include <algorithm>
#include "Bisection.h"

Bisection::bisection(double left, double right, double Epsilon, int steps, int steps_threshold) {
    double mid = (left + right) / 2;
    double f_mid = f(mid), f_left = f(left), f_right = f(right);
    printf("%.15lf\n", mid);
    if (steps > steps_threshold) {
        printf("Program failed!");
        return mid;
    }
    if (fmax(fabs(f_mid - f_left), fabs(f_mid - f_right)) < Epsilon && fabs(f_mid) < Epsilon) {
        return mid;
    } else {
        if ((f_mid > 0 && f_left < 0) || (f_mid < 0 && f_left > 0)) {
            return Bisection::bisection(left, f_left, mid, f_mid, Epsilon, steps + 1, steps_threshold);
        } else {
            return Bisection::bisection(mid, f_mid, right, f_right, Epsilon, steps + 1, steps_threshold);
        }
    }
}

double Bisection::bisection(double left, double f_left, double right, double f_right, double Epsilon, int steps,
                            int steps_threshold) {
    double mid = (left + right) / 2;
    double f_mid = f(mid);
    printf("%.15lf\n", mid);
    if (steps > steps_threshold) {
        printf("Program failed!");
        return mid;
    }
    if (fmax(fabs(f_mid - f_left), fabs(f_mid - f_right)) < Epsilon && fabs(f_mid) < Epsilon) {
        return mid;
    } else {
        if ((f_mid > 0 && f_left < 0) || (f_mid < 0 && f_left > 0)) {
            return Bisection::bisection(left, f_left, mid, f_mid, Epsilon, steps + 1, steps_threshold);
        } else {
            return Bisection::bisection(mid, f_mid, right, f_right, Epsilon, steps + 1, steps_threshold);
        }
    }
}