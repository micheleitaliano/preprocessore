#include <stdio.h>
#define ABSOLUTE(num) (num)<0 ? (num)*-1 : (num)
int main(){
    int x;
    printf("inserisi il valore di cui vuoi calcolare il valore assoluto\n");
    scanf("%d",&x);
    x=ABSOLUTE(x);
    printf("il valore assoluto del tuo numero e' %d",x);
}