#include <stdio.h>

void main(){
    int r;
    float l, v, phi=22/7;

    printf("Masukkan Nilai Jari-jari : ");
    scanf("%d", &r);

    printf("%.2f ", phi);

    l = 4*phi*(r*r);
    v = (4/3)*phi*(r*r*r);

    printf("%.3f \n%.3f", l, v);

    getchar();
    return 0;
}
