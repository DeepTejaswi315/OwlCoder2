sa=map(int,input().split())
l=input().split()
c=[]
for i in l:
    if int(i)<0:
        i=int(i)*-1
    c.append(len(i))
print(c.count(min(c)))	m=input()
if(len(n)!=len(m)):
    print("0")
else:
    for i in n:
        if i not in m:
            print("0")
            break
    else:
        print("1")
