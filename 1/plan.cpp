#include <iostream> 
#define max 50 
using namespace std; 
int* fibo(int n){ 
     int arr[max]; 
     arr[0] = 1; 
     arr[1] = 1; 
        for (int i = 2; i < n; i++){ 
            arr[i] = arr[i - 1] + arr[i - 2]; 
        } 
        return arr; 
} 
int main(){ 
    int num, *ptr; 
    cout << "jumlah bilangan fibonacci : "; 
    cin >> num; 
    ptr = fibo(num); 
    for (int i = 0; i < num; i++){ 
         cout << (ptr + i) << " "; 
    } 
} 
