//reverse a stack using recursion
#include <stdio.h>
#define MAX 100  
int stack[MAX];
int top = -1;  
int isEmpty() {
    return (top == -1);
}
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow!\n");
        return;
    }
    stack[++top] = value;
}
int pop() {
    if (isEmpty()) {
        printf("Stack Underflow!\n");
        return -1;
    }
    return stack[top--];
}
void printStack() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}
void insertAtBottom(int item) {
    if (isEmpty()) {
        push(item);
        return;
    }
    int temp = pop();
    insertAtBottom(item);
    push(temp);
}
void reverseStack() {
    if (isEmpty()) {
        return;
    }
    int temp = pop();
    reverseStack();
    insertAtBottom(temp);
}
int main() {
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    printf("Original ");
    printStack();
    reverseStack();
    printf("Reversed ");
    printStack();
    return 0;
}