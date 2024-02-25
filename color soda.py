n=int(input())
l=list(map(int,input().split()))
s=[]
for i in l:
    if i==5:
        s.append(i)
    elif i==10 and 5 in s:
        s.remove(5)
        s.append(i)
    elif i==20 and 5 in s and 10 in s:
        s.remove(5)
        s.remove(10)
        s.append(20)
    else:
        print(False)
        break
else:
    print(True)
