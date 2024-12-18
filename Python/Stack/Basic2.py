books=[]
books.append("Learn C")
books.append("Learn C++")
books.append("Learn Python")
print(books)

books.pop()
if not books:
    print("No books left")
else:
    print("Now the top book is : ",books[-1])

books.pop()
if not books:
    print("No books left")
else:
    print("Now the top book is : ",books[-1])

books.pop()
if not books:
    print("No books left")
else:
    print("Now the top book is : ",books[-1])