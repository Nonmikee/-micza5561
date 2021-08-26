#include<stdio.h>
int main() {
    float a;
    float b;
    scanf("%f", &a);
    scanf("%f", &b);
    float c;
    c = a / b / b;
    printf("%f\n", c);
    if (c > 30)
        printf("Obese");
    if (29.9 >= c && c >= 25)
        printf("Overweight");
    if (24.9 >= c && c >= 18.5)
        printf("Normal");
    if (18.5 > c)
        printf("Underweight");

    return 0;
}
