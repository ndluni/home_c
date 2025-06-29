#include <stdio.h>  // include директива препроцессора для возможности использования внешних функций.
                //  stdio.h библиотека ввода-вывода , которая необходима для использования функции printf.

int main()  // определяем функцию main, является точкой входа в программу.
            // int основной тип целого числа со знаком.
{          // операторные скобки для обозначения начала функции.             
    
    const char *text[] = {"Let's", "go", "to walk"};     // объявляем массив строк слов, которые хотим выводить.
    // const char тип данных для строковых констант, которые указывают на свой первый символ в памяти, при этом строки не могут быть изменены. 
    int numWords = sizeof(text) / sizeof(text[0]);         // вводим переменную numWords типа int и определяем количество строк в массиве используя оператор sizeof (путем деления этих двух значений дает).  
    
    for (int i = 0; i < numWords; i++) {    // внешний цикл по каждому элементу массива text. Переменная i используется как индекс для доступа к элементам массива.                           
        
        for (int j = 0; j < i * 3; j++) {   // внутренний цикл для создания вида "лесенки" путем ввода пробелов перед каждым словом. Количество пробелов увеличивается с каждым шагом внешнего цикла: для первого слова (i=0) не будет пробелов, для второго (i=1) будет 3 пробела, для третьего (i=2) — 6 пробелов и т.д.
            printf(" ");
        }
        printf("%s\n", text[i]);          // После отступов выводится текущее слово из массива text, за которым следует переход на новую строку (\n).
    }

    return 0;  // Завершение функции main. Возврат 0 указывает на успешное завершение программы.
}        // операторные скобки для обозначения конца функции.