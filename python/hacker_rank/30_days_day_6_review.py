
# problem url: https://www.hackerrank.com/challenges/30-review-loop/problem


def odd_even_seperator(sentence):
    odd_string = ''
    even_string = ''
    for i in range(len(sentence)):
        if i == 0:
            even_string = even_string + sentence[i]
        elif i % 2 == 0:
            even_string = even_string + sentence[i]
        else:
            odd_string = odd_string + sentence[i]

    return even_string + ' ' + odd_string


T = int(input())

for _ in range(T):
    s = str(input())
    # print(odd_even_seperator(s))
    print(s[::2], s[1::2])
