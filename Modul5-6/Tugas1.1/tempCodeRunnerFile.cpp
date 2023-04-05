#include <iostream>
#include <conio.h>

using namespace std;

void bubleSort(int arr[])
{
    int i, j, tmp;
    for (i = 0; i < 11; i++)
    {
        for (j = 0; j < 11 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    cout << "==================" << endl;
    cout << "--- Buble Sort ---" << endl;
    cout << "==================" << endl;
    cout << "Hasil Sorting : " << endl;
    for (i = 0; i < 11; i++)
    {
        cout << arr[i] << " ";
    }
}

void selectionSort(int arr[])
{
    int i, j, tmp, swap;
    for (i = 0; i < 11; i++)
    {
        swap = i;
        for (j = i + 1; j < 11; j++)
        {
            if (arr[j] < arr[swap])
            {
                swap = j;
            }
        }
        tmp = arr[swap];
        arr[swap] = arr[i];
        arr[i] = tmp;
    }
    cout << "==================" << endl;
    cout << "- Selection Sort -" << endl;
    cout << "==================" << endl;
    cout << "Hasil Sorting : " << endl;
    for (i = 0; i < 11; i++)
    {
        cout << arr[i] << "  ";
    }
}

void insertionSort(int arr[])
{
    int i, j, tmp;
    for (i = 1; i < 11; i++)
    {
        tmp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > tmp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = tmp;
    }
    cout << "==================" << endl;
    cout << "- Insertion Sort -" << endl;
    cout << "==================" << endl;
    cout << "Hasil Sorting : " << endl;
    for (i = 0; i < 11; i++)
    {
        cout << arr[i] << "  ";
    }
}

void shellSort(int arr[])
{
    int i, j, temp, y;
    for (i = 11 / 2; i > 0; i = i / 2)
    {
        for (int j = i; j < 11; j++)
        {
            for (y = j - i; y >= 0; y -= i)
            {
                if (arr[y + i] < arr[y])
                {
                    temp = arr[y + i];
                    arr[y + i] = arr[y];
                    arr[y] = temp;
                }
            }
        }
    }
    cout << "==================" << endl;
    cout << "- Insertion Sort -" << endl;
    cout << "==================" << endl;
    cout << "Hasil Sorting : " << endl;
    for (i = 0; i < 11; i++)
    {
        cout << arr[i] << "  ";
    }
}
int main()
{
    int i, pil;
    do
    {
        system("cls");
        int data[] = {15, 8, 0, -2, 19, 42, 31, 81, -72, 1, 2};
        cout << "========================================" << endl;
        cout << "--------- SORTING (PENGURUTAN) ---------" << endl;
        cout << "========================================" << endl;
        cout << "1. Buble Sorting\n2. Selection Sorting\n3. Insertion Sorting\n4. Shell Sorting\n5. Exit" << endl;
        cout << "Data Sebelum Diurutkan : " << data[];
    }
}