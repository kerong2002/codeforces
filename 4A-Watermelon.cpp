//2023/03/25 kerong
//4A
#include <iostream>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    if(n<=2){
        cout << "NO";
    }
    else{
        if(n & 1){
            cout << "NO";
        }
        else{
            cout << "YES";
        }
    }
    return 0;
}
