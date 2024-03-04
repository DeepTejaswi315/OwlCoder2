s=input()
if len(s)==1:
    print(s)
else:
    l=s.split('.')
    r=l[::-1]
    for i in range(0,len(l)):
        if i==(len(l)-1):
            print(r[i])
        else:
            print(r[i],end=".")
