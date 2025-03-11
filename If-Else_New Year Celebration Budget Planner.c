#include <stdio.h>

int main() {
    int budget, numGuests, foodCostPerGuest, decorationCost, musicCost, extraExpenses;
    scanf("%d %d %d %d %d %d", &budget, &numGuests, &foodCostPerGuest, 
          &decorationCost, &musicCost, &extraExpenses);
          
    int total_food_cost = numGuests * foodCostPerGuest;
    
    int total_cost = total_food_cost + decorationCost + musicCost + extraExpenses;
    if (total_cost > budget) {
        printf("Celebration Denied\n");
    }
    else {
        if (numGuests <= 5 || numGuests > 50) {
            printf("Celebration Denied\n");
        }
        else {
            if (numGuests > 25 && musicCost == 0) {
                printf("Celebration Denied\n");
            }
            else {
                int decoration_condition = decorationCost < (0.3 * budget);
                
                int food_condition = total_food_cost < (0.5 * budget);
                
                if (!decoration_condition && !food_condition) {
                    printf("Celebration Denied\n");
                }
                else {
                    printf("Celebration Approved\n");
                }
            }
        }
    }
    return 0;
}
