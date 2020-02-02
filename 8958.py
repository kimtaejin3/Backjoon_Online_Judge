n=int(input())
for i in range(n):
    yesOrno=list(input())
    p=1
    sum=0
    for j in yesOrno:
        if j=='O':
            sum+=p
            p+=1
        else:
            p=1
    print(sum)