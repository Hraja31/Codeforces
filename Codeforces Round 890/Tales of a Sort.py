t = int(input())
while(t>0):
  n = int(input())
  arr = list(map(int,input().split()))
  arr2 = arr[::-1]
  arr.sort(reverse = True)
  for i in range(n):
    if arr[i]!=arr2[i]:
      print(arr[i])
      break
  else:
    print(0)
  t-=1
