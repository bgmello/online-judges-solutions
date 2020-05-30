from itertools import permutations

perms = [*permutations(range(1, 10))]

def join_ints(l):
    ans = 0
    p = 0
    for x in l[::-1]:
        ans += x*(10**p)
        p+=1

    return ans


ans = set()

for perm in perms:
    for posx in range(8):
        for poseq in range(posx+1, 8):
            if (join_ints(perm[:posx+1])*join_ints(perm[posx+1:poseq+1])==join_ints(perm[poseq+1:])):
                ans.add(join_ints(perm[poseq+1:]))

print(sum(ans))
