//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6951
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){
    int x, y;
    scanf("%d%d", &x, &y);
    if(!x && !y) printf("Origin\n");
    else if(!y) printf("x-axis\n");
    else if(!x) printf("y-axis\n");
    else if(x > 0 && y > 0) printf("1st Quadrant\n");
    else if(x < 0 && y > 0) printf("2nd Quadrant\n");
    else if(x < 0 && y < 0) printf("3rd Quadrant\n");
    else printf("4th Quadrantt\n");
    return 0;
}