#include <stdio.h>
#include <stdlib.h>

struct student
{
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student* push(struct student *top);
struct student* pop(struct student *top);
void display(struct student *top);

int main()
{
    struct student *top = NULL; 
    int choice;

    while (1)
    {
        printf("\nMenu\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display Stack\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        if (choice == 1)
            top = push(top);
        else if (choice == 2)
            top = pop(top);
        else if (choice == 3)
            display(top);
        else if (choice == 4)
            break;
        else
            printf("Invalid choice\n");
    }

    return 0;
}


struct student* push(struct student *top)
{
    struct student *newnode = (struct student*)malloc(sizeof(struct student));
    printf("Enter id: ");
    scanf("%d",&newnode->id);
    printf("Enter Maths mark: ");
    scanf("%d",&newnode->Maths);
    printf("Enter Science mark: ");
    scanf("%d",&newnode->Science);

    newnode->next = top;
    top = newnode;

    printf("Pushed successfully\n");
    return top;
}


struct student* pop(struct student *top)
{
    if (top == NULL)
    {
        printf("Stack is empty\n");
        return NULL;
    }

    struct student *temp = top;
    printf("Popped entry:\nID: %d  Maths: %d  Science: %d\n",
           temp->id, temp->Maths, temp->Science);

    top = top->next;
    free(temp);
    return top;
}


void display(struct student *top)
{
    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }

    struct student *temp = top;
    printf("\nStack (Top -> Bottom):\n");
    printf("ID   Maths   Science\n");
    while (temp)
    {
        printf("%d    %d      %d\n", temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }
}
