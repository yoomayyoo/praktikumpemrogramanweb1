#include <stdio.h>

int MaxBilangan(int x, int y, int z, int w){
    int max = x;

    if (y > max){
        max = y;
    }
    if (z > max){
        max = z;
    }
    if (w > max){
        max = w;
    }
    return max;
}

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int hasil = MaxBilangan(a, b, c, d);
    printf("%d", hasil);
    
    return 0;
}