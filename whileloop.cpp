
#include <stdio.h>
 
int main () {
	printf("a good wheight for differnts heights\n");

  int H = 160 , W = H - 100 ;
  while( H < 200 ) {
    printf("heigt:%dcm weight:%dkg\n",H,W);
     
      H++;
      W=H-100;
     
 }
 return 0;
}
