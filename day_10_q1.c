// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/




#include <stdio.h>

int main() {
    int a, b, c;

    // Read three side lengths
    printf("Enter three sides of the triangle: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Invalid input\n");
        return 1;
    }

    // Check triangle inequality
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Not a triangle\n");
    }
    else if (a == b && b == c) {
        printf("Equilateral\n");
    }
    else if (a == b || b == c || a == c) {
        printf("Isosceles\n");
    }
    else {
        printf("Scalene\n");
    }

    return 0;
}

