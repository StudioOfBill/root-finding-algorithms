//
// Created by stybill on 11/04/2017.
//

#include "_3_a_false_position_beats_bisection.h"

#include "Bisection.h"
#include "False_position.h"

static void _3_a_false_position_beats_bisection::False_position_beats_bisection() {
    Bisection::bisection(-100, 10000, 1e-6, 0, 1e3);
    False_position::false_position(-100, 10000, 1e-6, 0, 1e3);
}