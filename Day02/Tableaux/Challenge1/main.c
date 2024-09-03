#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[]={1,2,3,4,5};
    int i;
    printf("les valeurs de tableau sont:\n");
    for(i=0;i<5;i++){
         printf("T[%d]=%d\n",i,T[i]);
    }
    return 0;
}
