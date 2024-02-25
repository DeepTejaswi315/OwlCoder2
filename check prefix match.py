n=int(input())
ls=input()
l=ls.split()
sl=int(input())
s=input()
c=0
for i in l:
    if s[0:sl]==i[0:sl]:
        c+=1
print(c)
