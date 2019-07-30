"""
Pseudo code:

function selection_sort(A, n){
    for i <-- 0 to n-2
        {
            iMin <-- i
            for j <-- i+1 to n-1
                {
                    if (A[j] < A[iMin]){
                        iMin <-- j
                    }
                }

            temp <-- A[i]
            A[i] <-- A[iMin]
            A[iMin] <-- temp
        }
        return A
}

"""

def selection_sort(A):
    n = len(A)

    for i in range(n-1):
        iMin = i

        for j in range(i+1, n):
            if A[j] < A[iMin]:
                iMin = j

        temp = A[i]
        A[i] = A[iMin]
        A[iMin] = temp

    return A


if __name__ == "__main__":

    data = [76, 0, 1, 4,95,-3, 34, 22, 8, 145, -5, 5]

    print(selection_sort(data))


