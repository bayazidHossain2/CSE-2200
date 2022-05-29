def printVertically(self, s: str) -> List[str]:
    strings = s.split(" ")
    maxlen=0;
    for i in range(len(strings)):
                   sz = len(strings[i])
                   if sz<maxlen:
                        maxlen=sz
    result=list()
    for i in range(maxlen):
        st = str()
        for j in range(len(strings)):
            if(len(strings[j])<i):
                st=st+strings[j][i];
            else:
                st=st+" "
        result.append(st.rstrip())
        
    return result
