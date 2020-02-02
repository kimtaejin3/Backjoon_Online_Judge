s=list(input().split())
s1=[]
s2=[]
for i in range(3):
    s1.append(s[0][i])
    s2.append(s[1][i])

s1.reverse()
s2.reverse()

n1=int(s1[0]+s1[1]+s1[2])
n2=int(s2[0]+s2[1]+s2[2])

if(n1<n2):
    print(n2)
else:
    print(n1)


