#include <stdio.h>
#define PI 3.1416
int main() {
 float r, d, c, a;
 printf("Enter radius of a circle: ");
 scanf("%f", &r);
 d = 2 * r;
 c = 2 * PI * r;
 a = PI * r * r;
 printf("Diameter: %.2f Circumference: %.2f Area:  %.2f", d, c, a);
 return 0;
}
