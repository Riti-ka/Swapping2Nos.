#include<stdio.h>
int main()
{
int x=2, y=3;
printf("Before swapping: x=%d, and y=%d", x,y);
x=x+y;
y=x-y;
x=x-y;
printf("\nAfter swapping: x=%d, and y=%d", x,y);
return 0;
}
