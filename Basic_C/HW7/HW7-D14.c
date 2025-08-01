/*
Задание D14 – Печать всех нечётных.
Дана последовательность целых чисел через пробел, завершающаяся цифрой 0. 
Выведите все нечетные числа из этой последовательности, сохраняя их порядок.
Input: Последовательность не нулевых целых чисел. В конце число 0
Output: Введенная последовательность, кроме четных чисел в том же порядке. 
Цифру 0 не выводить
*/

#include <stdio.h>

void print_odd(void)
{
    int n;
    if(scanf("%d", &n) != 1)
    {
        printf("Error input");
        return;
    }
    if(n == 0)
        return;
    if(n & 1)
        printf("%d ", n);
    print_odd();
}

int main(void)
{   
    print_odd();
    printf("\n");
    
    return 0;
}