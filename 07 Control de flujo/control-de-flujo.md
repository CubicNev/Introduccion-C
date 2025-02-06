# Instrucciones para el control de flujo

Van a existir situaciones en las que se deberán realizar acciones especiales durante la ejecución del programa, tales como: interrupciones, continuaciones o saltos entre bloques.

## Expresión **`break`**

Sirve para **interrumpir** la ejecución de un bloque. Normalmente se usa en `switch` para indicar el fin de un caso, o en bucles para interrumpir un bucle. [1] [2]

```c
char c;

while(1) {
    printf_s( "\nPress any key, Q to quit: " );

    // Convert to character value
    scanf_s("%c", &c);
    if (c == 'Q')
        break;
}
```

## Expresión **`continue`**

Esta instruccion forza la ejecución de la siguiente iteración del ciclo, en lugar de salirse, va a la siguiente saltandose el código que esta después y llendo al inicio de nuevo. pasa el control a la siguiente iteración de la instrucción de inclusión `do`, `for` o `while` más próxima en que aparece, omitiendo las restantes instrucciones en el cuerpo de la instrucción `do`, `for` o `while`. [3]

La siguiente iteración de una instrucción `do`, de `for` o `while` se determina de la manera siguiente:

- Dentro de una instrucción `do` o `while`, la siguiente iteración empieza evaluando de nuevo la expresión de la instrucción do o while.
- Una instrucción `continue` en una instrucción `for` hace que se evalúe la expresión de bucle de la instrucción `for` . Después, el código vuelve a evaluar la expresión condicional. En función del resultado, finaliza o itera el cuerpo de la instrucción.

Este es un ejemplo de la instrucción `continue`:

```c
    int i, n = 15;
    for (i = 0; i < n; i++) {
        if (i % 2 == 0) // No imprime pares
            continue;
        printf(" i: %d\n", i);
    }
```

## Expresión **`goto`**

Es una expresión algo rara de usar y que puede inducir malas prácticas ya que es una función altamente abusable, ya que te permite a cualquier parte del código estés donde estés. Toda la lógica deberias manejarla con las demás estructuras.

Un caso de uso donde puede ser útil es el siguiente:

```c
int i, j, k;
// Muchos for anidados
for (i = 0; i < 10; i++) {
    for (j = 0; j < i; j++) {
        for (k = 0; k < j; k++) {
            if(k == 7)
                goto errorHandler;
        }
    }
}

errorHandler: //codigo para manejo de error.
```

Para salir de ciclos muy anidados para manejo de errores, de esta forma evitamos hacer uso de muchos breaks.

<!-- Referencias -->

[1]: <https://learn.microsoft.com/es-es/cpp/c-language/break-statement-c?view=msvc-170> "break C"
[2]: <https://www.ibm.com/docs/es/debug-for-zos/16.0?topic=commands-break-command-c-c> "Comando break"
[3]: <https://learn.microsoft.com/es-es/cpp/c-language/continue-statement-c?view=msvc-170> "Continue"
