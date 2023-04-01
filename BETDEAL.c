#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        int A=100;
        int B=200;
        scanf("%d%d",&a,&b);
        int c=(A)*a/100;
        int d=(B)*b/100;
        (c>=d)?printf("FIRST"):printf("SECOND");
    }
    return 0;
    
}
