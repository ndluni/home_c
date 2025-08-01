/*
Задание С4 – Функция по формуле.
Описать функцию вычисления f(x) по формуле:
f(x)= x*x при -2 ≤ x < 2;
x*x+4x+5 при x ≥ 2;
4 при x < -2.
Используя эту функцию для n заданных чисел, вычислить f(x). 
Среди вычисленных значений найти наибольшее.
Input: Последовательность не нулевых целых чисел, в конце последовательности число 0.
Output: Одно целое число
*/

#include <stdio.h>

int f(int x)
{
    int res;
    if(x >= -2 && x < 2)
    {
        res = x*x;
    }
    else if(x >= 2)
    {
        res = x*x+4*x+5;
    }
    else if(x < -2)
    {
        res = 4;
    }
    return res;
}

int main(void)
{
    int n;
    int max = 1;
    while(scanf("%d", &n) == 1 && n != 0) 
    {
        int t = f(n);
        if(t > max) max = t;
    }
    printf("%d\n", max);
    return 0;
}