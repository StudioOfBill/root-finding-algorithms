//
// Created by stybill on 11/04/2017.
//

#ifndef CODES_BISECTION_H
#define CODES_BISECTION_H


class Bisection {
public:
    double bisection(double left, double right, double Epsilon, int steps, int steps_threshold);
    double bisection(double left, double f_left, double right, double f_right, double Epsilon, int steps, int steps_threshold);
};


#endif //CODES_BISECTION_H
