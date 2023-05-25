# m = list('Python')
# print(m)
# print(set(m))

# A = {2,3,4,5}
# B = {3,4,5,6,7}
# print(A|B) 
# print(A.union(B))

# A = {2,3,4,5}
# B = {3,4,5,6,7}
# #A.update(B) 1 способ
# A|=B 2 способ
# print(A)

# A = {2,3,4,5}
# B = {3,4,5,6,7}
# print(A&B)
# print(A.intersection)

# A = {2,3,4,5}
# B = {3,4,5,6,7}
# A.intersection_update(B)
# print(A)

# A = {2,3,4,5}
# B = {3,4,5,6,7}
# print(A-B)
# print(B-A)

# A = {2,3,4,5}
# B = {3,4,5,6,7}
# A.difference_update(B) # A-=B
# print(A)

# A = {2,3,4,5}
# B = {3,4,5,6,7}
# print(A<=B)

# A = {2,3,4,5}
# B = {3,4,5,6,7}
# print(A>=B)

# A = {2,3,4,5}
# B = {3,4,5,6,7}
# print(len(A), len(B))

# A = {2,3,4,5}
# B = {3,4,5,6,7}
# print(3 in A, 8 in B, 9 not in B)

A = {2,3,4,5}
A.add(10)
print(A)