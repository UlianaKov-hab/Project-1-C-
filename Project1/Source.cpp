#include<iostream>
using namespace std;
int min(int arr[], int SIZE)
{
    int min = arr[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;

}
int max(int arr[], int SIZE)
{
    int max = arr[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;

}
float aver(int arr[], int SIZE)
{
    float sum = 0;
    float avar = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += arr[i];
    }
    avar = sum / (float)SIZE;
    return avar;
}


int main()
{
    int const SIZE = 5;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = 1 + rand() % 20;
        cout << arr[i] << endl;
    }
    cout << endl;
    cout << "min = " << min(arr, SIZE) << endl;
    cout << "max = " << max(arr, SIZE) << endl;
    cout << aver(arr, SIZE);

    return 0;
}
