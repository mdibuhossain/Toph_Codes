t = int(input())
for test in range(t):
    st = input('')
    for st_le in range(len(st)-1):
        if st[st_le] != st[st_le + 1]:
            print(st[st_le], end='')
    print(st[len(st)-1])
