#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
int a,b;
long long int sum;
while(scanf("%d",&a)!=EOF){
for(sum=1,b=2;b<=a;b++){
    sum*=b;
}
printf("%lld\n",sum);
}
return 0;

}