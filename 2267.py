n =int(input())
graph = []
house = []
count = 0
for i in range(n):
    graph.append(list(map(int, input())))

def dfs(i,j):
    if i<0 or i>=n or j<0 or j>=n:
        return False
    
    if graph[i][j] == 1:
        global count
        count +=1
        graph[i][j] = 0

        dfs(i-1, j)
        dfs(i, j-1)
        dfs(i+1, j)
        dfs(i, j+1)
        return True
    return False

for i in range(n):
    for j in range(n):
        if dfs(i,j)==True:
            house.append(count)
            count =0
            
house.sort()
print(len(house))
for i in range(len(house)):
    print(house[i])

