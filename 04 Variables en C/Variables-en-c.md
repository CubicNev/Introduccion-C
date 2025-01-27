# Variables en C

Una variable en C es la definicon o nombre que se le da a un espacio en memoria para almacenar y manipular datos. Cada variable debe tener un [**tipo de dato**](./../03%20Tipos%20de%20datos/Tipos-de-datos.md) específico para determinar el tamaño y la estructura que se va a reservar en la memoria.

De esta forma se tiene la sintaxis:
> `tipo_de_dato` **nombreVariable** `=` *valor_inicial_de_variable*`;`

Asignarle un valor a la variable es opcional y depende del contexto de tu programa. Hay distintos tipos de variables que **se diferencian por su alcance y duración**:

- **Variables locales**: Se definen dentro de una función y solo se pueden acceder a ellas dentro de esa función.
- **Variables globales**: Se declaran fuera de cualquier bloque del programa y son accesibles en todo el programa.
- **Variables estáticas**: Conservan su valor actual incluso desúés de que se encuentran fuera de su ámbito, puede ser local o global, se almacenan en el segmento de datos, por lo que permanecen en una memoria determinada cuando el programa aún se está ejecutando.
- ***Auto variable***: Variables locales que se declaran dentro de una función sin las palabras clave `static` o `register`., se destruyen cuando finaliza la llamada a la función en la que se declaran.
- ***Register variable***: Se almacendan en la CPU, si no hay registros dispobibles para almacenar variables, el compilador los trata como variables automáticas.
- **Variables ecternas**: Usas la palabra clave **`extern`**, y sirve para usar la variable en distintos archivos a lo largo del código.

## Reglas al nombrar una variable en C

Seguimos algunas reglas al momento de declarar/nombrar una variable: [1]

1. Solo pueden contener letras, digitos y guion bajo (*underscore*)
2. Deben iniciar con una **letra** o **_** (underscore), y nunca con un número
3. Evitar espacios
4. Evitar caráctere especiales como: `!`, `#`, `%`, etc.
5. No pueden ser palabras reservadas como **`int`**, **`for`**, etc.
6. Son ***case-sentitive***, es decir, "myVar" y "myvar" son variables distintas.

## Ejemplos

```c
int i, j, k;
unsigned int minumunMinutes = 30;
char y = 'y';
unsigned char dailyWorkedHours = 0; // 0 por default
```

> 📝 **Nota:** La variables siempre estarán en 0, si no se inicializan. Por buenas prácticas solo no se inicializan cuando son variables auxiliares como `i`, `j` o `k`;

## Especificadores de formato (*format specifiers*)

Se usan para describir el formato de entrada y salida en una cadena/*String*. Es diferente por cada tipo de dato y siempre empiezan con un `%`.

| ***Format Specifier*** | **Descripción** |
| :---: | :---: |
| %c | For b type |
| %d | For signed integer type|
| %f | For float type |
| %lf | Double |
| %p | Pointer |
| %s | String |
| %u | Unsigned int|
| %% | Prints % character|

## Declaración de constantes

Son valores que no van a acambiar en el código. Tambien se conocen como literales. Por ejemplo, en C no hay string y los maneja como arreglos de carácteres; cuando escribimos algo como `"Hola mundo"`, C toma eso como un literal.

Se pueden declarar constantes de todo tipo

### `const`

```c
const int COSTHOTDOG = 50;
const int COSTTACO = 100l; // Al ser constantes puedes combinar letras y números
const int COSTSODA = 10u; // La u es un sufijo que indica que es unsigned
const float TAX = 16.16;
const char NEWLINE = '\n';
```

> 📝 **Nota:** Una **buena práctica** es nombrar las **constantes con mayúsculas**.

### Preprocessor directives: `define`

Siguen la siguiente sintaxis

> `#define` **NombreConstante** valor

Por ejemplo

```c
#define PAPERCOST 3
```

`#define` se usa para tener en la parte de arriba del código, para poner valores que usamos varias veces en el código. Para que sean configurables, pero no cambiantes durate el tiempo de programación.

En el caso de `const` su uso se delimita más a funciones.

<!-- Referencias -->

[1]: <https://www.w3schools.com/c/c_variables_names.php> "Nombrar variables"
