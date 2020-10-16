T = int(input())
for L in range(T):
    st = input('')
    st = st.lower()
    if 'programming' in st or 'cse' in st or 'developer' in st:
        print('Case {}: CSE Department'.format(L+1))
    elif 'eee' in st:
        print('Case {}: EEE Department'.format(L+1))
    elif 'ce' in st:
        print('Case {}: CE Department'.format(L+1))
    elif 'photo' in st and 'cultural' in st or 'culture' in st:
        print('Case {}: Sylhet Engineering College'.format(L+1))
    elif 'cultural' in st or 'culture' in st:
        print('Case {}: Shoroborno'.format(L+1))
    elif 'photo' in st:
        print('Case {}: SECPA'.format(L+1))
    else:
        print('Case {}: Sylhet Engineering College'.format(L+1))
    
