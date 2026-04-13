#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    queue<int> q;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool isPalindrome = true;

    for(int i = n - 1; i >= 0; i--) {
        if(q.front() != arr[i]) {
            isPalindrome = false;
            break;
        }
        q.pop(); 
    }

    if(isPalindrome)
        cout << "Array is Palindrome";
    else
        cout << "Array is NOT Palindrome";

    return 0;
}
