with open("input18.txt", "r") as f:
  grids=f.readlines()

for i in range(len(grids)):
  grids[i] = grids[i].replace('\n', '')
  grids[i] = grids[i].split(' ')
  for j in range(len(grids[i])):
    grids[i][j] = int(grids[i][j])

def best_route(i, j):

  if(i==len(grids)-1):
    return grids[i][j]

  return max(best_route(i+1,j), best_route(i+1,j+1))+grids[i][j]

print(best_route(0,0))
