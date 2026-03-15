'''
Create a new file "practice.txt" using python. Add the following data in it: 

Hi everyone 7 we are learning File 1/O using Java.


WAF that replace all occurrences of "java" with "python" in above file.
Search if the word "learning" exists in the file or not.
'''

with open(r"C:\Programs\Random-code-problems\Python\Python\File Handling\demo.txt", 'w+') as file:
    lines=int(input("Enter number of lines: "))
    for data in range(lines):
        data=input("Enter content: ")
        file.write(data+"\n")
    
with open(r"C:\Programs\Random-code-problems\Python\Python\File Handling\demo.txt", 'r+') as file:
    data=file.read()

new=data.replace("Java", "Python")

with open(r"C:\Programs\Random-code-problems\Python\Python\File Handling\demo.txt", "w+") as file:
    file.write(data)
