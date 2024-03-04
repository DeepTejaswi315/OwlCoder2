s=input()
if len(s)==1:
    print(s)
else:
    l=s.split()
    r=l[::-1]
    for i in r:
        print(i,end=" ")
