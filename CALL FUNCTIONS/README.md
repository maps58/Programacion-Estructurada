
**Funciones**

La modularización, es una técnica en programacion para dividir un programa complejo grande en pequeños, y concentrarse en un análisis por separado
En C, se conocen como funciones a fragmentos de código utilizados para dividir un programa, con el objetivo que cada bloque realice una tarea determinada.
En las funciones juegan un papel muy importe las variables, ya que estas pueden ser ser locales o globales.

Las variables en C se distinguen principalmente por su alcance y tiempo de vida: laslocales se declaran dentro de una función o bloque {} y solo existen allí, mientras que las globales se declaran fuera de cualquier función, siendo accesibles y modificables en todo el programa. Las locales se crean al iniciar el bloque y mueren al salir; las globales persisten durante toda la ejecucion:

**Funciones predefinidas**

Durante nuestro curso, ya hemos creado funciones y en especifico la funcion principal; main() que es una función que se utiliza para ejecutar código y printf() es una función que se utiliza para generar/imprimir texto en la pantalla: Ejemplo:

>**int main() {**
 ** printf("INSTITUTO TECNOLOGICO DE OAXACA!");**
  **return 0;**
**}**

**Crear una función**

Para crear (a menudo denominado declarar) una funcion propia, se tiene que especificar el nombre de la función, seguido de paréntesis ()y llaves {}:

void nombre_funcion() {
  // codigo a ejecutarse
}

**Ejemplo explicado**

**Nombre_funcion()** es el nombre de la función que se sugiere tenga un nombre del roceso que realiza.
**void** Significa que la función no tiene un valor de retorno. En clase explicare mas sobre los valores de retorno.
      Dentro de la función (el cuerpo), agregar código que defina lo que debe hacer la función

**Llamar a una función**

Las funciones declaradas no se ejecutan inmediatamente. Se guardan para su uso posterior y se ejecutarán al ser invocadas. Para llamar a una función, escriba el nombre de la función seguido de dos paréntesis () y un punto y coma.;

En el siguiente ejemplo, **miFuncion()** se utiliza para imprimir un texto (la acción), cuando se llama:











