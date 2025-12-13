#include <stdio.h>
#include <stdlib.h>

struct student
{
    int id;
    int Maths;
    int Science;
    struct student *next;
};

int main()
{
    struct student *head = NULL;
    struct student *tail = NULL;
    struct student *newnode;
    int id;

    while (1)
    {
        printf("Enter student id (-1 to stop): ");
        scanf("%d", &id);

        if (id == -1)
            break;

        newnode = (struct student *)malloc(sizeof(struct student));

        newnode->id = id;

        printf("Enter Maths mark: ");
        scanf("%d", &newnode->Maths);

        printf("Enter Science mark: ");
        scanf("%d", &newnode->Science);

        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }

    printf("\nStudent Details:\n");

    if (head == NULL)
    {
        printf("No records found\n");
    }
    else
    {
        struct student *temp = head;

        while (temp != NULL)
        {
            printf("ID: %d  Maths: %d  Science: %d\n",
                   temp->id, temp->Maths, temp->Science);
            temp = temp->next;
        }
    }

    return 0;
}
