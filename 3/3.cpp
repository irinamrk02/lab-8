// 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;


int main()
{
    setlocale(0, "");
    int* mass, N;
    cout << "Введите размерность массива: " << endl;
    cin >> N;
    mass = new int[N];
    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        mass[i] = rand() % 5;
        cout << mass[i] << " ";
    }
    cout << "\n";

    int min = mass[0];
    int index = 0;
    for (int i = 1;i < N;i++)
    {
        if (mass[i] <= min)
        {
            min = mass[i];
            index = i;
        }
    }

    cout << "Последний минимальный элемент = " << min << "\n";
    cout << "Индекс последний минимального элемента = " << index << endl;
    return 0;
}

