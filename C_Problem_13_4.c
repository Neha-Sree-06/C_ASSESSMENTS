#include <stdio.h>
#include <stdlib.h>

struct student
{
    int id;
    int Maths;
    int Science;
    struct student *prev;
    struct student *next;
};


struct student* createSampleList();
struct student* insertEntry(struct student *head);
struct student* deleteEntry(struct student *head);
void display(struct student *head);

int main()
{
    struct student *head;
    int choice;

    head = createSampleList();  
    while (1)
    {
        printf("\nMenu\n");
        printf("1. Insert Entry\n");
        printf("2. Delete Entry\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
            head = insertEntry(head);
        else if (choice == 2)
            head = deleteEntry(head);
        else if (choice == 3)
            display(head);
        else if (choice == 4)
            break;
        else
            printf("Invalid choice\n");
    }

    return 0;
}


struct student* createSampleList()
{
    int i;
    struct student *head = NULL, *temp = NULL, *newnode;

    int ids[5] = {1,2,3,4,5};
    int maths[5] = {80,85,90,75,88};
    int science[5] = {70,78,92,80,86};

    for (i=0;i<5;i++)
    {
        newnode = (struct student*)malloc(sizeof(struct student));
        newnode->id = ids[i];
        newnode->Maths = maths[i];
        newnode->Science = science[i];
        newnode->next = NULL;
        newnode->prev = NULL;

        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
    }
    return head;
}


struct student* insertEntry(struct student *head)
{
    struct student *newnode, *temp=head;
    int key, choice;

    newnode = (struct student*)malloc(sizeof(struct student));

    printf("Enter new id: ");
    scanf("%d",&newnode->id);
    printf("Enter Maths mark: ");
    scanf("%d",&newnode->Maths);
    printf("Enter Science mark: ");
    scanf("%d",&newnode->Science);
    newnode->next = newnode->prev = NULL;

    printf("Insert \n1.Before or \n2.After \ngiven id: ");
    scanf("%d",&choice);
    printf("Enter the id: ");
    scanf("%d",&key);

    while (temp && temp->id != key)
        temp = temp->next;

    if (!temp)
    {
        printf("ID not found\n");
        free(newnode);
        return head;
    }

    if (choice == 1) 
    {
        newnode->next = temp;
        newnode->prev = temp->prev;

        if (temp->prev)
            temp->prev->next = newnode;
        else
            head = newnode; 

        temp->prev = newnode;
    }
    else 
    {
        newnode->prev = temp;
        newnode->next = temp->next;

        if (temp->next)
            temp->next->prev = newnode;

        temp->next = newnode;
    }

    return head;
}


struct student* deleteEntry(struct student *head)
{
    int key;
    struct student *temp = head;

    printf("Enter ID to delete: ");
    scanf("%d",&key);

    while (temp && temp->id != key)
        temp = temp->next;

    if (!temp)
    {
        printf("ID not found\n");
        return head;
    }

    if (temp->prev)
        temp->prev->next = temp->next;
    else
        head = temp->next; 

    if (temp->next)
        temp->next->prev = temp->prev;

    free(temp);
    printf("Deleted successfully\n");
    return head;
}

void display(struct student *head)
{
    struct student *temp = head;

    if (!head)
    {
        printf("List is empty\n");
        return;
    }

    printf("\nID   Maths   Science\n");
    while (temp)
    {
        printf("%d    %d      %d\n", temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }
}
