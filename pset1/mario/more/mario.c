#include <stdio.h>

int main(void)
{
    int n , i , j;
    do
    {
    printf("Enter the height\n");
    scanf("%d", &n);
    }while (n < 0 || n > 23);
    for ( i = 0 ; i < n ; i++)
    {
        for ( j = 0 ; j < (n-i) ; j++)
         {  
             printf(" "); 
         }
        for ( j = 0 ; j <= i ; j++)
         {  
             printf("#"); 
         }
        printf("  ");
        for ( j = 0 ; j <= i ; j++)
         { 
              printf("#"); 
         }
        printf ("\n");
    }
}