"""
Codeforces problem  : Way Too Long Words
url                 : https://codeforces.com/problemset/problem/71/A
"""

# take number of input words
number_of_inputs = int(input())

# storage to keep the input and output
outputs = []

for _ in range(number_of_inputs):
    word = input()
    if len(word) <= 10:
        outputs.append(word)
        continue
    outputs.append(word.replace(word[1:-1], str(len(word[1:-1]))))

for output in outputs:
    print(output)