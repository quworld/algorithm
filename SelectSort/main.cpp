#include <iostream>

using namespace std;

template<typename T>
void selectionSort(T arr[], int n) {

    // times = n * (n+1) /2 = 9 * 10 /2 = 45
    int times = 0;
    for (int i = 0; i < n - 1; i++) { // n -1 和 n 都可以
        //最小值的索引位置
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            times++;
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

    cout << "time:" << times << endl;
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
//    std::cout << "Hello, World!" << std::endl;

    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    selectionSort(arr, 10);
    print(arr, 10);

    return 0;
}