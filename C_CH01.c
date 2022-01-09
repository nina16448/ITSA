//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=549
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        switch(n){
            case 1:
                printf("Person\n");
                break;
            case 2:
                printf("Fairy\n");
                break;
            case 3:
                printf("Dwarf\n");
                break;
        }
    }
    return 0;
}