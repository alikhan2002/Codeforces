t = int(input())
while t!= 0:
    n = int(input())
    l = list()
    for i in range(n):
        l.append(input())
    res = [0]*n
    # l.sort(key=len)
    for i in range(n):
        for j in range(n):
            if l[i] + l[j] in l:
                res[l.index(l[i] + l[j])] = 1
    for i in res:
        print(i , end="")
    print()
    t-=1

    
    
