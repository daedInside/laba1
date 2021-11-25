#include <stdio.h>
#include <iostream>
using namespace std;


int main()
{

    setlocale(LC_ALL, "Russian");
    int N, k = 0;
    cout << "N="; cin >> N;

    int* b = new int[N];

    cout << "ВВедите " << N << " цифр(ы):\n";
    for (int i = 0; i < N; i++)
        cin >> b[i];

    int q = (int)b[1] / b[0];
    for (int i = 1; i < N - 1; i++)
        if ((int)b[i + 1] / b[i] != q) { k++; break; }

    if (k == 0) cout <<"Знаменатель прогрессии:" << q << endl;
    else cout << 0 << endl;
    return 0;
}