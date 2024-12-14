// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
int main() {
    int num;
    cin >> num;
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if((j<=i || i+j>=num-1) ){
                if(i+j >num-1 && i+j < i*2)
                    cout << "   ";
                else
                    cout << " * ";
                
            }
            else{
                cout << "   ";
            }
        }
        cout << "\n";
    }
    return 0;
}
