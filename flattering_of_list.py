l=[1,[2,3],4,[5,6,7],8,[9,[10,11,[13,14,[15,16]]],12]]
l1=[]
def out(x):
    if type(x)==type(list()):
        for y in x:
            if type(y)==type(list()):
                out(y)
                
                #l1.append(0)
            else:
                l1.append(y)

for x in l:
    if type(x)==type(list()):
        for y in x:
            out(x)
    else:
        l1.append(x)
l1=set(l1)

print(list(l1))
