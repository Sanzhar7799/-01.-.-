/* Упражнение 01. Различия в манипуляции строками (String) 
А)
1) strlen - в С++ есть функция length(), которая возвращает длину строки.
2) strcpy - в С++ есть функция copy(), которая копирует одну строку в другую.
3) strcmp - в С++ есть функция compare(), которая сравнивает две строки.
4) strcat - в С++ есть функция append(), которая добавляет одну строку к другой.
5) someString[index] - в С++ доступ к символу строки по индексу осуществляется также с помощью оператора [].
6) push_back - в С++ для добавления символа в конец строки используется функция push_back().
7) pop_back - в С++ для удаления последнего символа из строки используется функция pop_back().

Функции могут не иметь точного аналога в другом языке из-за различий в спецификации и подходе к работе со строками.
Главная разница между строками в С и С++ заключается в том, что в С строки представляются как массивы символов, а в С++ существует 
специальный класс string, который предоставляет удобные методы для работы со строками.

Б) */

```cpp
#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string input;
    std::cout << "Введите строку: ";
    std::getline(std::cin, input);

    // Удаляем пробелы и пунктуационные знаки
    input.erase(std::remove_if(input.begin(), input.end(), [](char c) {
        return std::isspace(c) || std::ispunct(c);
    }), input.end());

    // Сортируем строки
    std::sort(input.begin(), input.end());

    std::cout << "Отсортированная строка: " << input << std::endl;

    return 0;
}
/*Эта программа считывает строку с помощью `std::getline()` и удаляет 
из нее пробелы и пунктуационные знаки с помощью алгоритма `std::remove_if()` и лямбда-функции. 
Затем она сортирует символы в строке с помощью `std::sort()` и выводит отсортированную строку.
