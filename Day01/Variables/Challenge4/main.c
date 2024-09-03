#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km_h, m_s;
    printf("entrer la vitesse en kilometres par heure (km/h): ");
    scanf("%f",&km_h);
    m_s = km_h * 0.27778;
    printf("la vitesse en metres par seconde (m/s) est: %f",m_s);
    return 0;
}
