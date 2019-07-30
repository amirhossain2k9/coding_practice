
def bubble_sort(A):
    n = len(A)

    for i in range(n-1):

        # flagged to check if the list is already sorted in asc order
        swapped = False

        for j in range(n-1-i):
            if A[j] > A[j+1]:
                swapped = True
                A[j], A[j+1] = A[j+1], A[j]

        if not swapped:
            break
    return A


if __name__ == "__main__":
    data = [76, 0, 1, 4, 95, -3, 34, 22, 8, 145, -5, 5]

    print(bubble_sort(data))