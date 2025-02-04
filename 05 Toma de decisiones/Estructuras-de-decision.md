# Estrucuturas de decisión

Antes de comenzar hay que dejar en claro que un **statement** es una línea de código, es la unidad de código, cierra con un `;`.

```c
printf("Hello world\n");
```

Y un **bloque**, es un grupo de *statements*, están contenidos entre corchetes `{}`. Tienen un ventaja, si declaras un variable dentro de un bloque, esta solo vivirá y morirá dentro del blque.

```c
{
    int a;
    a = 1 + 1;
    printf("%d\n", a);
}
```

## Estructura **`if-else`**

De esta forma, un **`if`** tiene la siguiente estructura.

```c
if (expresion)
{
    statement1;
    statement2;
    statement3;
}
else if (expresion)
{
    statement4;
    statement5;
}
else
    statement6;
```

**`if`** funciona a través de **expresiones**, si una expresón es verdadera ejecuta un bloque de código, si no se cumple ejecuta otro bloque de código.

> 📝 **Nota:** Por buenas prácticas si solo se va a ejecutar un statement, no es necesario poner corchetes.

Podemos poder tantos **`else-if`** como necesitemos, pero hay que tomar en cuenta que el programa se va ejecutando de arriba a abajo ya que es un lenguaje estructurado.

## Operadores

| **Asiganción** [1] | **Incremento / Decremento** [2] | **Aritmeticos** [3] | **Lógicos** [4] | **Comparación** [5] | **De acceso** [6] | **Otros** [7] |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| **`a = b`** | **`++a`** | **`+a`** |  **`!a`** | **`a == b`** | **`a[b]`** | **`a(...)`** |
| **`a += b`** | **`--a`** | **`-a`** |  **`a && b`** | **`a != b`** | **`*a`** | **`a, b`** |
| **`a -= b`** | **`a++`** | **`a + b`** |  **`a \|\| b`** | **`a < b`** | **`&a`** | **`(type) a`** |
| **`a /= b`** | **`a--`** | **`a - b`** |  | **`a > b`** | **`a->b`** | **`a ? b : c`** |
| **`a *= b`** |  | **`a * b`** |  | **`a <= b`** | **`a.b`** | **`sizeof`** |
| **`a %= b`** |  | **`a / b`** |  | **`a >= b`** |  | **`alignof`** |
| **`a &= b`** |  | **`a % b`** |  |  |  |  |
| **`a \|= b`** |  | **`~a`** |  |  |  |  |
| **`a ^= b`** |  | **`a & b`** |  |  |  |  |
| **`a <<= b`** |  | **`a << b`** |  |  |  |  |
| **`a >>= b`** |  | **`a >> b`** |  |  |  |  |

## Estrucutura **`switch-case`**

Otra estructura para controlar el flujo de un programa, es el **`switch-case`**, es una estrctura múltiple que sirve para tomar decisiones cuando se tienen varios casos de forma que no se tienen que usar multiples **`if-else`**.

Funciona con **valores constantes**, es decir, cada decicion que toma se hace entorno a los distintos valores permanentes y fijos que puede tener una variable, por ejemplo; un número, una cadena o un carácter. Estás decisiones giran en torno a una **variable de control**.

Uno de los principales usos es crear **máquinas de estado**, es decir, sistemas dónde se tienen comportamientos predefinidos que cambian según cada caso del switch.

La estructura es la siguiente.

```c
switch (opt1)
{
case 1:
    /* código */
    break;
case 2:
    /* código */
    break;
default:
    /* código */
    break;
}
```

> 📝 **Nota:** **break** es una sentencia que indica el fin de un caso, que se cumplio todo el código que se deseaba ejectar en un caso.
> **default** se ejecuta si no se cumple alguno de los casos.

<!-- Referencias -->

[1]: <https://en.cppreference.com/w/c/language/operator_assignment> "Operadores de asignación"
[2]: <https://en.cppreference.com/w/c/language/operator_incdec> "Operadores de incremento/decremento"
[3]: <https://en.cppreference.com/w/c/language/operator_arithmetic> "Operadores aritmeticos"
[4]: <https://en.cppreference.com/w/c/language/operator_logical> "Operadores lógicos"
[5]: <https://en.cppreference.com/w/c/language/operator_comparison> "Operadores de comparación"
[6]: <https://en.cppreference.com/w/c/language/operator_member_access> "Operadores de acceso a miembros"
[7]: <https://en.cppreference.com/w/c/language/operator_other> "Otros operadores"
