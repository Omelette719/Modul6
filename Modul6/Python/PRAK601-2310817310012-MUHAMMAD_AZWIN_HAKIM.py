def buat_matriks(baris, kolom, nilai):
    matriks = [nilai[i:i+kolom] for i in range(0, len(nilai), kolom)]
    return matriks

baris, kolom = map(int, input().split())
nilai = list(map(int, input().split())) 
print()
for baris_matriks in buat_matriks(baris, kolom, nilai):
    print(*baris_matriks)
