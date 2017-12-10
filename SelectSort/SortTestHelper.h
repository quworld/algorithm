//
// Created by Hofoo on 12/10/17.
//

#ifndef SELECTSORT_SORTTESTHELPER_H
#define SELECTSORT_SORTTESTHELPER_H

#endif //SELECTSORT_SORTTESTHELPER_H

namespace SortTestHelper {

    int *generateRandomArray(int n, int rangeL, int rangeR) {
        int *arr = new int[n];
        srand(time(null));
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % (rangeR - rangeL + 1) + rangeL;
        }
        return arr;
    }
}
