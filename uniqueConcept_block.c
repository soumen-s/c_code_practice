// Program to see how the PRECEDENCY OF A SCOPE actually works in a code

/*
    As soon we redefined the third variable inside a scope, an another 
    local variable(third) will be created under that scope or block.
    
    As the priority of block is more than the normal variables, thats
    why first the block complete it's work, the the normal ones.
*/

#include <stdio.h>
int main()
{
    int first = 10;
    int second = 20;
    int third = 30;
    
    {
        int third = second - first;
        printf("Value, when it's inside the block : %d", third);
    }
    
    printf("\nValue, when it's outside the block : %d", third);
    return 0;
}
