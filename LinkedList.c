#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    int n;
    struct node * prev;
    struct node * next;
}*head,*h,*last,*temp,*temp1,*temp2,*current,*next,*previous;
int count = 0;
int main()
{
    int data, choice=1;
    head = NULL;
    last = NULL;
    while(choice != 0)
    {
        printf("============================================\n");
        printf("  WEB BROWSER HISTORY-DOUBLY LINKED LIST\n");
        printf("============================================\n");
        printf("1.Surfing the Information in Browser\n");
        printf("2.Display-Web Browser history\n");
        printf("3.Press Backward Button\n");
        printf("4.Press Forward Button\n");
        printf("5.Visit Alternate Node\n");
        printf("6.Exit from Web Browser\n");
        printf("--------------------------------------------\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            insertatend();
            break;
        case 2:
            Display();
            break;
        case 3:
            backward();
            break;
        case 4:
            forward();
            break;
        case 5:
            alternateroute();
            break;
        case 6:
            return;
        default:
            printf("Error! Invalid choice. Please choose between 1-6");
        }
        printf("\n\n\n\n\n");
    }
    return 0;
}
void insertatend()
{
    if (head == NULL)
    {
        create();
        head = temp;
        temp1 = head;
    }
    else
    {
        create();
        temp1->next = temp;
        temp->prev = temp1;
        temp1 = temp;
    }
}

void create()
{
    int data;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->next = NULL;
    printf("\nEnter the url to surf Information : ");
    scanf("%d", &data);
    temp->n = data;
    count++;
}

void Display()
{
    temp2 = head;
    if (temp2 == NULL)
    {
        printf("Web Browser History is empty\n");
        return;
    }
    printf("\nWeb Browser History\n");
    while (temp2->next != NULL)
    {
        printf("%d\n", temp2->n);
        temp2 = temp2->next;
    }
    printf("%d\n", temp2->n);
}

void backward()
{
    printf("Current Visited URL: %d\n",temp1->n);
    if(temp1->prev == NULL)
    {
        printf("We can't go Backward than this!!! Browser History Is Empty.\n");
    }
    else
    {
        temp1 = temp1->prev;
        printf("URL after press Backward button: %d\n",temp1->n);
    }
}

void forward()
{
    printf("Current Visited URL: %d\n",temp1->n);
    if(temp1->next == NULL)
    {
        printf("We can't go Forward than this!!! Browser History Is Empty.\n");
    }
    else
    {
        temp1 = temp1->next;
        printf("URL after press Forward button: %d\n",temp1->n);
    }
}

void alternateroute()
{
    h = temp1 -> prev ;
    current = temp1 ;
    previous= NULL ;

    while(current != NULL)
    {
        next = current -> next ;
        current -> prev = current -> next ;
        current -> next = previous ;
        previous = current ;
        current = next ;
    }
    h -> next = previous ;
    insertatend();
}
