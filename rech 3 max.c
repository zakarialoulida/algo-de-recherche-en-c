#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[100];
    int n;
    printf(" entrer le nbr  d'element " );
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf(" valeur de t[%d]=",i );
        scanf("%d",&t[i]);
    }
    rech3max(t,n);
    return 0;
}



void rech3max(int t[],int n)
{
  int max1,max2,max3 ;
    for(int i=0; i<n; i++)
    {
        if (max1<t[i])
        {
            max3=max2;
            max2=max1;
            max1=t[i];
        }
        else if(t[i]>max2)
        {
            max3=max2;
            max2=t[i];
        }
        else if(t[i]>max3)
        {
            max3=t[i];
        }
    }

printf("les 3 max 1/ 2 /3 sont les suivants :%d/%d/%d",max1,max2,max3);
}
