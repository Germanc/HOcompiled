1. Espero:
    * Preprocessing: que procese las directivas del programa e inserte la definición de las funciones que están definidias en los .h.
    * Que genere código en ensamblador específico para mi procesador.
    * Que genere el objeto en lenguaje máquina pero todavía con referencias indefinidas
    * Que genere un ejecutable listo para usar

2. Agregó la definición de cada una de las funciones de las librerías utilizadas por calculator.c

3. Como escribo eso acá ? está dentro de calculator.asm como 'add_numbers:' y 'main:'

4. Se forman los simbolos add_numbers, main, printf. "T add_numbers" es una función pública (T mayúscula). "T main" también es una función pública. "U printf" es una función pública no definida (undefined) ya que no es parte del problema, sino que es externa. No tengo idea de que es 'U  _GLOBAL_OFFSET_TABLE_'.

5. Ahora hay muchos más símbolos que son parte de librerías necesarias para interactuar con el sistema operativo y la consola.
