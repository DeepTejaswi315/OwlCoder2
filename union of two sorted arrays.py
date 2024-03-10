n=int(input())
m=int(input())
l=list(map(int,input().split()))
k=list(map(int,input().split()))
r=[]
for i in l:
    if i not in r:
        r.append(i)
for i in k:
    if i not in r:
        r.append(i)
r.sort()
for i in r:
    print(i,end=" ")
