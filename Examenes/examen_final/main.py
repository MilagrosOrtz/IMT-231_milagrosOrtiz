from funciones import suma_divisores, triangulo_letras, numeros_primos, fibonacci_inverso

def menu():
    while True:
        print("\n--- MENÚ DE FUNCIONES---")
        print("1. Calcular la suma de todos los divisores de un número N (excluyendo el propio número).")
        print("2. Generar un triángulo de caracteres con letras del alfabeto hasta una altura N.")
        print("3. Mostrar los primeros N números primos.")
        print("4. Generar la secuencia de los primeros N términos de la serie Fibonacci inversa.")
        print("5. Salir del programa")

        opcion = input("Elige una opcion: ")

        if opcion == "1":
            n = int(input("Ingresa un numero: "))
            suma_divisores(n)
        elif opcion == "2":
            n = int(input("Ingresa la altura del triangulo: "))
            triangulo_letras(n)
        elif opcion == "3":
            n = int(input("Cuantos numeros primos?: "))
            numeros_primos(n)
        elif opcion == "4":
            n = int(input("Cuantos terminos de Fibonacci inverso?: "))
            lista = fibonacci_inverso(n)
            print("Fibonacci inverso:", lista)
        elif opcion == "5":
            print("Gracias por usar el programa.Hasta luego!")
            break
        else:
            print("Opcion invalida. Intenta de nuevo.")

menu()
