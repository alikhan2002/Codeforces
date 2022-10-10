t = int(input())

while t != 0:
    s = input()
    ss = set()
    res = 1
    for i in s:
        ss.add(i)
        if len(ss) > 3:
            res += 1
            ss.clear()
            ss.add(i)
    print(res)
    t -= 1