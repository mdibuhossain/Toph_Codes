n1, n2 = input().split()
ar1 = list(map(int, input().split()))
ar2 = list(map(int, input().split()))
ar1 = ar1 + ar2
x = list(set(ar1))
val = 0
while (val!=len(x)-1):
    print(x[val], end=' ')
    val += 1
print(x[val])