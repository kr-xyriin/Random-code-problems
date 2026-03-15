'''file=open(r"C:\Programs\Random-code-problems\Python\Python\File Handling\demo.txt", 'a+')
print(file.read())
file.close()'''

with open(r"C:\Programs\Random-code-problems\Python\Python\File Handling\demo.txt", 'r+') as file:
    print(file.read())
    