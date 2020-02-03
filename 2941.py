cro=['c=','c-','dz=','dz=','d-','lj','nj','s=','z=']
s=input()

for word in cro:
    s=s.replace(word,'*')
print(len(s))
