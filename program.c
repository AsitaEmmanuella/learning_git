#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int sum(int count, int numbers[]);

int main(void) {
    int n, mycount;
    printf("How many numbers did you input? \n");
    scanf("%d", &mycount);

    if (mycount <= 0) {
        printf("Invalid input count.\n");
        return 1;
    }

    int *mynumbers = (int *)malloc(mycount * sizeof(int));
    if (mynumbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter your numbers here: \n");
    for (int i = 0; i < mycount; i++) {
        scanf("%d", &mynumbers[i]);
    }

    n = sum(mycount, mynumbers);
    printf("Sum: %d\n", n);

    free(mynumbers);  // Free the dynamically allocated memory
    return 0;
}

int sum(int count, int numbers[]) {
    int result = 0;

    for (int i = 0; i < count; i++) {
        result += numbers[i];
    }

    return result;
}




