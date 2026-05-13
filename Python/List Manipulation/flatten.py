a=[1,[2,3,4],5,6,7,[8,[9,10],12],13]
target=[]
def flatten(a):
    for flat in a:
        if type(flat) is list:
            flatten(flat)
        else:
            target.append(flat)
    return target

print(flatten(a))