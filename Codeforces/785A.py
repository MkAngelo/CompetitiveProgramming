g = { "Tetrahedron": 4, "Cube": 6, "Octahedron": 8, "Dodecahedron": 12, "Icosahedron": 20}
t = int(input())
tot = 0
for _ in range(t):
    tot += g[input()]
print(tot) 
