﻿#include<iostream>
#include<Windows.h>
#include<ctime>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    srand(time(NULL));

    int const SIZE = 10;
    int arr[SIZE];

    bool alreadyThere;

    for (int i = 0; i < SIZE; )
    {
        alreadyThere = false;
        int newRandomValue = rand() % 20;

        for (int j = 0; j < i; j++)
        {
            if (arr[j] == newRandomValue)
            {
                alreadyThere = true;
                break;
            }

        }
        if (!alreadyThere)
        {
            arr[i] = newRandomValue;
            i++;
        }

    }
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << endl;
    }


}