#include <stdio.h>
#include <stdlib.h>

struct NODE {
    int data;
    struct NODE *next;
};

struct NODE* createNode(int value) {
    struct NODE *newNode = (struct NODE*)malloc(sizeof(struct NODE));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Insert at any position (1 = beginning)
struct NODE* insertAtPosition(struct NODE *head, int value, int position) {
    struct NODE *newNode = createNode(value);

    if (position == 1) {
        newNode->next = head;
        return newNode;
    }

    struct NODE *temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range!\n");
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

void display(struct NODE *head) {
    struct NODE *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct NODE *head = NULL;
    int n, value, pos;

    printf("How many nodes initially? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        head = insertAtPosition(head, value, i + 1);
    }

    printf("Enter value to insert: ");
    scanf("%d", &value);

    printf("Enter position: ");
    scanf("%d", &pos);

    head = insertAtPosition(head, value, pos);

    printf("Updated List:\n");
    display(head);
}
