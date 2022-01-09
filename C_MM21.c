//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6915
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
typedef long long lint;

lint f(lint n){
    if(!(n / 2)) return 1;
    return n * f(n - 1);
}

int main(){
    lint n;
    while(scanf("%lld", &n) != EOF){
        printf("%lld\n", f(n));
    }
    return 0;
}