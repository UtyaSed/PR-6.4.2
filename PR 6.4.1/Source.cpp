// Lab 6.4
// Опрацювання та впорядкування одновимірних динамічних масивів
// Варіант 7
// Обухова Віктора

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

    for (i = 0; i < n; i++)              // обявляємо масив
    {
        a[i] = rand() % 100;         // заповнюєно рамндомними числами
        cout << a[i] << ", ";
    }

    int Max = a[0];          // присвоюємо саксимум
    int i_max = 0;

    {
    for (i = 1; i < n; i++)

        if (Max < a[i])     // шукаєо макс. елемент

            Max = a[i];
            i_max = i;
 
     }
    

    void Print1(int* a, const int Max, const int i_max);

    cout << "\n Maximum number: " << Max << endl;         // вводимо його на екран
    cout << " Index of the maximum element: " << i_max << endl << endl;
    

    void Create(int* b);

    int b[n], j = n / 2, k = 0;         // створюється новий масив і 2 індекса один починається з нуля другий з середини
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
    for (i = 0;i < n; i++)              //  виводимо масив
    
        cout << b[i] << "  ";
        cout << endl;
    }
    _getch();
    return 0;
}