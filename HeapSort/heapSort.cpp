#include<bits/stdc++.h>
using namespace std;
void hephify(int arr[],int n,int i){
int largest=i;
int L=i*2+1;
int R=i*2+2;
if(n>L&&arr[L]>arr[largest])
largest=L;
if(n>R &&arr[R]>arr[largest])
largest=R;

if(i!=largest){
    swap(arr[i],arr[largest]);
    hephify(arr,n,largest);
}
}
void heapSort(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        hephify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--){
        swap(arr[0],arr[i]);
        hephify(arr,i,0);
    }
}
int main (){
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
    heapSort(arr,num);
    cout<<"Sorted Valuse: "<<endl;
    for(int i=0;i<num;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    return 0;  
}