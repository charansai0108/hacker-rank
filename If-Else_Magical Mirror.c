#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    if (N <= 0) {
        printf("The verdict for the number %d is: INVALID\n", N);
        return 0;
    }
    int cond1 = (N % 2 == 0 && N > 10);
    int cond2 = (N > 15 && N % 3 == 0);
    int cond3 = (N % 7 == 0);
    int condition = cond1 + cond2 + cond3;
    if (condition== 3) {
        printf("The verdict for the number %d is: SUPERNATURAL\n", N);
    }
    else if (condition == 2) {
        printf("The verdict for the number %d is: MIRACULOUS\n", N);
    }
    else if (condition == 1) {
        printf("The verdict for the number %d is: MAGICAL\n", N);
    }
    else {
        printf("The verdict for the number %d is: NORMAL\n", N);
    }
    return 0;
}
