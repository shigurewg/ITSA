#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
int a,b;
double sum;
while(scanf("%d%d",&a,&b)!=EOF){
sum=0;
if(a>=60){
    sum+=60*b;
    a-=60;
    if(a>=60){
        sum+=60*1.33*b;
        a-=60;
        sum+=a*1.66*b;
    }
    else sum+=a*1.33*b;
}
else sum+=a*b;

printf("%.1lf\n",sum);
}
return 0;

}