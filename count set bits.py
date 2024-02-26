q=int(input())
for i in range(0,q):
    n=int(input())
    b=bin(n)
    s=0
    for i in range(2,len(b)):
        if b[i]=='1':
            s+=1
    print(s)
