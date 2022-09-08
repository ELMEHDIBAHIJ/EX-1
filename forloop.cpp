#include <stdio.h>
 
int main () {
	printf("a good wheight for differnts heights\n");

  int H , W ;
  for(H = 160, W = H - 100; H < 200 ;H++,W=H-100 ) {
    printf("heigt:%dcm weight:%dkg\n",H,W);
     
      
     
 }
 return 0;
}
