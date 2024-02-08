#include<stdio.h>
int main() {
    int x,y,z;
    printf("Enter three different integers: ");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y) {
        (x>z)? printf("%d is the largest integer",x): printf("%d is the largest integer",z);
    }
    if(y>x) {
        (y>z)? printf("%d is the largest integer",y): printf("%d is the largest integer",z);
    }
    return 0;
}