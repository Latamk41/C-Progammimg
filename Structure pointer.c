#include <stdio.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct Student s;
    struct Student *p;

    p = &s;

    printf("Enter roll: ");
    scanf("%d", &p->roll);

    printf("Enter name: ");
    scanf("%s", p->name);

    printf("Enter marks: ");
    scanf("%f", &p->marks);

    printf("\n--- Student Details ---\n");
    printf("Roll = %d\n", p->roll);
    printf("Name = %s\n", p->name);
    printf("Marks = %.2f\n", p->marks);

    return 0;
}
