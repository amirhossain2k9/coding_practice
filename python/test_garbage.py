# Enter your code here. Read input from STDIN. Print output to STDOUT

total_entries = int(input())

phone_book = {}
for entry in range(total_entries):
    record_string = input().split(' ')
    phone_book[record_string[0]] = record_string[1]


queries = input('').split('\n')
for query_name in queries:
    if query_name in phone_book:
        print('{}={}'.format(query_name, phone_book[query_name]))
    else:
        print('Not found')

