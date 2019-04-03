# problem url: https://www.hackerrank.com/challenges/30-arrays/problem

import math
import os
import random
import re
import sys


if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    arr.reverse()
    array_string = ' '
    arr = [str(i) for i in arr]
    array_string = array_string.join(arr)

    print(array_string)

