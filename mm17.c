#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
int a,b;
while(scanf("%d%d",&a,&b)!=EOF){
while(a!=b){
    if(a>b)a=a-b;
    else b=b-a;
}
printf("%d\n",a);
}
return 0;

}