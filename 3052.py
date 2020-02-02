a2=[]

for i in range(10):
    a2.append(int(input())%42)

a2=list(set(a2))
print(len(a2))

