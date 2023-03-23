t = int(input())
for i in range(t):
    s = input()
    se = set()
    for j in s:
        se.add(j)
    l = len(se)
    if l==4 or l==3:
        print(4)
    elif l==1:
        print(-1)
    else:
        if (s[0]==s[1] and s[1]==s[2]) or (s[1]==s[2] and s[2]==s[3]) or (s[0]==s[2] and s[2]==s[3]) or (s[0]==s[1] and s[1]==s[3]) :
            print(6)
        else:
            print(4)
