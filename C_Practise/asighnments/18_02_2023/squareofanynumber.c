#include <stdio.h>
double fabs(double x) {
    return (x < 0) ? -x : x;
}
double newton_sqrt(double S, double tol) {
    double x = S; // Initial guess
    while (1) {
        double next_x = 0.5 * (x + S / x);
        if (fabs(next_x - x) < tol)  // Stop when close enough
            break;
        x = next_x;
    }
    return x;
}

int main() {
    double number = 12.0;
    double tolerance = 1e-6;
    printf("Square root of %.2f is %.6f\n", number, newton_sqrt(number, tolerance));
    return 0;
}

