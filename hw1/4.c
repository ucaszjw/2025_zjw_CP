#include <stdio.h>
#define a x
int x = 4;
void b(){x = a * 3; printf("%d\n", x);}
void c(){int x = 1111; printf("%d\n", a + 1);}
int main(){b(); c(); return 0;}