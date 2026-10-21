#include <stdio.h>
#include "vector.h"

void print_vector(const char* name, const double v[3]) {
    printf("%s = (%.2f, %.2f, %.2f)\n", name, v[0], v[1], v[2]);
}

int main() {
    double a[3] = {1.0, 2.0, 3.0};
    double b[3] = {4.0, 5.0, 6.0};
    double result[3];

    printf("Вектор a: "); print_vector("a", a);
    printf("Вектор b: "); print_vector("b", b);

    vec_sum(a, b, result);
    printf("\nСумма a + b: "); print_vector("result", result);

    vec_sub(a, b, result);
    printf("Разность a - b: "); print_vector("result", result);

    double dot = vec_dot(a, b);
    printf("\nСкалярное произведение a · b: %.2f\n", dot);

    vec_cross(a, b, result);
    printf("Векторное произведение a × b: "); print_vector("result", result);

    return 0;
}