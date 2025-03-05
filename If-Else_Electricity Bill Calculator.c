#include <stdio.h>

int main() {
    int units;
    float bill = 0.0;
    
    
    scanf("%d", &units);
   
    if (units < 0) {
        printf("Invalid Input!");
        return 0;
    }
    
    
    
    if (units <= 100) {
        bill = units * 5.0;
    }
    else if (units <= 300) { 
        bill = (100 * 5.0) + ((units - 100) * 7.0);
    }
    else {  
        bill = (100 * 5.0) + (200 * 7.0) + ((units - 300) * 10.0);
    }
    
   
    if (bill <= 1200.0) {
        bill = bill - (bill / 10.0);  
    }
    
    
    printf("The electricity bill is: %.2f.", bill);
    
    return 0;
}
