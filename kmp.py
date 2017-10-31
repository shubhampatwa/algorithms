def computeTempArray(pattern):
    lps=[]
    for i in range(len(pattern)):
        lps.append(0)
    index=0
    i=1
    while i<len(pattern):
        if pattern[i]==pattern[index]:
            lps[i]=index+1
            index+=1
            i+=1
        else:
            if index!=0:
                index=lps[index-1]
            else:
                lps[i]=0
                i+=1
    return lps


def KMP(text,pattern):
    lps = computeTempArray(pattern)
    i=0
    j=0
    while i<len(text) and j<len(pattern):
        if(text[i] == pattern[j]):
            i+=1
            j+=1
        else:
            if j!=0:
                j = lps[j-1]
            else:
                i+=1
    if j==len(pattern):
        return True
    return False



str = "abcxabcdabcdabc"
subStr = "abcdabcy"
result = KMP(str, subStr)
print(result)