n = int(input())
c = 0
l = {'Tetrahedron':4,'Cube':6,'Octahedron':8,'Dodecahedron':12,'Icosahedron':20}
for _ in range(n):
    s = input()
    c += l[s]

print(c)
