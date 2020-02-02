n=int(input())
a=list(map(int,input().split()))
sum=0
for i in a:
    i=i/max(a)*100
    sum+=i

print(sum/n)

