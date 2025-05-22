def fibonacci_inverso(N):
    a = 0
    b = 1
    lista = [a, b] #Inicia la lista con los dos primeros numeros de la serie
    for i in range(N - 2):
        c = a + b #calcula el siguiente numero de la serie
        lista.append(c) #agrega a la lista el numero calculado
        a = b #avanza un paso en la secuencia
        b = c
    lista.reverse() #imprime la lista pero al reves
    return lista
