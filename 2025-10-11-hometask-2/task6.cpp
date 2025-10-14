#include <stdio.h>
#include <math.h>
float discrim(float a, float b, float c) {
    float square_b = b * b;
    float mul_4ac = 4 * a * c;
    float discr = square_b - mul_4ac;
    return discr;
}

float countroot_1(float a, float b, float c, float discr) {
    float sumroot = -b + sqrt(discr);;
    float root_1 = sumroot / (2 * a);
    return root_1;
}

float countroot_2(float a, float b, float c, float discr) {
    float minroot = -b - sqrt(discr);
    float root_2 = minroot / (2 * a);
    return root_2;
}

float countlinear(float b, float c) {
    float root = -c / b;
    return root;
}

int main() {

    printf("This is a square solver program! To solve equation ax^2 + bx + c = 0, enter coefficients a, b, c\n");
    float a;
    printf("Enter a: ");
    scanf("%f", &a);

    float b;
    printf("Enter b: ");
    scanf("%f", &b);

    float c;
    printf("Enter c: ");
    scanf("%f", &c);

    float discr = discrim(a, b, c);

    if (a == 0) {
        float root_linear = countlinear(b, c);
        printf("root_linear: %f\n", root_linear);
    }
    else if (discr < 0) {
        printf("корней нет-discr<0");
    }
    else if (discr == 0) {
        float root = countroot_1(a, b, c, discr);
        printf("root: %f\n", root);
    }
    else {
        float root_1 = countroot_1(a, b, c, discr);
        float root_2 = countroot_2(a, b, c, discr);
        printf("roots: %f, %f\n", root_1, root_2);
    }
}
    