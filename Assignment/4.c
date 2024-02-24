#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(a-b>0 && a-c>0){
        printf("%d",a);
    } else if(b-a>0 && b-c>0){
        printf("%d",b);
    }else {
        printf("%d",c);
    }
    return 0;
}