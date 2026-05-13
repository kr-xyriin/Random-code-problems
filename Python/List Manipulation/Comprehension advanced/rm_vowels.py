a="a string"
b=''.join([c for c in a if c not in "aeiouAEIOU"])
print(b)