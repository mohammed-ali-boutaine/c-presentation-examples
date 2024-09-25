#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i , j;
    printf("\t TABLEAU DU MULTIPLICATION \n");

    for ( i = 0; i < 10 ; i++)
    {
        
        for ( j = 0; j < 10; j++)
        {
            printf("%d x %d =%d\t",i,j,i*j);
        }
        printf("\n");
        
    }
    
    return 0;
}