#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;

    // Input coordinates of the two points
    printf("Enter coordinates of point 1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter coordinates of point 2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Calculate the distance using the distance formula
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Display the result
    printf("Distance between the two points: %lf\n", distance);

    return 0;
}
