#include <stdio.h>
#include <math.h>

int main() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);

    printf("Rounded value: %.1f\n", round(num * 10) / 10);
    return 0;
}
