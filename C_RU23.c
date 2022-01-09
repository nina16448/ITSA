//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=29334
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

double f(int n){
    if(n == 1) return 1;
    return (f(n - 1) + 2) / 2.0;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%.5f\n", f(n));
    return 0;
}