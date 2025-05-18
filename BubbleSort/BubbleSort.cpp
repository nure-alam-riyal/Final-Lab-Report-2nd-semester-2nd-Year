#include <bits/stdc++.h>
using namespace std;
int main(){
int arr[7]={1,2,5,3,39,30,25};
cout<<"Befor Sort:"<<endl;
for(int i=0;i<7;i++)
cout<<arr[i]<<" ";
cout<<endl;
for(int i=0;i<6;i++){
    for(int j=0;j<6-i;j++){
        if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);
    }
}
cout<<"After Sort:"<<endl;
for(int i=0;i<7;i++)
cout<<arr[i]<<" ";

}