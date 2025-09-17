#include <stdio.h>
#include <stdlib.h>

void swapValue(int a, int b) {
int temp;
temp = a;
a = b;
b = temp;
printf("inside swapValue - a: %d, b: %d\n", a, b);
}
int main()
{  int a, b;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
printf("Before swapValue - a: %d, b: %d\n", a, b);
swapValue(a, b);
printf("After swapValue - a: %d, b: %d\n", a, b);

    return 0;
}
