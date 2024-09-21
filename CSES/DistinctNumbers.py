useless = int(input())
ans = 1

array = [int(x) for x in input().split()]
array.sort()

for i in range(1, useless):
    if array[i] != array[i-1]:
        ans += 1

print(ans)
