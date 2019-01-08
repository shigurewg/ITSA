#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
int a,b;
while(scanf("%d",&a)!=EOF){
b=1000-254*3;
a*=1000;
a=a/b;
b=a%b;
if(b!=0)a++;
printf("%d\n",a);
}
return 0;
}