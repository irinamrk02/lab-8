// 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<ctime>

using namespace std;
int arif(int** a, int n, int m) 
{
    int sr = 0, k = 0; 
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 2; j >= 0; j--) 
        {
            if (a[i][j] % 2 == 0) 
            {
                sr += a[i][j];
                k++;
            }
        }
        m--;
    }
    if (k == 0) 
    {
        return 0;
    }
    return (sr / k); 
}
int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    int** a, n, m; 
    cout << "Введите размерность двумерного массива: " << endl;
    cin >> n;
    m = n; 
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
            a[i][j] = rand() % 10;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Ср. арифметическое ниже главное диагонали массива = " << arif(a, n, m) << endl;
}

