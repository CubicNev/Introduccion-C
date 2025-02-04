# Funciones

Una **función** es un fragmento de código que realiza una tarea específica, por ejemplo, elevar yun número a una potencia. Esta integración hace que puedas reusar las funciones una y otra vez en un programa.

## Elementos de una función

- El **retorno** o `return-type`: Es el tipo de dato que la función va a retornar.
- **Nombre de la función**: Es el nombre con el que podremos referenciar a la función en otro lado del código.
- **Parámetros**: Son los valores de entrada de la función.
- **Cuerpo**: Es dónde van todas las declaraciones y `statements`, es decir todas las instrucciones que realizará la función.

> 📝 **Nota:** Por buenas practicas los nombres de los parámetros de la función deben ser los más descriptivos posibles.

```c
int power(int base, int n) {
    int i, p;
    p = 1;
    for (i = 1; i <= n; i++)
        p *= base; // p = p * base

    return p;
}
```

> ⚠️ **Cuidado:** Es importante declarar las funciones al inico del programa para que el compilador la reconozca más adelante.

Para llamar una función solo se ingresa su nombre y sus argumentos entre parentesís.

```c
int main() {
    int i;
    for(i = 0; i < 10; i++)
        printf("The power of 2 raised to %d is %d\n", i, power(2,i));
    return 0;
}
```

## Tipos de funciones

- Sin argumentos y sin retorno

```c
void functionName(); //Declarando la function.
functionName(); //Invocando o ejecutando a la function
void functionName(){ // definicion de la function
  //logica
}
```

- Con argumentos pero sin valores a retornar

```c
void functionName(float); //Declarando la function.
functionName(float); //Invocando o ejecutando a la function
void functionName(float){ // definicion de la function
  //logica
}
```

- Funciones sin argumento, pero con valor de retorno

```c
int functionName();
```

- Funciones con argumentos y valor de retorno

```c
int functionName(int, float);
```
