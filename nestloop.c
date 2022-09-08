#include <stdio.h>
 
int main () {
    printf("a good wheight for differnts heights\n");
    int H = 160 , W = H - 100;
    while( H < 200 ) {
        while( W < 100){
            printf("heigt: %d cm weight: %d kg\n",H,W);

              H++;
              W= H - 100;
        }
    }


    return 0;
}
