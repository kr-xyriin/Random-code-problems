basket=['apple', 'banana', 'guava', 'orange']
my_fruit=['apple', 'kiwi', 'grapes', 'avocado']
# for i in my_fruit:
#     if i not in basket and i.startswith("a".lower()):
#         basket.append(i)
# print(basket)

basket.extend([i for i in my_fruit if i not in basket and i.startswith("a".lower())])
print(basket)