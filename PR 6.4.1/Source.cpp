// Lab 6.4
// ����������� �� ������������� ����������� ��������� ������
// ������ 7
// ������� ³�����

#include <conio.h>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
#include <ctime>

using namespace std;
int main()

{
    srand(time(0));
    const int n(10);
    int a[n];
    int i;

    for (i = 0; i < n; i++)              // ��������� �����
    {
        a[i] = rand() % 100;         // ���������� ����������� �������
        cout << a[i] << ", ";
    }

    int Max = a[0];          // ���������� ��������
    int i_max = 0;

    {
    for (i = 1; i < n; i++)

        if (Max < a[i])     // ����� ����. �������

            Max = a[i];
            i_max = i;
 
     }
    

    void Print1(int* a, const int Max, const int i_max);

    cout << "\n Maximum number: " << Max << endl;         // ������� ���� �� �����
    cout << " Index of the maximum element: " << i_max << endl << endl;
    

    void Create(int* b);

    int b[n], j = n / 2, k = 0;         // ����������� ����� ����� � 2 ������� ���� ���������� � ���� ������ � ��������
    for (i = 0; i < n; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            b[j] = a[i];
            j++;
        }
        else
        {
            b[k] = a[i];
            k++;
        }
    }
    void Print(int b);
    {
    for (i = 0;i < n; i++)              //  �������� �����
    
        cout << b[i] << "  ";
        cout << endl;
    }
    _getch();
    return 0;
}