#include <stdbool.h>
bool isValid(char* s) {

    struct Stack {
        char bracket[100000];
        int top;
    };
    struct Stack stack;
    stack.top = -1;
    int size = sizeof(s)/sizeof(s[0]);
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            stack.top++;
            stack.bracket[stack.top] = s[i];
        }else if(stack.top == -1){
            return false;
        }else if((s[i] == ')' && stack.bracket[stack.top] == '(') || (s[i] == ']' && stack.bracket[stack.top] == '[') || (s[i] == '}' && stack.bracket[stack.top] == '{')){
            stack.top--;
        }else if(s[i] == ')' || s[i] == ']' || s[i] == '}'){return false;}
        i++;
    }
    return stack.top == -1;
    }

    