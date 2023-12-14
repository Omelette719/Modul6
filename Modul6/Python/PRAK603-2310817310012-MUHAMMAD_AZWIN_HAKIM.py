n1, n2 = map(int, input().split())

if n1 == n2:
    matrix1 = list(map(int, input().split()))
    matrix2 = list(map(int, input().split()))

    print()
    
    result_matrix = [matrix1[i] * matrix2[i] for i in range(n1)]
    
    print(" ".join(map(str, result_matrix)))
else:
    print("\nJumlah tidak sama")
