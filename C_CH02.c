//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=556
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){
    char c;
    while(scanf("%c", &c) != EOF){
        switch(c){
            case 'E':
                printf("ByeBye\n");
                break;
            case 'M':
                printf("Male\n");
                break;
            case 'F':
                printf("Female\n");
                break;
        }
    }
    return 0;
}