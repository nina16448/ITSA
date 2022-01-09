//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=694
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){
    int a, b, c, d, e, sum;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    sum = a + 2 * (b + c + d) - 2 * e;
    if(sum >= 45) printf("A\n");
    else if(sum >= 35) printf("B\n");
    else if(sum >= 25) printf("C\n");
    else printf("D\n");
    return 0;
}