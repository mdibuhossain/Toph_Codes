while True:
    st = input()
    if st == 'the end.':
        break
    else:
        st = st.replace("6", "b")
        st = st.replace("9", "g")
        st = st.replace("1", "l")
        st = st.replace("0", "o")
        st = st.replace("5", "s")
        st = st.replace("2", "z")
        st = st.replace("b", "6")
        st = st.replace("g", "9")
        st = st.replace("l", "1")
        st = st.replace("o", "0")
        st = st.replace("s", "5")
        st = st.replace("z", "2")
    print(st)
