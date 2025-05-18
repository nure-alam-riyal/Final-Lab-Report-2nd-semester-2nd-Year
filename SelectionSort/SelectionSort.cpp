#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n){
for(int i=0;i<n-1;i++){
    int midI=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[midI])
        midI=j;

    }
    if(i!=midI)
    swap(arr[i],arr[midI]);
    
}
}
int main(){
      int num;
    cout <<"Enter the Number of the Valuse: "<<endl;
    cin>>num;
    int arr[num];
    cout <<"Enter the valuse: "<<endl;
    for(int i=0;i<num;i++)
        cin>>arr[i];
    cout<<"Unsoted Valuse: "<<endl;
    for(int i=0;i<num;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    selectionSort(arr,num);
    cout<<"Sorted Valuse: "<<endl;
    for(int i=0;i<num;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    return 0;  
}