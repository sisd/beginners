#include <bits/stdc++.h> 
using namespace std; 
  
// Function to find maximum sum 
// pair from two arrays 
int maxSumPair(int arr1[], int n1, int arr2[], int n2) 
{ 
    int max1 = INT_MIN; // max from 1st array 
    int max2 = INT_MIN; // max from 2nd array 
  
    // Find max from 1st array 
    for (int i = 0; i < n1; i++) { 
        if (arr1[i] > max1) 
            max1 = arr1[i]; 
    } 
  
    // Find max from 2nd array 
    for (int i = 0; i < n2; i++) { 
        if (arr2[i] > max2) 
            max2 = arr2[i]; 
    } 
  
    // Return sum of max from both arrays 
    return max1 + max2; 
} 
  
// Driver Code 
int main() 
{ 
  
    int arr1[] = { 10, 2, 3 }; 
  
    int arr2[] = { 3, 4, 7 }; 
  
    int n1 = sizeof(arr1) / sizeof(arr1[0]); 
  
    int n2 = sizeof(arr2) / sizeof(arr2[0]); 
  
    cout << maxSumPair(arr1, n1, arr2, n2); 
  
    return 0; 
} 
