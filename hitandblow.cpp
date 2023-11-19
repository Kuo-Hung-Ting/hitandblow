#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[1001], b[1001];
    int same = 0, different = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
   }
   for (int l = 0; l < n; l++){
    cin >> a[l];
   }
   for (int j = 0; j < n; j++){
    for (int k = 0; k < n; k++){
        if (a[j] == b[k]){
            if (j==k){
                same++;
            } else {
                different++;
            }
        }
    }
   }
   cout << same << endl;
   cout << different<<endl;
}