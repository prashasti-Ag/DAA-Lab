#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T; // number of test cases
    while(T--) {
        int n;
        cin >> n; // size of array
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int K;
        cin >> K; // key
        int count = 0;
        // check all pairs
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                if(abs(arr[i] - arr[j]) == K) {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
