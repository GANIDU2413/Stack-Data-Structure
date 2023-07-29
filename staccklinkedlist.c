#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack *next;
};
    struct stack *top;

void push(){
    struct stack *new_node;
    new_node = (struct stack *) malloc(sizeof(struct stack));
    new_node->next=NULL;
    printf("Enter ur data : ");
    scanf("%d",&new_node->data);
    
        if (top == NULL)
        {
            top = new_node;
            printf("pushed %d",top->data);

        }else{
          
            new_node->next=top;
            top = new_node;
            printf("pushed %d",top->data);
        }
    
}

void pop(){
    struct stack *temp;
    if (top == NULL)
    {
        printf("out of memory");
    }else
    {
        temp = top;
        printf("poped %d",temp->data);
        top = temp->next;
        free(temp);
    }
    
    
}

void peek(){
    struct stack *temp;
    if (top == NULL)
    {
        printf("out of memory");
    }else
    {
        temp = top;
        printf("poped %d",temp->data);
        
    }
}

void display(){
    struct stack *temp;
    if (top == NULL)
    {
        printf("out of memory");
    }else
    {
        temp = top;
        printf("Stack :");
        while (temp != NULL)
        {
            printf("->%d ",temp->data);
            temp=temp->next;
        }
        free(temp);
    }
}

int main(int argc, char const *argv[])
{
    int ch;
    do
    {
        printf("\n\tstack using linkedlist\n1. push\n2. pop\n3. peek\n4. display\n0. exit\nenter ur choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 0:
        printf("\nexiting...");
            exit(0);
            break;
        default:
        printf("invalid input!");
            break;
        }
    
    }while (ch != 0);
    return 0;
}


