#include <stdio.h>
#define SIZE 80
int stack[SIZE], tos = -1;
void push(int x)
{
    if (tos == SIZE - 1)
        printf("\nStack Overflows");
    else
    {
        tos++;
        stack[tos] = x;
    }
}
int pop()
{
    int x = -9999;
    if (tos == -1)
        printf("\nStack Underflows");
    else
    {
        x = stack[tos];
        tos--;
    }
    return x;
}

int isEmpty()
{
    if (tos == -1)
        return 1;
    else
        return 0;
}

int stackTop()
{
    return (stack[tos]);
}

int isOperand(int s)
{
    if (s == '+' || s == '-' || s == '*' || s == '/' || s == '%' || s == '^' || s == '(' || s == ')')
        return 0;
    else
        return 1;
}

int getPrcedanceLevel(int symb)
{
    if (symb == '^')
        return 3;
    if (symb == '*' || symb == '/' || symb == '%')
        return 2;
    if (symb == '+' || symb == '-')
        return 1;
}

int prcd(int op1, int op2)
{
    int p1, p2;
    if (op1 == '(' || op2 == '(')
        return 0;
    if (op2 == ')')
        return 1;

    p1 = getPrcedanceLevel(op1);
    p2 = getPrcedanceLevel(op2);
    if (p1 >= p2)
        return 1;
    else
        return 0;
}

void intopost(char *infix, char *postfix)
{
    char symb;
    int i = 0, j = 0;
    while (infix[i] != '\0')
    {
        symb = infix[i];
        i++;
        if (isOperand(symb))
        {
            postfix[j] = symb;
            j++;
        }
        else
        {
            while (!isEmpty() && prcd(stackTop(), symb))
            {
                postfix[j] = pop();
                j++;
            }
            if (symb != ')')
                push(symb);
            else
                pop();
        }
    }
    while (!isEmpty())
    {
        postfix[j] = pop();
        j++;
    }
    postfix[j] = '\0';
}

void main()
{
    char infix[SIZE], symb, postfix[SIZE] = "";
    printf("\nEnter Infix Expression: ");
    scanf("%s",infix);
    intopost(infix, postfix);
    printf("\nPostfix = %s", postfix);
}