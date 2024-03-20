#include<stdio.h>
void CircularShift(int *x, int *y, int *z);

int main(){
    int a1,b1,c1;
    int *a=&a1, *b=&b1, *c=&c1;
    printf("Enter first number: ");
    scanf("%d", a);
    printf("Enter second number: ");
    scanf("%d", b);
    printf("Enter third number: ");
    scanf("%d", c);

    CircularShift(a,b,c);

    printf("After circular rotation \nFirst number=%d, Second number=%d, Third number=%d.\n",*a, *b, *c);
}

void CircularShift(int *x, int *y, int *z){
    int temp=*x;
    *x=*z;
    *z=*y;
    *y=temp;

    return;
}