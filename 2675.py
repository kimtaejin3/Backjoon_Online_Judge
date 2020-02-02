numb=int(input())
for i in range(numb):
    j=input().split()
    for k in range(len(j[1])):
        print(j[1][k]*int(j[0]),end="")
    print()