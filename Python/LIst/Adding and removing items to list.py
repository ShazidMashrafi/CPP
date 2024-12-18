code_languages=["C","C++","Python","Java","Javascript"]

print(code_languages + ["swift",27]) # will print list first then print the other list

code_languages + ["Flutter"] #will not be able to add to list

print(code_languages)

code_languages=code_languages+["Flutter"] #will be added to the original list

print(code_languages)

code_languages.append("Swift")  #Will be also added to list but to the last

print(code_languages)

code_languages.insert(2,"C#") #will be added to the second position of list
print(code_languages)

code_languages.remove("C#")  #will be removed
print(code_languages)

code_languages.pop()  #will remove the last element
print(code_languages)

pos=code_languages.index("Python")  #will give the position of the element
print(pos)

ct=code_languages.count("Java")  #will return the number of occurrences of the element
print(ct)

code_languages.clear()  #will clear the whole list
print(code_languages)