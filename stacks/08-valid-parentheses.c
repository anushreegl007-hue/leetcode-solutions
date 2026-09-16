#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char stack[100];
    int top = -1;
    int i;
    int valid = 1;

    /* Test Case 1
       Input: ()[]{}
       Expected Output: Valid Parentheses
    */

    strcpy(str, "()[]{}");

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            top++;
            stack[top] = str[i];
        }
        else
        {
            if (top == -1)
            {
                valid = 0;
                break;
            }

            if ((str[i] == ')' && stack[top] != '(') ||
                (str[i] == ']' && stack[top] != '[') ||
                (str[i] == '}' && stack[top] != '{'))
            {
                valid = 0;
                break;
            }

            top--;
        }
    }

    if (top != -1)
        valid = 0;

    if (valid)
        printf("Test Case 1 - Valid Parentheses\n");
    else
        printf("Test Case 1 - Invalid Parentheses\n");

    /* Test Case 2
       Input: (]
       Expected Output: Invalid Parentheses
    */

    top = -1;
    valid = 1;

    strcpy(str, "(]");

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            top++;
            stack[top] = str[i];
        }
        else
        {
            if (top == -1)
            {
                valid = 0;
                break;
            }

            if ((str[i] == ')' && stack[top] != '(') ||
                (str[i] == ']' && stack[top] != '[') ||
                (str[i] == '}' && stack[top] != '{'))
            {
                valid = 0;
                break;
            }

            top--;
        }
    }

    if (top != -1)
        valid = 0;

    if (valid)
        printf("Test Case 2 - Valid Parentheses\n");
    else
        printf("Test Case 2 - Invalid Parentheses\n");

    return 0;
}