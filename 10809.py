alphabet="abcdefghijkklmnopqrstuvwxyz"
word_num=[]
word_list=list(input())
for character in alphabet:
    for i in range(len(word_list)):
        if character==word_list[i]:
            word_num.append(i)
            break
        elif i<len(word_list)-1:
            continue
        else:
            word_num.append(-1)
print(word_num)