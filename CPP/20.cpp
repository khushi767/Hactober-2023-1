#include<bits/stdc++.h>
using namespace std;
// q1 reverse array 
int printarray(int arr[],int n){
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}
// int reversearr(int arr[],int n,int m){
//    int s=m+1;
//    int e=n-1;
//    while (s<=e)
//    {
//     swap(arr[s],arr[e]);
//     s++;
//     e--;

//    }
   
    
// }



void mergeSortedArrays(std::vector<int>& arr1, const std::vector<int>& arr2) {
    int m = arr1.size();
    int n = arr2.size();
    
    arr1.resize(m + n);  // Resize arr1 to accommodate the merged elements
    
    int i = m - 1;  // Index for the end of arr1
    int j = n - 1;  // Index for the end of arr2
    int k = m + n - 1;  // Index for the end of the merged array

    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            arr1[k] = arr1[i];
            i--;
        } else {
            arr1[k] = arr2[j];
            j--;
        }
        k--;
    }

    // If there are remaining elements in arr2, add them to arr1
    while (j >= 0) {
        arr1[k] = arr2[j];
        j--;
        k--;
    }
}

int main() {
    std::vector<int> arr1 = {1, 3, 5, 0, 0, 0};
    std::vector<int> arr2 = {2, 4, 6};
    int m = 3;  // Number of elements in arr1
    int n = 3;  // Number of elements in arr2

    mergeSortedArrays(arr1, arr2);

    for (int num : arr1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
