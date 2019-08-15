
def update_list(pre_list, cur_left, m):
    next_list=[]
    j = 1
    for i in range(m, cur_left):
        next_list.append([j, pre_list[i][1]])
        j=j+1

    for i in range(0, m-1):
        next_list.append([j, pre_list[i][1]])
        j=j+1
    return next_list




def yuesefu(pre_list, cur_left, m):

    if cur_left < m:
        list_p = []
        for i in range(0, cur_left):
            list_p.append(pre_list[i][1])
        list_p.sort()
        strtmp = str(list_p)
        strtmp = strtmp.replace('[', '').replace(']', '').replace(' ', '')
        print(strtmp)

    for i in range(1, cur_left+1):
        if i == m:
            pre_list = update_list(pre_list, cur_left, m)
            cur_left = cur_left -1
            yuesefu(pre_list, cur_left, m)
    return



def create_queen(m):
    if m < 2  or m > 99:
        print("ERROR!")
        return
    
    pre_list = []#第一个是新列表值，第二个初始值
    cur_left = 100
    for i in range(1,cur_left+1):
        row=[i,i]
        pre_list.append(row)
    yuesefu(pre_list, cur_left, m)




def main():
    input_str = raw_input()
    input_str = input_str.strip().replace(' ', '')
    try:
        m  = int(input_str)
        create_queen(m)
    except:
        print("ERROR!")

if __name__ == "__main__":
    main()