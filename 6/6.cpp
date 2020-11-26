// 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(0, "");
	srand(time(NULL));
    int** a, n, m;
    cout << "Введите размерность двумерного массива: " << endl;
    cin >> n >> m;
    a = new int* [n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[m];
    }
    cout << "Массив: " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = rand() % 30;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

	int max = a[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
			}
		}
	}
	cout << "Максимальный элемент: " << max << endl;
	return 0;
}