#include<stdio.h>
#define MAX 100
int stack[MAX];
int top=-1;
void push (int value){
if (top == MAX-1) {
 printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed into stack\n", value);
    }
}
void pop() {
if (top == -1) {
printf("stack underflow\n");
} else {
printf("%d popped from stack\n" , stack[top]);
top--;
}
}
int main(){
push(10);
push(20);
push(30);
pop();
pop();
return 0;
}



