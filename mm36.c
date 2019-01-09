#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
int a;
while(scanf("%d",&a)!=EOF){
if(a<=2)
printf("Winter\n");
else if(a<=5)
printf("Spring\n");
else if(a<=8)
printf("Summer\n");
else if(a<=11)
printf("Autumn\n");
else 
printf("Winter\n");
}
return 0;
}