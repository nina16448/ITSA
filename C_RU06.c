//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=2280
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int f(int n){
    if(n == 0 || n == 1) return n + 1;
    return f(n - 1) + f(n / 2);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    return 0;
}