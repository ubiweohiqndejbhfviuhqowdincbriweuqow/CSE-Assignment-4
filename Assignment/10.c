#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter the lengths of the sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3) {
        printf("Triangle is equilateral.\n");
    }
    
    else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("Triangle is isosceles.\n");
    }
    //scalene mane andagunda tribujh
    else {
        printf("Triangle is scalene.\n");
    }

    return 0;
}
