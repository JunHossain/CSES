testcase = int(input())

for _ in range(testcase):
    fighters = int(input())
    power = [int(x) for x in input().split()]
    sum = sum(power)
    print(power[len(power)-1] - power[len(power) - 2] - sum)
