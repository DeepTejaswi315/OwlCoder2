s=input()
vowels="aeiouAEIOU"
digits="1234567890"
v=0
c=0
d=0
w=0
for i in range(0,len(s)):
    if s[i] in vowels:
        v+=1
    elif s[i] in digits:
        d+=1
    elif s[i]==" ":
        w+=1
    else:
        c+=1
print("Vowels:",v)
print("Consonants:",c)
print("Digits:",d)
print("White spaces:",w)
