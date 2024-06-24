#include <stdio.h>
int main(){
    int a = 4;
    int b = 3;
    int c = 5;
    int t = 0;
    if(a<b)
        t = a;
        a = b;
        b = t;
    if(a<c)
        t = a;
        a = c;
        c = t;
    printf("%d %d %d",a,b,c);
}