def numeros_primos(N):
    contador = 0
    numero = 2 #primer numero primo

    while contador < N: 
        es_primo = True #inicializa una variable booleana

        for i in range(2, numero): #verifica si es divisible 
            if numero % i == 0:
                es_primo = False #si tiene divisores no es primo
                break
        if es_primo:
            print(numero) #si es primo lo imprime y aumenta el contador
            contador += 1

        numero += 1 #avanza un numero 
