a,b,d,k=map(int,input().split())
c=0
for i in range(a,b+1):
    s=list(str(i))
    d=str(d)
    if s.count(d)==k:
        c+=1
print(c)
