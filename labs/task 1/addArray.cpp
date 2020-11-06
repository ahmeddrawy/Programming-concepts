// Mostafa Omar Mahmoud 20170292 CS_IS_2
// Ahmed Mohamed Hanafy 20170377 CS_IS_2

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