#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double discriminant, root1, root2;

    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are %.2lf and %.2lf", root1, root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are %.2lf and %.2lf", root1, root2);
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are %.2lf + %.2lfi and %.2lf - %.2lfi", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}