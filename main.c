#include <stdio.h>
#include <stdlib.h>

#define max 5

typedef struct queue
{
  int arr[5];
  int head;
  int tail;
}q;

void create_queue(q* qu)
{
    qu->head=0;
    qu->tail=0;
}

void ENqueue(q* qu, int data)
{
    if(qu->tail == max)
    {
        printf("Sorry");
    }
    else
    {
        qu->arr[qu->tail] = data;
        qu->tail++;;
    }

}

void DEqueue(q* qu)
{
    int i = 0;
    int data = 0;
    if(qu->tail == qu->head)
    {
        printf("Empty");
    }
    else
    {
        data = qu ->arr[qu->head];
        for(i = 0; i< qu->tail-1;i++)
        {
            qu->arr[i] = qu->arr[i+1];
        }
        qu->tail--;
    }
    return data;
}

void display_queue(q* qu)
{
    int i;
    if(qu->tail == qu->head)
    {
        printf("Empty");
    }
    else
    {
        for(i = 0; i< qu->tail;i++)
        {
            printf("%d ",qu->arr[i]);
        }
    }
}

int main()
{
    q q1;
    create_queue(&q1);
    ENqueue(&q1, 10);
    ENqueue(&q1, 20);
    ENqueue(&q1, 30);
    ENqueue(&q1, 40);
    ENqueue(&q1, 50);
    DEqueue(&q1);
    display_queue(&q1);
    return 0;
}
