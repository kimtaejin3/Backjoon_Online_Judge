for i in range(int(input())):
    list_input=list(map(int,input().split()))
    avg=sum(list_input[1:])/list_input[0]
    count=0
    for j in list_input[1:]:
        if j>avg:
            count+=1
    print('%.3f%%' % (count / list_input[0] * 100))