#include <stdio.h>
int search(int a[],int lom,int X)
{ int i;
    for( i=0; i<lom; i++)
    {
        if(a[i]==X) return i;
    }
    return -1;
}
int main()
{
    int mat[10]= {5,8,-10,69,420,18,-42,78,99,100};
    int num;
    printf("Enter the number that you want to search:");
    scanf("%d",&num);
    int place=search(mat,10,num);
    if(place>=0)
        printf("The number you searched is in the %d. place of the list.",place+1);
    else
        printf("The number you searched doesn't appear on the list.");
}
