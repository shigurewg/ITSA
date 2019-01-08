#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
int a,b;
while(scanf("%d%d",&a,&b)!=EOF){
if((a<=100)&&(b<=100)){
if((a*a+b*b)<10000)
printf("inside\n");
else printf("outside\n");
}
else printf("outside\n");
}
return 0;
}