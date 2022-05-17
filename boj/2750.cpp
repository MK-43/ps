#include <algorithm>
#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;

const int MAX = 1000;
int N;

int arr[MAX];

int partition(int arr[], int low, int high) {
  int pivot = arr[high];
  int i = low;  // the place of the last element that's smaller than pivot
  for (int j = low; j <= high; ++j) {
    if (arr[j] < pivot) {
      swap(arr[i], arr[j]);
      i++;
    }
  }
  swap(arr[i], arr[high]);
  return i;
}

void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int pivot = partition(arr, low, high);

    quickSort(arr, low, pivot - 1);
    quickSort(arr, pivot + 1, high);
  }
}

int tmp[MAX];
void mergeSort(int arr[], int le, int ri) {
  if (le >= ri) return;

  int mid = (le + ri) / 2;

  mergeSort(arr, le, mid);      // the way to spilt mid is important
  mergeSort(arr, mid + 1, ri);  // can't be "mid -1, mid"

  // merge
  int i = le;
  int j = mid + 1;
  int k = le;
  while (i <= mid && j <= ri) {
    if (arr[i] < arr[j]) {
      tmp[k++] = arr[i++];
    } else {
      tmp[k++] = arr[j++];
    }
  }
  // copy leftover
  while (i <= mid) {
    tmp[k++] = arr[i++];
  }
  while (j <= ri) {
    tmp[k++] = arr[j++];
  }

  // copy
  k = le;
  while (k <= ri) {
    arr[k] = tmp[k];
    k++;
  }
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
#endif
  cin >> N;

  for (int i = 0; i < N; ++i) {
    cin >> arr[i];
  }
  // for (int i = 0; i < N; ++i) {
  //   cout << arr[i] << ' ';
  // }
  // cout << endl;

  quickSort(arr, 0, N - 1);
  // mergeSort(arr, 0, N - 1);

  for (int i = 0; i < N; ++i) {
    cout << arr[i] << endl;
  }
  return 0;
}