t = int(input())
for i in range(t):
    odd,even=[]
    n = int(input())
    s = str(input())
    for j in range(n):
        if j%2==0: even.append(s[j])
        else: odd.append(s[j])
    one = set(even)
    two = set(odd)
    if (one & two): print("No")
    else: print("Yes")