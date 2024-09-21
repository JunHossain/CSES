import math

def solve(fruit, can_put, can_blend):
    return math.ceil(fruit / min(can_put, can_blend))

    
testcase = int(input())

for x in range(0, testcase):
    fruit = int(input())
    arr = [int(x) for x in input().split()]
    
    print(solve(fruit, arr[0], arr[1]))