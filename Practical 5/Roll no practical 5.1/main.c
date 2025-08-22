#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rollno[10];
    char name[10][50];
    int i;
    for (i=0; i < 10; i++) {
        printf("Enter Roll no. of student %d: ", i + 1);
        scanf("%d", &rollno[i]);
        printf("Enter Name of student %d: ", i + 1);
        scanf("%s", name[i]);
    }
    printf("\n---Student Details---\n");
    for (i = 0; i < 10; i++) {
        printf("Roll no: %d\tName: %s\n", rollno[i], name[i]);
    }

    return 0;
}
