#include <stdio.h>
int main(){
    int a = 4;
    int b = 8;
    int c = 3;
    int sama_dengan_ab = (a == b) ? 1 : 0;
    int lebih_besar_bc = (b > c) ? 1 : 0;
    int tidak_sama_ac = (a != c) ? 1 : 0;
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);
    printf("Apakah a sama dengan b? jawabannya adalah %d\n", sama_dengan_ab);
    printf("Apakah b lebih besar dari c? jawabannya adalah %d\n", lebih_besar_bc);
    printf("Apakah a tidak sama dengan c? jawabannya adalah %d\n", tidak_sama_ac);
    return 0;
}