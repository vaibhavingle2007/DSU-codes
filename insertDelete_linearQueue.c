#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5  // Maximum size of the queue

// Structure to represent the queue
typedef struct {
    int items[MAX_SIZE];
    int front;      // Index of the front element
    int rear;       // Index of the rear element
} Queue;

// Function prototypes
void initQueue(Queue *q);
int isFull(Queue *q);
int isEmpty(Queue *q);
void enqueue(Queue *q, int value);
int dequeue(Queue *q);
void display(Queue *q);

// Initialize the queue
void initQueue(Queue *q) {
    q->front = -1;
    q->rear = -1;
}

// Check if queue is full
int isFull(Queue *q) {
    return (q->rear == MAX_SIZE - 1);
}

// Check if queue is empty
int isEmpty(Queue *q) {
    return (q->front == -1 || q->front > q->rear);
}

// Insert an element into the queue (Enqueue)
void enqueue(Queue *q, int value) {
    // Check for queue overflow
    if (isFull(q)) {
        printf("Queue is Full! Cannot insert %d\n", value);
        return;
    }
    
    // If queue is empty, set front to 0
    if (q->front == -1) {
        q->front = 0;
    }
    
    // Increment rear and add the element
    q->rear++;
    q->items[q->rear] = value;
    
    printf("Inserted %d into the queue\n", value);
}

// Remove an element from the queue (Dequeue)
int dequeue(Queue *q) {
    // Check for queue underflow
    if (isEmpty(q)) {
        printf("Queue is Empty! Cannot delete element\n");
        return -1;
    }
    
    // Get the front element
    int deletedItem = q->items[q->front];
    
    // Move front pointer
    q->front++;
    
    printf("Deleted %d from the queue\n", deletedItem);
    return deletedItem;
}

// Display queue elements
void display(Queue *q) {
    // Check if queue is empty
    if (isEmpty(q)) {
        printf("Queue is Empty\n");
        return;
    }
    
    // Print queue elements
    printf("Queue elements:\n");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->items[i]);
    }
    printf("\n");
}

// Main function to demonstrate queue operations
int main() {
    Queue queue;
    
    // Initialize the queue
    initQueue(&queue);
    
    // Demonstration of queue operations
    printf("Queue Operations Demonstration:\n");
    
    // Enqueue elements
    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);
    
    // Display current queue
    printf("\nCurrent Queue:\n");
    display(&queue);
    
    // Dequeue elements
    dequeue(&queue);
    dequeue(&queue);
    
    // Display updated queue
    printf("\nQueue after Dequeue operations:\n");
    display(&queue);
    
    // Try to enqueue more elements
    enqueue(&queue, 40);
    enqueue(&queue, 50);
    
    // Final queue state
    printf("\nFinal Queue:\n");
    display(&queue);
    
    return 0;
}
