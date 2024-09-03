#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Km, Yards;
    printf("entrer la distance en kilometres: ");
    scanf("%f",&Km);
    Yards = Km * 1093.61 ;
    printf("la distance en yards est: %f",Yards);
    return 0;
}
