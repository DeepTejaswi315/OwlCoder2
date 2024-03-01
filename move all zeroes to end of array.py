n=int(input())
l=list(map(int,input().split()))
c=0
for i in range(0,n):
    if(l[i]==0):
        c+=1
        continue
    else:
        print(l[i],end=" ")
for i in range(0,c):
    print('0',end=" ")
