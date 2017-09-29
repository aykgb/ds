#include "config.hpp"
#include "simple_sort.hpp"
#include "merge_sort.hpp"
#include "quick_sort.hpp"

int main()
{
    int A[100];

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 10000);

    for(size_t i = 0; i < LENGTH ; i++) {
        A[i] = dis(gen);
    }

    int B[LENGTH];
    memmove(B, A, LENGTH * sizeof(int));
    print(A, LENGTH);

    // buble_sort(A, LENGTH);
    // print(A, LENGTH);
    // selection_sort(A, LENGTH);
    // print(A, LENGTH);
    // insert_sort(A, LENGTH);
    // print(A, LENGTH);
    merge_sort(A, 0, LENGTH - 1);
    print(A, LENGTH);

    quick_sort(B, 0, LENGTH - 1);
    print(B, LENGTH);
}
