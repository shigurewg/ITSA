#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
int a;
double b;
while(scanf("%d",&a)!=EOF){
b=a;
printf("%.1lf\n",b*1.6);
}
return 0;
}