def prime(n):
    c=0
    for i in range(1,n+1):
        if n%i==0:
            c+=1
    if c==2:
        return True
    else:
        return False

n=int(input())
for i in range(1,n+1):
    if n%i==0 and prime(i):
        pf=i
print(pf)
