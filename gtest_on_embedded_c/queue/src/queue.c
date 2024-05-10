#include "queue.h"

#define QUEUE_SIZE 15

static int queue[QUEUE_SIZE];
static int head, tail, count;

void queue_Init(void)
{
    head = tail = count = 0;
}


void queue_Reset()
{
    queue_Init();
}

int queue_Count()
{
    return count;
}

int queue_Push(int i)
{
    if(count == QUEUE_SIZE)
        return -1;
        
    queue[tail] = i;
    tail = (tail + 1) % QUEUE_SIZE;
    count++;
    return 0;
}

