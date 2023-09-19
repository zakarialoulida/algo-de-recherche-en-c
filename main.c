#include <stdio.h>
#include <stdlib.h>

void rech(int T[],int n,int N){
int cmp=0;
for(int i=0; i<n; i++)
{
    if(T[i]==N)
    {
        printf("l'element recherche se trouveds indice %d ",i);
        cmp++;
    }
}
printf("l'element recherche se trouve %d fois",cmp);

}
int main()
{
    int t[100];
    int n;
    int N;
    printf(" entrer le nbr  d'element " );
        scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf(" valeur de t[%d]=",i );
        scanf("%d",&t[i]);
    }
        printf(" entrer le nbr  a chercher " );
        scanf("%d",&N);
         rech(t,n,N);

    return 0;
}
