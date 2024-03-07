n=input().split()
n="".join(n)
a=min(n)
b=max(n)
print(a,n.count(a),b,n.count(b))def chocolates(A, B, C):
    total = A * 7 + B * 5
    max = total // C
    return max
a=int(input())
b=int(input())
c=int(input())
print(chocolates(a,b,c))
