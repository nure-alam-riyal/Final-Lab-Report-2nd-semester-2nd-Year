#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Befor Sort:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
        cout<<endl;

   for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j>=0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    cout<<"After Sort"<< endl;

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

        return 0;
        
}
