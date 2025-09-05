// Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/


#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Store number in a temporary variable
    originalNum = num;
    
    // Count number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }
    
    // Reset originalNum to the input number
    originalNum = num;
    
    // Calculate sum of power of digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    
    // Check if number is Armstrong
    if ((int)result == num)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    
    return 0;
}

