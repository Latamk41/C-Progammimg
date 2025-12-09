#include <stdio.h>
#include <stdlib.h>

struct NODE {
    int data;
    struct NODE *next;
};

struct NODE* deleteEnd(struct NODE *head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return head;
    }

    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    struct NODE *temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;

    return head;
}

void display(struct NODE *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct NODE *head = NULL;
    struct NODE *newNode;
    int n, value;

    printf("How many nodes? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        newNode = (struct NODE*)malloc(sizeof(struct NODE));
        scanf("%d", &value);
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    head = deleteEnd(head);

    printf("After deleting last node:\n");
    display(head);
}
