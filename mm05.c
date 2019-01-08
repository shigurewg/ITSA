#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
double a,b;
while(scanf("%lf",&a)!=EOF){
b=a*a;
b*=10;
b+=0.5;
printf("%.1lf\n",b/10);
}
return 0;
}
