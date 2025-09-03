#include <iostream>
using namespace std;

int mergeAndCount(int arr[], int temp[], int left, int mid, int right) {
    int i=left, j=mid, k=left;
    int inv_count=0;
    while((i<=mid-1) && (j<=right)) {
        if(arr[i] <= arr[j]) temp[k++] = arr[i++];
        else {
            temp[k++] = arr[j++];
            inv_count += (mid - i);
        }
    }
    while(i<=mid-1) temp[k++] = arr[i++];
    while(j<=right) temp[k++] = arr[j++];
    for(i=left; i<=right; i++) arr[i] = temp[i];
    return inv_count;
}

int countInversions(int arr[], int temp[], int left, int right) {
    int mid, inv_count=0;
    if(right>left) {
        mid=(right+left)/2;
        inv_count += countInversions(arr,temp,left,mid);
        inv_count += countInversions(arr,temp,mid+1,right);
        inv_count += mergeAndCount(arr,temp,left,mid+1,right);
    }
    return inv_count;
}

int main() {
    int arr[] = {2,4,1,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp[n];
    cout << "Number of inversions: " << countInversions(arr,temp,0,n-1);
}
