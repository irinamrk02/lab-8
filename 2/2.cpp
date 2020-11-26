// 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
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
		mass[i] = rand() % 30;
		cout << mass[i] << " ";
	}
	cout << "\n";
	
	int a, b;
	cout << "Введите начало и конец интервала: ";
	cin >> a >> b;

	cout << "Элементы: ";

	for (int i = 0; i < N; i++)
	{
		if (mass[i] < a || mass[i]> b)
		{
			cout << mass[i] << " ";
		}
	}
	cout << endl;

	return 0;
}