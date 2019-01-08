#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
int k,j,T;
char str[257];
while(fgets(str,257,stdin)!=NULL){
    T=0;
    k=strlen(str)-2;
    if(k==1){
        if(str[0]!=str[1]){
            printf("NO\n");
            T=1;
        }
    }
    for(j=0;(j!=k)&&((j-k)!=1);j++,k--){
        if(str[j]!=str[k]){
            printf("NO\n");
            T=1;
            break;
        }

    }
if(T==0){
printf("YES\n");
}

}


return 0;
}
