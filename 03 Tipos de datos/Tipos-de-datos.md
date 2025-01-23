# Tipos de datos en C

C es un lenguaje de programación tipado, es decir, tienes que declarar de qué tipo de dato es una variable.

## Tipos de datos básicos

### Aritmeticos / Numericos

Estos sirven para almacenar información aritmetica, se tienen de tipo:

1. **Enteros** `int`, de tamaño de 2 a 4 bytes, sirven para guardar números positivos y negativos.
   1. **`int` 2 Bytes**: Valores de -32,768 a 32,757
   2. **`long int` o `long` 4 Bytes**: Valores de -2,147,483,648 a 2,147,483,648 (Es el estándar) [1]
   3. **`unsigned int` 2 Bytes**: Valores positivos (sin signo) de 0 a 65,535
   4. **`unsigned long int` o `unsigned long` 2 Bytes**: Valores positivos (sin signo) de 0 a 4,294,967,295
   5. **`short int` o `short` 2 bytes**: Valores de -32,768 a 32,767
   6. **`unsigned short` 2 bytes**: Valores de 0 a 65,535
   7. **`long long` 8 bytes**: Valores de -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807
   8. **`unsigned long long` 8 bytes**: Valores de 0 a 18,446,744,073,709,551,615
2. **De punto flotante** `float`, para decimales.
   1. **`float` 4 bytes**: 1.2E-38 to 3.4E+386 (6 decimal places) [2]
   2. **`double` 8 bytes**: 2.3E-308 to1.7E+308 (15 decimal places)
   3. **`long double` 10 bytes**: 3.4E-4932 to 1.1E+4932 (19 decimal places)

> 📝 **Nota:** En C siempre debes pensar en los valores que va a tomar una variable, es una de las buenas prácticas, se calculan los valores mínimo y los valores máximos.

### El tipo de dato `void`

Especifica que no hay valor disponible, se usa en 3 escenarios:

1. Función retorna un tipo de dato `void`, es decir, no se retorna un valor.

   ```c
   void funcion()
   ```

2. Funcion tiene argumentos de tipo `void`, para funciones que no aceptan parámetros

   ```c
   int rand(void)
   ```

3. Puntero o apuntado que va a la dirección en memoria de un objeto (en la memoria física de la comptadora), pero no le importa el tipo de dato que tenga, permitiendo hacer casteos a cualquier tipo de dato.

   ```c
   void ptr*;
   ```

### Tipo de dato `enum`

Es una especie de lista, permite guardar tipos de datos constantes.

<!-- Referencias -->

[1]: <https://www.geeksforgeeks.org/c-long/> "Long en C"
[2]: <https://es.science19.com/what-is-e10-11567#google_vignette> "Notación Citntifíca"
