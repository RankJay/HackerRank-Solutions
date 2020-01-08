

def wrap(string, max_width):
    none=""
    for i in range(len(string)):
        if (i+1)%max_width==0:
            print(string[i], end="")
            print("")

        else:
            print(string[i], end="")
        
    return none

