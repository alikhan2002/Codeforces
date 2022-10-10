


t = int(input())

while t != 0:
    n, c, q = map(int, input().split())
    # c = int(input())
    # q = int(input())
    s = input()
    tt = s
    for i in range(c):
        l, r = map(int, input().split())
        y = tt[l - 1: r]
        # print(y)
        tt += y
    # print(tt)
    for i in range(q):
        e = int(input())
        print(tt[e - 1])


    
    t-= 1