# 참고 블로그 출처: https://stultus.tistory.com/entry/Python

a,b,v = map(int,input().split())
k = (v-b)/(a-b)
print(int(k) if k == int(k) else int(k)+1)	#삼항연산자
#시간초과 문제를 해결하기 위해 고민하심.