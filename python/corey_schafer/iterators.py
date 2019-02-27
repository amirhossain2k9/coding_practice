
class Sentence:
    """
    Python Coding Problem: Creating Your Own Iterators
    """
    def __init__(self, sentence):
        self.sentence = sentence
        self.words = self.sentence.split()
        self.index = 0

    def __iter__(self):
        return self

    def __next__(self):
        if self.index >= len(self.words):
            raise StopIteration

        index = self.index
        self.index += 1
        return self.words[index]

my_sentence = Sentence('This is a test')

# for word in my_sentence:
#     print(word)

print(next(my_sentence))
print(next(my_sentence))
print(next(my_sentence))
print(next(my_sentence))
print(next(my_sentence, 'end'))
