#include<stdio.h>

struct node {
    int data;
    struct node *next;
};

struct node *head;

void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));

    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {

        printf("Enter the data of node 1: ");
        scanf("%d", &data);

        head->data = data; // Link the data field with data
        head->next = NULL; // Link the address field to NULL

        temp = head;
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));

            if(newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);

                newNode->data = data; // Link the data field of newNode with data
                newNode->next = NULL; // Link the address field of newNode with NULL

                temp->next = newNode; // Link previous node i.e. temp to the newNode
                temp = temp->next;
            }
        }

        printf("SINGLY LINKED LIST CREATED SUCCESSFULLY\n");
    }
}

void deleteFirstNode()
{
    struct node *temp;

    if(head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        temp = head;
        head = head->next;

        printf("\nData deleted = %d\n", temp->data);

        free(temp);

        printf("SUCCESSFULLY DELETED FIRST NODE FROM LIST\n");
    }
}

void displayList()
{
    struct node *temp;

    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data);
            temp = temp->next;
        }
    }
}
void deleteLastNode()
{
    struct node *toDelete, *secondLastNode;

    if(head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        toDelete = head;
        secondLastNode = head;

        /* Traverse to the last node of the list */
        while(toDelete->next != NULL)
        {
            secondLastNode = toDelete;
            toDelete = toDelete->next;
        }

        if(toDelete == head)
        {
            head = NULL;
        }
        else
        {
            /* Disconnect link of second last node with last node */
            secondLastNode->next = NULL;
        }

        /* Delete the last node */
        free(toDelete);

        printf("SUCCESSFULLY DELETED LAST NODE OF LIST\n");
    }
}
void deleteMiddleNode(int position)
{
    int i;
    struct node *toDelete, *prevNode;

    if(head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        toDelete = head;
        prevNode = head;

        for(i=2; i<=position; i++)
        {
            prevNode = toDelete;
            toDelete = toDelete->next;
        }

            prevNode->next = toDelete->next;
            toDelete->next = NULL;

            free(toDelete);

            printf("SUCCESSFULLY DELETED NODE FROM  LIST\n");
        }
}

int main()
{
    int n, choice , position;


    printf("Enter the total number of nodes: ");
    scanf("%d", &n);

    createList(n);

    printf("\nEnter the node position you want to delete: ");
    scanf("%d", &position);

    if(position==1)
        deleteFirstNode();
    else if(position==n)
        deleteLastNode();
    else
       deleteMiddleNode( position);

    printf("\nData in the list \n");
    displayList();

    return 0;
}



