//P15//139900/2020
//ASSIGNMENT 2

#include <stdio.h>
int main()
{
  int Array[30];
  int pos;
  int i;
  int n;
  int value;
  printf("Enter the number of elements in an array\n");
  scanf("%d", &n);
 
  printf("\nEnter %d elements of an array \n", n);
  for (i=0;i<n;i++)
   {
     scanf("%d", &Array[i]);
   }
    
  printf("\nEnter the position of the element you want to insert in the array\n");
  scanf("%d", &pos);
    
  if(pos>=1 && pos<=n+1)
  {
  printf("\nEnter the value of the element you want to insert in the array\n");
  scanf("%d", &value);
  for (i=n-1;i>=pos-1;i--)
   {
         Array[i+1] = Array[i];
   }
  Array[pos-1] = value;
      
 printf("\nThe final Array after Inserting an the new element is:\n");
 for (i=0;i<=n;i++)
  {
     printf("%d\t", Array[i]);
  }
  }
    
    else
    {
        printf("\nINVALID POSITION\n");
    }
 return 0;
}
