def solve():
    n,k=map(int,input().split())
    l = list(map(int,input().split()))
    d={}
    for i in range(n):
      if l[i]%k == 0:
        d[i+1] = (k*-1)
      else:
        d[i+1] = (l[i]%k*-1)
        
    d2 = dict(sorted(d.items(), key=lambda item: item[1]))
    for f in d2.keys():
      print(f,end=" ")
    print()
    
t = int(input())
while t > 0:
    solve()
    t -= 1
