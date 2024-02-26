n=int(input())
s=str(n)
c=0
for i in s:
    if i!='0' and n%int(i)==0:
        c+=1
print(c)
