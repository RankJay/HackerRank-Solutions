def average(array): 
    final_list = []
    su=0
    for num in array: 
        if num not in final_list: 
            final_list.append(num)


    for i in range(len(final_list)):
        su=su+final_list[i]
        avg=su/len(final_list)
    return avg


