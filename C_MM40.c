//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6957
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){
    int n, sum = 1;
    scanf("%d", &n);
    printf("1 ");
    for(int i = 2; i <= n; i++){
        printf("+ %d ", i);
        sum += i;
    }
    printf("= %d\n", sum);
    return 0;
}