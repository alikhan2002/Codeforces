from math import factorial
inp = list(map(int, input().split()))

N = inp[0] - 1
M = inp[1] - 1 
print(factorial(N+M)//(factorial(N)*factorial(M)))
