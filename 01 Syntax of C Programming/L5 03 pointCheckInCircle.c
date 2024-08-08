#include<stdio.h>
#include<math.h>

float inout() {
    int x, y, a, b, r;
    float d;
    printf("Enter x, y center point\n");
    scanf("%d %d", &x, &y);
    printf("Enter a, b from which point you want to check\n");
    scanf("%d %d", &a, &b);
    printf("Enter the radius\n");
    scanf("%d", &r);
    d = sqrt(pow((x - a), 2) + pow((y - b), 2));

    if (d > r) {
        printf("Not within circle\n");
    } else {
        printf("Within circle\n");
    }
    return d; // Added return statement if needed
}

int main() {
    inout();
    return 0;
}
