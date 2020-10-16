inp = input('')
for val in range(len(inp)):
    inp = inp.replace('()', '')
if(len(inp)): print('No')
else: print('Yes')