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

<!-- Referencias -->

[1]: <https://en.cppreference.com/w/c/language/operator_assignment> "Operadores de asignación"
[2]: <https://en.cppreference.com/w/c/language/operator_incdec> "Operadores de incremento/decremento"
[3]: <https://en.cppreference.com/w/c/language/operator_arithmetic> "Operadores aritmeticos"
[4]: <https://en.cppreference.com/w/c/language/operator_logical> "Operadores lógicos"
[5]: <https://en.cppreference.com/w/c/language/operator_comparison> "Operadores de comparación"
[6]: <https://en.cppreference.com/w/c/language/operator_member_access> "Operadores de acceso a miembros"
[7]: <https://en.cppreference.com/w/c/language/operator_other> "Otros operadores"
