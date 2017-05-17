//
// Created by stybill on 11/04/2017.
//

#include <cmath>

#include "False_position.h"

#define f_1(x) x / 1000
#define f_0(x) pow(x, 2) + 1000 * x

double False_position::false_position_1(double position_a, double position_b, double Epsilon, int steps,
                                      int steps_threshold) {
    double f_b = f_1(position_b), f_a = f_1(position_a);
    double S = position_b - f_b * ((position_a - position_b) / (f_a - f_b));
    double f_s = f_1(S);
    printf("%.15lf\n", S);
    if (steps > steps_threshold) {
        printf("Program failed!");
        return S;
    }
    if (fmax(fabs(f_s - f_a), fabs(f_s - f_b)) < Epsilon && fabs(f_s) < Epsilon) {
        return S;
    } else {
        if ((f_a > 0 && f_s < 0) || (f_a < 0 && f_s > 0)) {
            return false_position(position_a, f_a, S, f_s, Epsilon, steps + 1, steps_threshold);
        } else {
            return false_position(S, f_s, position_b, f_b, Epsilon, steps + 1, steps_threshold);
        }
    }
}

double False_position::false_position_1(double position_a, double f_a, double position_b, double f_b, double Epsilon,
                                      int steps, int steps_threshold) {
    double S = position_b - f_b * ((position_a - position_b) / (f_a - f_b));
    double f_s = f_1(S);
    printf("%.15lf\n", S);
    if (steps > steps_threshold) {
        printf("Program failed!");
        return S;
    }
    if (fmax(fabs(f_s - f_a), fabs(f_s - f_b)) < Epsilon && fabs(f_s) < Epsilon) {
        return S;
    } else {
        if ((f_a > 0 && f_s < 0) || (f_a < 0 && f_s > 0)) {
            return false_position(position_a, f_a, S, f_s, Epsilon, steps + 1, steps_threshold);
        } else {
            return false_position(S, f_s, position_b, f_b, Epsilon, steps + 1, steps_threshold);
        }
    }
}


double False_position::false_position_0(double position_a, double position_b, double Epsilon, int steps,
                                        int steps_threshold) {
    double f_b = f_0(position_b), f_a = f_0(position_a);
    double S = position_b - f_b * ((position_a - position_b) / (f_a - f_b));
    double f_s = f_0(S);
    printf("%.15lf\n", S);
    if (steps > steps_threshold) {
        printf("Program failed!");
        return S;
    }
    if (fmax(fabs(f_s - f_a), fabs(f_s - f_b)) < Epsilon && fabs(f_s) < Epsilon) {
        return S;
    } else {
        if ((f_a > 0 && f_s < 0) || (f_a < 0 && f_s > 0)) {
            return false_position(position_a, f_a, S, f_s, Epsilon, steps + 1, steps_threshold);
        } else {
            return false_position(S, f_s, position_b, f_b, Epsilon, steps + 1, steps_threshold);
        }
    }
}

double False_position::false_position_0(double position_a, double f_a, double position_b, double f_b, double Epsilon,
                                        int steps, int steps_threshold) {
    double S = position_b - f_b * ((position_a - position_b) / (f_a - f_b));
    double f_s = f_0(S);
    printf("%.15lf\n", S);
    if (steps > steps_threshold) {
        printf("Program failed!");
        return S;
    }
    if (fmax(fabs(f_s - f_a), fabs(f_s - f_b)) < Epsilon && fabs(f_s) < Epsilon) {
        return S;
    } else {
        if ((f_a > 0 && f_s < 0) || (f_a < 0 && f_s > 0)) {
            return false_position(position_a, f_a, S, f_s, Epsilon, steps + 1, steps_threshold);
        } else {
            return false_position(S, f_s, position_b, f_b, Epsilon, steps + 1, steps_threshold);
        }
    }
}