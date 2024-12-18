def count_words(sentence):
    words = sentence.split()
    
    print(words)
    num_words = len(words)
    
    return num_words

sentence = input("Enter a sentence: ")
word_count = count_words(sentence)
print(f'The number of words in the sentence is: {word_count}')
