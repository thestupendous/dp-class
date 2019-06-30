n = int(input())
a = list(map(int,input().split()))
a = set(a)
ans = len(a)
for i in a:
	ans+=i

print(ans)
