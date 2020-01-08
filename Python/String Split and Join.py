def split_and_join(line):
    l2=[]
    for i in range(len(line)):
        if line[i]==" ":
            l2.append("-")
            
        else:
            l2.append(line[i])

    final = "" 
    for x in l2: 
        final += x 
    return final

