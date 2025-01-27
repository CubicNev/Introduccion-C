# Tipos de datos en C

C es un lenguaje de programación tipado, es decir, tienes que **declarar de qué tipo de dato es una variable**.

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

### El tipo de dato `char`

El tipo de datos `char` se usa para guardar caracteres como `a`, `b`, `c`, etc.

| Tipo | Tamaño | Rango de valores |
| --- | --- | --- |
| `char` | **1 byte** | $-128$ a $127$ |
| `usigned char` | **1 byte** | $0$ a $255$ |

Permite guardar 256 datos.

## El tipo de dato `void`

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

## Tipo de dato `enum`

Es una especie de lista, permite guardar datos coon vlaores constanates constantes. Algunos casos de uso son:

- Guardar días de la semana: `Lunes`, `Martes`, `Miércoles`, etc.
- En un juego de cartas, guardar cartas como: `Tipo de carta`, `Tipo de ataque`.

La variables dentro de un enum solo pueden tener un valor, y también pueden tener variables.

**Enumeration** (o `enum`) es un tipo de dato definido por el usuario (*user defined data type*) [3]. Principalmente es usado para nombrar constantes de tipo `int`, haciendo que un programa sea fácil de mantener/leer.

### Ejemplo

Se declara siguiendo la siguiente sintaxis:
> `enum` **nombreVariable** `{lista de constantes separadas por comas};`.

Podemos ver algunos ejemplos a continuación:

```c
enum designElements {
    ITALICS = 1,
    BOLD = 2,
    STRIKE = 3,
};

enum weekDays {Sun, Mon, Tue Web, Thu, Fri, Sat};
```

Los enums se pueden usar como valiables, para esto tenemos dos opciones:

```c
// 1
enum week{Mon, Tue, Wed};
enum week day;
// 2
enum week{Mon, Tue, Wed}day;
```

Enum indexa automatomaticamente los valores, comenzando por el 0, como un arreglo.

```c
#include<stdio.h>

enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};

int main()
{
    enum week day;
    day = Wed;
    printf("%d",day);
    return 0;
}
```

> **Salida:** 2

Algunos ejemplos de uso se pueden ver en el archivo [`02-enums.c`](./02-enums.c). Para correrlo usa el siguiente comando (Ubuntu)

```sh
gcc -o enums 02-enums.c
./enums
```

<!-- Referencias -->

[1]: <https://www.geeksforgeeks.org/c-long/> "Long en C"
[2]: <https://es.science19.com/what-is-e10-11567#google_vignette> "Notación Citntifíca"
[3]: <https://www.geeksforgeeks.org/enumeration-enum-c/> "Enumeration"