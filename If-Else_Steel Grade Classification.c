#include <stdio.h>

int main() {
    int h, t;
    float c;
    
    
   
    scanf("%d %f %d", &h, &c, &t);
    
    
    if (h < 0  || c < 0.0 || c > 1.0 || t < 0 ) {
        printf("Invalid Input\n");
        return 0;
    }
    
    
    int grade;
    int conditions_met;
    
    if (h > 50 && c < 0.7 && t > 5600) {
        grade = 10;
        conditions_met = 3;
    }
    else if (h > 50 && c < 0.7) {
        grade = 9;
        conditions_met = 2;
    }
    else if (c < 0.7 && t > 5600) {
        grade = 8;
        conditions_met = 2;
    }
    else if (h > 50 && t > 5600) {
        grade = 7;
        conditions_met = 2;
    }
    else if ((h > 50) + (c < 0.7) + (t > 5600) == 1) {
        grade = 6;
        conditions_met = 1;
    }
    else {
        grade = 5;
        conditions_met = 0;
    }
    
   
    printf("The grade of the steel is: %d\n", grade);
    
    
    if (conditions_met == 0) {
        printf("None of the conditions met.\n");
    }
    else if (conditions_met == 1) {
        printf("Only one condition met.\n");
    }
    else if (conditions_met == 2) {
        printf("Two conditions met.\n");
    }
    else {
        printf("All of the conditions met.\n");
    }
    
    return 0;
}
