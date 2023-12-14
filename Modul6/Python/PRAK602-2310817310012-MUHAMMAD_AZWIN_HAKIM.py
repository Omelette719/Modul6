def hitung_zetsu_putih(ruangan, zetsu):
    hasil = []
    for i in range(ruangan):
        hasil.append(zetsu[i] * (i + 1))
    return hasil

ruangan = int(input())
zetsu = list(map(int, input().split()))

print()

hasil_hitung = hitung_zetsu_putih(ruangan, zetsu)
print(*hasil_hitung)
