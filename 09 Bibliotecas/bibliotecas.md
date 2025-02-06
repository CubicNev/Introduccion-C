# Bibliotecas de C

En C hay un set de bibliotecas o *libraries* que contienen funciones que facilitan el desarrollo con el lenguaje. Por decir algunas tenemos las siguientes [1] [2]:

| Biblioteca | Descripción |
| :---: | :--- |
| `<stdio.h>` | Una librería estándar de input y output, funciónes para capturar entradas desde el teclado del usuario y para imprimir resultados a pantalla. |
| `<conio.h>` | Es console input-output, para comunicarnos directamente en la consola |
| `<string.h>` | Contiene funciones utiles para trabajar con cadenas de caracteres [3] |
| `<stdlib.h>` | Es una librería estándar, contiene funciones importantes, como `system()`, que sirve para comunicarnos afuera del programa de C (con el sistema), también cuenta con la función `atoi()` para convertir una cadena de carácteres a un valor numérico (u otras como `atol()` o  `atof()`), `rand()` genera números aleatorios y `delay()` para dar pau durante la ejecución |
| `<math.h>` | Brinda funciones matematicas como `sin()`, `cos()`, `cosh()`, `floor()`, `ceil()`, `sqrt()` |
| `<time.h>` | Para fechas o tiempos en el sistema [4] |
| `<ctype.h>` | Para manejo de caracteres individuales, contiene funciones utiles como deteccion de espacios en blanco, mayúsculas, minusculas, signo de puntuación, etc. Contiene los prototipos de las funciones que evalúan ciertas propiedades de los caracteres, prototipos de funciones para convertir letras de minúsculas a amayúsculas y viceversa |
| `<signal.h>` | Para manejar todo lo que tiene que ver con señales, como eventos. Contiene prototipos de funciones y macros paa manipular varias condiciones que se pudieran presentar durante la ejecución del programa |
| `<locale.h>` | Ayuda con cuestiones locales al software, cuando se necesita que el programa se adapte al lugar que se use. COntiene los prototipos de funciones e información adicional que permite modificar un programa para adecuarlo al "local" en que se ejecuta. La idea de "local" permite al sistema manipular diferentes convenciones para epresar datos como fechas, horas, montos en moneda y grandes números alrededor del mundo |
| `<errno.h>` | Ayuda a manejar errores. Define macros que son útiles para reportar condiciones de error |
| `<assert.h>` | Brinda una macro, sirve para verificar asumciones (como cuando asumimos) e imprimir un diagnostico. Contiene macros e información para agregar diagnósticos |
| `<float.h>` | Contiene los líumites del sistema con respecto al tamaño de los números de punto flotante |
| `<limits.h>` | Contiene los líumites del sistema con respectto al tamaño de los números enteros |
| `<setjmp.h>` | Contiene los prototipos de las funciones que permiten evitar la llamda de función usual y la secuencia de retorno |
| `<stdarg.h>` | Define macros para tratar con una lista de argumentos correspondientes a una función, cuyos números y tipos son desconocidos |
| `<stddef.h>` | Contiene definiciones comunes de los tipos utilizados por C para realizar ciertos cálculos |

> 📝 **Nota:** Un error común es llamarles librerias, pero lo correcto es decirle bibliotecas o *libraries*

Al usar bibliotecas extras se deben usar más banderas (`-lm`) para compilar el archivo

```sh
gcc -o out programa.c -lm
```

El epoch time de Unix es una fecha escogida de forma arbitraria, que sirve para que los programas sigan un estandar de fecha y hora. Se calcula cuánto tiempo ha pasado en segundos desde el 1ro de enero de 1970 con 0 horas y 0 minutos. [5]

<!-- Referencias -->

[1]: <https://learn.microsoft.com/en-us/cpp/c-language/c-language-reference?view=msvc-170&viewFallbackFrom=vs-2019> "C Language Reference"
[2]: <https://devdocs.io/c/> "C Programming Language"
[3]: <https://www.tutorialspoint.com/c_standard_library/string_h.htm> "String.h"
[4]: <https://www.tutorialspoint.com/c_standard_library/time_h.htm> "Time.h"
[5]: <https://www.timeanddate.com/> "Time and date"
