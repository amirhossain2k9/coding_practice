
def sentence(sentence):
    """
    Generator -> function iterator
    :param sentence:
    :return:
    """
    for word in sentence.split():
        yield word


my_sentence = sentence('This is a test')

# for word in my_sentence:
#     print(word)

print(next(my_sentence))
print(next(my_sentence))
print(next(my_sentence))
print(next(my_sentence))
print(next(my_sentence, 'end'))
