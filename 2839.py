sugarWeight=int(input())
sum=0

while sugarWeight>0:
    if sugarWeight%5!=0:
        sugarWeight-=3
        if sugarWeight<0:
            sum=-1
            break
        sum+=1
    elif sugarWeight%5==0:
        sum+=1
        sugarWeight-=5
    elif sugarWeight%5!=0 and sugarWeight%3!=0:
        sum=-1

print(sum)




