
num=int(input())
check=num
sum=0
while True:
    q=num//10
    res=num%10
    new_num=res*10+(q+res)%10
    sum+=1
    num=new_num
    if new_num==check:
        break
print(sum)

