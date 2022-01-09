//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6943
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
typedef long long lint;

int main(){
    lint n;
    scanf("%lld", &n);
    for(lint i = 2; i <= n; i++){
        lint f = 0;
        for(lint j = 2; j * j <= i; j++){
            if(i % j == 0){
                f += j;
                if(j * j != i)f += i / j;
            }
        }
        if(i == 6) printf("6");
        if(f + 1 == i && i != 6) printf(" %lld", i);
    }
    printf("\n");
    return 0;
}