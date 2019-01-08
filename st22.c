#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
int len,k;
char stra[257];
fgets(stra,257,stdin);
len=strlen(stra);
for(k=len-2;k>-1;k--){
    if((stra[k]>='a')&&(stra[k]<='z'))stra[k]-=32;
    else if((stra[k]>='A')&&(stra[k]<='Z'))stra[k]+=32;
    printf("%c",stra[k]);
}
    printf("\n");
return 0;
}