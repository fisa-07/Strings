#include<stdio.h>
#include<string.h>

char *rightRotate(char *a,int n){
    while(n){
        int i=strlen(a)-1;
        char m=a[i];
        while(i>0){
            a[i]=a[i-1];
            i--;
        }
        a[0]=m;
        n--;
    }
    return a;
}

int main(){
    char a[50];
    int l;
    int n;
    scanf("%s",a);
    l = strlen(a);
    scanf("%d",&n);
    printf("%s",rightRotate(a,n));
    return 0;
}