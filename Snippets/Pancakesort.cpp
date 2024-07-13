#include <bits/stdc++.h>

using namespace std;

void flip(int arr[],int k,int n){
    int s=0;
    int e=k;

    while(s<=e){
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
}


int main()
{
    int n = 5;
    int arr[] = {1, 5, 7, 2, 0};
    for (int i = 0; i < n; i++)
    {
        int maxIdx = i;
        int max = arr[i];
        int a[n-i];
        a[0] = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            a[j - i] = arr[j];
            if (arr[j] > max)
            {
                max = arr[j];
                maxIdx = j;
            }
        }
        flip(a, maxIdx - i,n-i);
        for (int j = i; j < n; j++)
        {
            arr[j] = a[j - i];
        }
    }
    flip(arr,n-1,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}