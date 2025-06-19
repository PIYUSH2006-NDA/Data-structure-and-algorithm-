#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *ptr) {
    return (ptr->top == -1);
}

int isfull(struct stack *ptr) {
    return ptr->top == (ptr->size - 1);
}

void push(struct stack *ptr, int val) {
    if (isfull(ptr)) {
        printf("stack is full\n");
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr) {
    if (isempty(ptr)) {
        printf("stack is empty\n");
        return -1;
    } else {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

void display(struct stack *ptr) {
    if (isempty(ptr)) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements (top to bottom):\n");
        for (int i = ptr->top; i >= 0; i--) {
            printf("%d\n", ptr->arr[i]);
        }
    }
}
int peek(struct stack *ptr) {
    if (isempty(ptr)) {
        printf("Stack is empty. Cannot peek.\n");
        return -1;
    } else {
        return ptr->arr[ptr->top];
    }
}


int main() {
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    
    s->size = 20;
    s->top = -1; // Initialize as empty stack
    s->arr = (int *)malloc(s->size * sizeof(int));
    
    push(s, 5);
    push(s, 15);
    push(s, 52);

    display(s);
int topElement = peek(s);
printf("Top element is: %d\n", topElement);

    printf("popped element is %d\n", pop(s));
    display(s);

    printf("is stack empty? %s\n", isempty(s) ? "yes" : "no");
    printf("is stack full? %s\n", isfull(s) ? "yes" : "no");

    free(s->arr);
    free(s);
    return 0;
}
