#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr[] = {1,2,3,2,1,4,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    set<int> s(arr, arr+n);
    cout << "Total distinct elements = " << s.size();
}
