#include <stdio.h>
int main(){
    int w, x, y, z;
    int i = 5, j = 13; // 均为全局变量
    {
      int j = 17; // 为局部变量，仅在大括号内有效
      i = j - 10; // i = 7
      w = i + j; // w = 24
    }
    x = i * j; // x = 91
    {
      int i = j; // 为局部变量，仅在大括号内有效，i = 13
      y = i * j; // y = 169
    }
    z = i + j; // z = 20
    printf("w = %d, x = %d, y = %d, z = %d\n", w, x, y, z);


    i = 9, j = 7; // 均为全局变量
    {
      int i = j + 1; // 为局部变量，仅在大括号内有效，i = 8
      w = i * 2; // w = 16
    }
    x = i - j; // x = 2
    {
      int j = 17; // 为局部变量，仅在大括号内有效
      i = 11;
      y = i + j; // y = 28
    }
    z = i + j; // z = 18
    printf("w = %d, x = %d, y = %d, z = %d\n", w, x, y, z);

    return 0;
}