//
// Created by stybill on 11/04/2017.
//

#ifndef CODES_FALSE_POSITION_H
#define CODES_FALSE_POSITION_H


class False_position {
public:
    double false_position_1(double position_a, double position_b, double Epsilon, int steps, int steps_threshold);
    double false_position_1(double position_a, double f_a, double position_b, double f_b, double Epsilon, int steps, int steps_threshold);
    double false_position_0(double position_a, double position_b, double Epsilon, int steps, int steps_threshold);
    double false_position_0(double position_a, double f_a, double position_b, double f_b, double Epsilon, int steps, int steps_threshold);
};


#endif //CODES_FALSE_POSITION_H
