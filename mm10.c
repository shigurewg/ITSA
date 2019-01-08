#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
double b;
while(scanf("%lf",&b)!=EOF){
b=b*9/5+32;
printf("%.1lf\n",b);
}
return 0;
}