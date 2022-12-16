#include <stdio.h>
 
int main (){
 
int f = 1;
int n = 7;
 
for(int i = 1;i <= n;i++){
f *= i;
}
 
printf("F = %i\n",f);
f *= 10;
printf("F * 10 = %i\n",f);
 
return 0;
}
