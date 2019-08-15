def create_gra(ip_str):
    tmp_str = ip_str.replace('[', '')
    tmp_str = tmp_str.replace('}]', '')
    tmp_str = tmp_str.replace('{', '')
    edge_list = tmp_str.split("},")
    return edge_list

def get_all_vt(edge_list):
    v_list = []
    for item in edge_list:
        tmp_list=item.split(',')
        for v_item in tmp_list:
            if v_item not in v_list:
                v_list.append(v_item)
    return v_list

#遍历算法
def bianli(edge_list, v_list, id):
    #遍历边，出度为1，就不停遍历，建立一个已经遍历的标志字典
    root_v = v_list[id]
    v_in=[] #存储一个节点，下的所有节点集合

    #添加root下所有来路径节点，如果存在两个root，就判定有环
    for item in edge_list:
        evlist=item.split(',')
        if evlist[0] is root_v:
    
#存储一个节点，下的所有节点集合
def get_child(edge_list):
    for item in edge_list:
        evlist=item.split(',')
        if evlist[0] is root_v:



def findcircle(edge_list, v_list):
    v_num = len(v_list)
    exist_circle = False
    for i in range(v_num):
        exist_circle = dfs(edge_list, v_list, i)
        if(exist_circle):
            break
    return exist_circle





input_str = '[{a,b},{b,c},{c,a}]'#raw_input()
input_str = input_str.strip()

edge_list = create_gra(input_str)
v_list = get_all_vt(edge_list)

print(edge_list)
print v_list