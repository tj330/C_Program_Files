#include <stdio.h>
#include <math.h>
void main() {
    double a,b,c,d;
    double r1, r2;
    printf("Enter a, b and c respectively: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    d = pow(b, 2) - (4*a*c);
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are: %lf and %lf", r1, r2);
    }
    else if (d == 0) {
        r1 = -b / 2*a;
        printf("One real root: %lf", r1);
    }
    else {
        printf("No real roots, only complex roots");
    }
}
