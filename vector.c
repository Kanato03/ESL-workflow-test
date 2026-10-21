#include "vector.h"

void vec_sum(const double a[3], const double b[3], double result[3]) {
    for (int i = 0; i < 3; i++) {
        result[i] = a[i] + b[i];
    }
}

void vec_sub(const double a[3], const double b[3], double result[3]) {
    for (int i = 0; i < 3; i++) {
        result[i] = a[i] - b[i];
    }
}

double vec_dot(const double a[3], const double b[3]) {
    double sum = 0.0;
    for (int i = 0; i < 3; i++) {
        sum += a[i] * b[i];
    }
    return sum;
}

void vec_cross(const double a[3], const double b[3], double result[3]) {
    result[0] = a[1] * b[2] - a[2] * b[1];
    result[1] = a[2] * b[0] - a[0] * b[2];
    result[2] = a[0] * b[1] - a[1] * b[0];
}