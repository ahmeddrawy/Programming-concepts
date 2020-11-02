#include <bits/stdc++.h>
using namespace std;
int addArray(int arr[] , int n ){
    int total = 0 ;
    for (int i = 0 ; i <n ; ++i){
        total += arr[i]%2 ? arr[i] : 0 ;
    }
    return total ;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int result = addArray(arr, 5);
    cout << result  << endl;
}