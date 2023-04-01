#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        int k;
        scanf("%d%d",&n,&k);
        int b=n-k;
        printf("\n%d",b);
    }
   return 0; 
    
}