with open("input12.txt", 'r') as f:
	nums = f.read().split('\n')

tot=0
for num in nums:
	tot+=int(num)

print(str(tot)[:10])