baris1 = input()
baris2 = input()

if len(baris1) != len(baris2):
    print("\nPanjang kalimat berbeda, pesan palsu\n")
else:
    bintang = 0
    pagar = 0
    hasil = ""

    for char1, char2 in zip(baris1, baris2):
        if char1 == ' ' and char2 == ' ':
            hasil += ' '
        else:
            hasil += '*' if char1 == char2 else '#'
            bintang += 1 if hasil[-1] == '*' else 0
            pagar += 1 if hasil[-1] == '#' else 0

    print(f"\n{hasil}\n* = {bintang}\n# = {pagar}\n{'Pesan Asli' if bintang >= pagar else 'Pesan Palsu'}")