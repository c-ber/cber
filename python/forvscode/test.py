def dfs(G,i,color):
    r = len(G)
    color[i] = -1
    exist_cycle = False
    for j in range(r):
        if G[i][j] != 0:
            #print j
            if color[j] == 0:
                exist_cycle = dfs(G,j,color)
            
            if color[j] == -1:
                return True
                
    color[i] = 1
    return exist_cycle
 
def findcircle(G):
    r = len(G)
    color = [0] * r
    for i in range(r):
        #print i
        if color[i] == 0:
            exist_cycle = dfs(G,i,color)
            if exist_cycle:
                break
    return exist_cycle

def create_graph(edge_list):
    v_list = []
    G=[]
    for item in edge_list:
        tmp_list=item.split(',')
        for v_item in tmp_list:
            if v_item not in v_list:
                v_list.append(v_item)

    jz_len = len(v_list)

    for i in range(jz_len):
        row = [0 for x in range(0, jz_len)]
        G.append(row)

    for item in edge_list:
        tmp_list=item.split(',')
        i = v_list.index(tmp_list[0])
        j = v_list.index(tmp_list[1]
        G[i][j]=1

    return G


def parse_input(ip_str):
    tmp_str = ip_str.replace('[', '')
    tmp_str = tmp_str.replace('}]', '')
    tmp_str = tmp_str.replace('{', '')
    edge_list = tmp_str.split("},")
    return edge_list


input_str = raw_input()
input_str = input_str.strip().replace(' ', '')

try：
    edge_list = parse_input(input_str)
    G = create_graph(edge_list)
    #G = [[0,1,0,0],[0,0,1,0],[1,0,0,1],[0,0,0,0]]
    exist_cycle = findcircle(G)
    if exist_cycle:
        print 'true'
    else:
        ]]
        print 'false'
except:
    print 'false'
