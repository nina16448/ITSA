//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6912
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        printf("%X\n", n);
    }
    return 0;
}