//middle element in linked list
#include <stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *temp;

void ins_beg(struct node *new1)
{
    if(head == NULL)
    {
        head = new1;
    }
    else
    {
        new1->next = head;
        head = new1;
    }
}

void ins_end(struct node *new1)
{
    temp = head;
    if(head == NULL)
    {
        head = new1;
    }
    else
    {
        while(temp->next!= NULL)
        {
            temp = temp->next;
        }
        temp->next = new1;
    }
}

void del_beg()
{
    if(head == NULL)
    {
        printf("No items to delete\n");
    }
    else
    {
        head = head->next;
    }
}

void del_end()
{
    struct node *temp = head;
    struct node *temp1 = head;
    if(head == NULL)
    {
        printf("No items to delete\n");
    }
    else
    {
        while(temp1->next != NULL)
        {
            temp1->next = temp;
        }
        while(temp->next != temp1)
        {
            temp->next = temp;
        }
        temp1 = NULL;
        temp->next = NULL;
        free(temp);
    }
}

int main()
{
    int choice;
    struct node *new1;

    while(1)
    {
        printf("Enter your choice:- \n");
        printf("1. Insert at Begin\n2. Insert at End\n3. Delete at Begin\n4. Delete at End\n5. Traverse\n6. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            new1 = (struct node*)malloc(sizeof(struct node));
            printf("Enter the data:- \n");
            scanf("%d", new1->data);
            new1->next = NULL;
            ins_beg(new1);
            break;
        
        case 2:
            new1 = (struct node*)malloc(sizeof(struct node));
            printf("Enter the data:- \n");
            scanf("%d", &new1->data);
            new1->next = NULL;
            ins_end(new1);
            break;

        case 3:
            del_beg();
            break;

        case 4:
            del_end();
            break;

        case 5:
            traverse();
            break;

        case 6:
            exit(1);

        default:
            printf("Wrong Input");
            continue;
        }
    }
    return 0;
}