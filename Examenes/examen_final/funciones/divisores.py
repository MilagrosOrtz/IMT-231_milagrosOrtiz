def suma_divisores(N):
    suma = 0  #inicializa una variable en 0
    for i in range(1, N): #desde 1 a un numero menor que el ingresado
        if N % i == 0: #comprueba divisibiidad
            suma += i #se acumula a la suma
    print("La suma de divisores es: ", suma)
