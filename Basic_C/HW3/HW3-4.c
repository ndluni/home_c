#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d+%d+%d=%d\n", a, b, c, a+b+c);  // Форматная строка "%d+%d+%d=%d\n" определяет формат вывода: она выводит значения переменных a, b, и c, а затем их сумму a+b+c.
    printf("%d*%d*%d=%d\n", a, b, c, a*b*c);  // Форматная строка "%d*%d*%d=%d\n" выводит значения переменных a, b, и c, а затем их произведение a*b*c.
    return 0;
}