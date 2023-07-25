def solve():
    n = int(input())
    arr = list(map(int, input().split()))
    arr2 = arr[:]
    
    arr.sort()
    
    for i in range(n):
        if arr[i] % 2 != arr2[i] % 2:
            print("NO")
            return
    
    print("YES")


t = int(input())
while t > 0:
    solve()
    t -= 1
 
