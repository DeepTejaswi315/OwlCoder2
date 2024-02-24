s=input()
u="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
c=0
if s[0] in u:
    c=0
else:
    c=1
for i in s:
    if i in u:
        c+=1
print(c)
