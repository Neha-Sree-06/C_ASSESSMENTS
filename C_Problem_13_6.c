#include <stdio.h>
#include <stdlib.h>

struct student {
    int id, Maths, Science;
    struct student *next;
};

int main() 
{
    struct student *head = NULL;
    int choice;

    while (1) 
    {
        printf("\nMenu\n1. Add\n2. Remove\n3. Display Queue\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) 
        {
            struct student *newnode = (struct student*)malloc(sizeof(struct student));
            printf("Enter id Maths Science: ");
            scanf("%d%d%d", &newnode->id, &newnode->Maths, &newnode->Science);
            newnode->next = head;
            head = newnode;
            printf("Added successfully\n");
        }
        else if (choice == 2) 
        {
            if (!head) 
            {
                printf("Queue is empty\n");
                continue;
            }
            struct student *temp = head, *prev = NULL;
            while (temp->next) 
            {
                prev = temp;
                temp = temp->next;
            }
            if (!prev)
                head = NULL;
            else
                prev->next = NULL;
            printf("Removed entry: ID=%d Maths=%d Science=%d\n", temp->id, temp->Maths, temp->Science);
            free(temp);
        }
        else if (choice == 3) 
        {
            if (!head) 
            {
                printf("Queue is empty\n");
                continue;
            }
            printf("Queue (Top -> Bottom):\nID  Maths  Science\n");
            struct student *temp = head;
            while (temp) 
            {
                printf("%d   %d     %d\n", temp->id, temp->Maths, temp->Science);
                temp = temp->next;
            }
        }
        else if (choice == 4)
            break;
        else
            printf("Invalid choice\n");
    }

    return 0;
}
