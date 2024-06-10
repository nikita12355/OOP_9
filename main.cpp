﻿#include <iostream>
#include"List.h"
#include"Error.h"

int main()
{
    system("chcp 1251");

    bool f = true;
    while (f) {
        try
        {
            // создание списков
            list<int> list1;
            list<int> list2;

            cout << endl;

            // ввод списков
            cout << "Введите количество элементов первого списка: ";
            cin >> list1;
            cout << "Введите количество элементов второго списка: ";
            cin >> list2;

            cout << endl;

            // сложение списков
            list<int> result = list1 + list2;
            cout << "Сумма списков: " << result << endl;

            cout << endl;

        }
        catch (IndexOutOfRangeError e) {
            e.PrintError();
            continue;
        }
        catch (NegativeIndexError e) {
            e.PrintError();
            continue;
        }
        catch (BasicError& err)
        {
            err.PrintError();
            f = false;
        }
    }
}