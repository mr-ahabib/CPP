#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
                cin >> arr[i];
            }
    
   /* for (int i = 0; i < n; i++) {
        arr[arr[i] % n]
            = arr[arr[i] % n] + n;
    } */
    
    for (int i = 0; i < n; i++) {
        if (arr[i] >= n * 2) {
            cout << " True" << endl;
        }
        
    }
    return 0;
}