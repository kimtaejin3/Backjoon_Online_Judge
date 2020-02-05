def check(a):
    alpha=[0 for i in range(26)]
    b=list(a)
    cnt=1
    for i in b:
        if alpha[ord(i)-97]==0:
            alpha[ord(i)-97]=cnt
            cnt+=1
        elif alpha[ord(i)-97]!=0:
            if cnt-alpha[ord(i)-97]!=1:
                return False
    return True

t=int(input())
cnt=0
for i in range(t):
    word=input()
    if check(word):
        cnt+=1
print(cnt)

