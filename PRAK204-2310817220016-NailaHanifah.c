#include <stdio.h>
#include <math.h>
#define phi 3.142857
int main() {
    double r, t;
    scanf("%lf %lf", &r, &t);
    double volume = phi * pow(r, 2) * t;
    double luas = 2 * phi * r * (r + t);
    double keliling = 2 * phi * r;
    printf("Volume = %.2lf\n", volume);
    printf("Luas = %.2lf\n", luas);
    printf("Keliling = %.2lf\n", keliling);
    return 0;
}
