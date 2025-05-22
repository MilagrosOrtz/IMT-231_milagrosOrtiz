def triangulo_letras(n):
    letras = ["A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"]
    for i in range(n): #recorre desde la fila 0 a la n-1
        for j in range(i + 1): #en cada fila imprime una letra mas que el indice
            print(letras[j], end=" ") #imprimer cada letra sin saltos de linea
        print() 
