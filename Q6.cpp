#include <iostream>
using namespace std;

struct Element {
    int row, col, val;
};

int main() {

    Element sparse[] = { {0,1,5}, {1,2,8}, {2,0,3} };
    int n = 3;

    cout << "Transpose:" << endl;
    for(int i=0;i<n;i++) cout << sparse[i].col << " " << sparse[i].row << " " << sparse[i].val << endl;


}
