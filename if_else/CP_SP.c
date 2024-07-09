#include<stdio.h>
int main(){
    int cp,sp,p,l;
    printf("Enter Cost Price : ");
    scanf("%d",&cp);
    printf("Enter Selling Price : ");
    scanf("%d",&sp);
    if(sp>cp){
        printf("Profit Ocuurs\n");
        p = sp - cp;
        printf("Profit is %d",p);
    }
    if(cp>sp){
        printf("Loss Ocuurs\n");
        l = cp - sp;
        printf("Loss is %d",l);
    }
    if(sp==cp){
        printf("No Profit and No Loss");
    }

    return 0;
}