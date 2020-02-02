voca=list(input().upper())

al_list=[0]*26

for i in voca:
    al_list[ord(i)-65]+=1

if al_list.count(max(al_list))>=2:
    print('?')
else:
    print(chr(al_list.index(max(al_list))+65))