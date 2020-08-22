# Find if graph has a cycle
#     
#     1
#    / \
#   2 - 3
#

cyclic_graph = [[0,1,1],[1,0,1],[1,1,0]]
cyclic_graph2 = [[0,1,1,0],[1,0,0,1],[1,0,0,1],[0,1,1,0]]

acyclic_graph = [[0,1,1], [1,0,0], [1,0,0]]
acyclic_graph2 = [[0,1],[1,0]] 

def is_cycle(graph):
    """ Check if graph (adjacency matrix) has a cycle """
    visited = set()
    stack = [[0, graph[0]]]
    #BFS
    flag = False
    while len(stack) != 0:
        #print(stack)
        curr, lis = stack[-1][0], stack[-1][1]
        stack.pop()
        if curr not in visited:
            visited.add(curr)
        else:
            #print(visited)
            flag = True
            break
        for i in range(len(lis)):
            if lis[i] == 1 and i not in visited:
                stack.append([i, graph[i]])
    print(f"{graph} -> Has cycle: ", flag)

is_cycle(cyclic_graph)
is_cycle(cyclic_graph2)
is_cycle(acyclic_graph)
is_cycle(acyclic_graph2)
