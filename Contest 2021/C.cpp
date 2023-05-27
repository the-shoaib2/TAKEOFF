// the.shoaib2
//C. L-Watch Shape
#include <stdio.h>
int main() {
    int d;

    while (scanf("%d", &d) == 1) {
        double squareArea = d * d;
        double radius = d / 2.0;
        double semicircleArea = 0.5 * 3.1416 * radius * radius;
        double totalArea = squareArea + semicircleArea;
        printf("%.2f\n", totalArea);
    }

    return 0;
}
