// user input into an array
#include <stdio.h>
int main()
{
    int n;
    int j=0;
    
    printf("Enter the number of integers you want to enter:\n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid input!\n");
    }
    else
    {
    int a[n];
    printf("Enter the integers:\n");
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    }
}
 
