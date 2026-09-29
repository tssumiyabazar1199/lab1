#include "myinclude.h"

void read(int A[], int n)
{
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
}

void print(int A[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int max(int A[], int n)
{
    int max_val = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] > max_val) {
            max_val = A[i];
        }
    }
    return max_val;
}

int min(int A[], int n)
{
    int min_val = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] < min_val) {
            min_val = A[i];
        }
    }
    return min_val;
}

void copy(int A[], int n, int B[])
{
    for (int i = 0; i < n; i++) {
        B[i] = A[i];
    }
}

int find(int A[], int n, int x)
{
    for (int i = 0; i < n; i++) {
        if (A[i] == x) {
            return i;
        }
    }
    return -1;
}

int make_set(int A[], int n, int B[])
{
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (find(B, count, A[i]) == -1) {
            B[count] = A[i];
            count++;
        }
    }
    return count;
}

int union_set(int A[], int n, int B[], int m)
{
    int count = n;
    for (int i = 0; i < m; i++) {
        if (find(A, count, B[i]) == -1) {
            A[count] = B[i];
            count++;
        }
    }
    return count;
}

int intersection_set(int A[], int n, int B[], int m, int C[])
{
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (find(B, m, A[i]) != -1) {
            if (find(C, count, A[i]) == -1) {
                C[count] = A[i];
                count++;
            }
        }
    }
    return count;
}