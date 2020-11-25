//WAP to find the greater of two numbers
//loops: if-else
#include <stdio.h>

int main()
{
    //declare the variable
    int x,y;
    
    //user input
    printf("enter  two numbers:");
    scanf("%d%d",&x,&y);
    
    //if-else
    if(x>y)
    printf("%d is greater then %d",x,y);
    else
    printf("%d is greater then %d",y,x);
    
    printf("\nlets play again!");
}
