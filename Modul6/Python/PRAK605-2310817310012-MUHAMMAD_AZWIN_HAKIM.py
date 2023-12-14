n = int(input())

A = []
B = []

print("Matriks A")
for _ in range(n):
    row = list(map(int, input().split()))
    A.append(row)

print("Matriks B")
for _ in range(n):
    row = list(map(int, input().split()))
    B.append(row)

AXB = [[0 for _ in range(n)] for _ in range(n)]

for i in range(n):
    for j in range(n):
        for k in range(n):
            AXB[i][j] += A[i][k] * B[k][j]

print("\nMatriks AXB")
for i in range(n):
    for j in range(n):
        print(AXB[i][j], end=" ")
    print()
