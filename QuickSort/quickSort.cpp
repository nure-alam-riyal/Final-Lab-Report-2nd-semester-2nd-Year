#include <bits/stdc++.h>
using namespace std;
int partition(int arr[],int s,int e){
int pivot=arr[e];
int i=s-1;
for(int j=s;j<e;j++){
    if(arr[j]<pivot){
        i++;
        swap(arr[i],arr[j]);
    }
}
swap(arr[i+1],arr[e]);
return i+1;
}
void QuickSort(int arr[], int s, int e)
{
    if (s < e)
    {
        int p = partition(arr, s, e);
        QuickSort(arr, s, p-1);
            QuickSort(arr, p + 1, e);
    }
}
int main()
{
    int num;
    cout << "Enter the Number of the Valuse: " << endl;
    cin >> num;
    int arr[num];
    cout << "Enter the valuse: " << endl;
    for (int i = 0; i < num; i++)
        cin >> arr[i];
    cout << "Unsoted Valuse: " << endl;
    for (int i = 0; i < num; i++)
        cout << arr[i] << " ";
    cout << endl;
    QuickSort(arr, 0, num - 1);
    cout << "Sorted Valuse: " << endl;
    for (int i = 0; i < num; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}