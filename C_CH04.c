//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=640
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        if(n > 100) printf("error\n");
        else if(n >= 90) printf("A\n");
        else if(n >= 80) printf("B\n");
        else if(n >= 70) printf("C\n");
        else if(n >= 60) printf("D\n");
        else printf("E\n");
    }
    return 0;
}