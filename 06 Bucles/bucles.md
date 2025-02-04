# Control de bucles en C

Para repetir ciertas acciones una y otra vez hasta cumplir con alguna condición se usan bucles.

## Bucle **`while`**

El bucle **`while`** evalua una expresión, siempre y cuando esta expresión se cumpla (sea verdadera), se ejecutaran las intrucciones dentro del bloque una y otra vez hasta que ya no se cumpla la condición.

Cuando termina de ejecutar las instrucciones, reevalua la expresión. Su sintaxis es la siguiente:

```c
while (condition) {
    /* code */
}
```

> 📝 **Nota:** Es importante dar una isntrucción para marcar el fin del bucle, y no se este repitiendo indefinidamente.

Los ciclos **`while`** se usan para ejecución **condicional**, es decir se usa cuando no se sabe cuantas veces se va a hacer la repetición. Normalmente cuando se depende de factores externos, por ejemplo: que el usuario ponga un input, que el robot detecte algo, de que el software detecte o haga un cambio en el programa. No se sabe de ante mano cuando se acaba el ciclo.

## Bucle **`do-while`**

Significa "Haz mientras", permite que el código dentro del bloque se ejecute al menos una vez. Estos casos normalmente se dan cuando vas a inicializar algo. Por ejemplo, ver que los sensores de un robot estén funcionando.

```c
do
{
    /* code */
} while (condition);
```

## Ciclo **`for`**

Se usa cuando se sabe excatamente cuantas veces se va a iterar. Su estrcutura tradicional, inicializa el iterador `i` en cero, seguido de una condición, seguido de una intrucción que se ejecta al final del ciclo.

```c
for (size_t i = 0; i < n; i++)
{
    /* code */
}
```

Comunmente se utilizan para recorrer arreglos.
