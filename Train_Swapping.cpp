#include <bits/stdc++.h>
using namespace std; 

int bubble_sort(int arr[], int n){
    int count = 0;
    for (int i = 0; i< n; i++){
        for (int j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                count++;
            }
        }
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int l;
        cin >> l;
        int arr[l];
        for (int j = 0; j < l; j++){
            cin >> arr[j];
        }
        cout << "Optimal train swapping takes " << bubble_sort(arr, l) << " swaps." << endl;
    }
    return 0;
}