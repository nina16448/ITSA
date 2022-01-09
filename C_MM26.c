//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6928
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        printf("%d*%d=%d\n", i, i, i*i);
    }
    return 0;
}