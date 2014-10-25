#include "Evaluador.h"
#include <iostream>
#include "Math.h"
//#include "string.h"

using namespace std;

//Desrefencia ptr (dado) y devuelve su valor
int obtenerValor(int *ptr)
{
    //Desreferenciamos la variable ptr para retornar el valor
    return *ptr;
}

//Desreferencia a (dado) y b (dado) y devuelve la suma de ambos
int sumar(int* a, int* b)
{
    //Desreferncia de a y b para hacer la suma y retornar su valor.
    return (*a)+(*b);
}

//Devuelve true si a (dado) y b (dado) apuntan al mismo espacio de memoria
bool compararApuntadores(string *a, string *b)
{
    //Comparamos las variable a y b usando un IF y devuelve TRUE si se cumple la condicion.
    if (a==b)
    {
        //Devuelve VERDADERO si se cumplio la comparacion.
        return true;
    }

}

//Desrefencia a (dado) y b (dado), devuelve true si ambos valores son iguales de lo contrario devuelve false
bool comparar(string *a, string *b)
{
    //Usamos un IF desreferenciando a y b comparando si son iguales.
    if ((*a)==(*b))
    {
        //Devolvera VERDADERO si se cumple la condicion
        return true;
    }else
    {
        //En caso contrario de no ser iguales nos retorna FALSO
        return false;
    }
}

//Desreferencia a (dado) y devuelve su primera letra
char getPrimeraLetra(string* a)
{
    //Creamos una variable de tipo CHAR y le asignamos el valor 1 que en este caso es (0)
    //utilizando la funcion "at" para acceder a dicha posicion.
    char letra = a->at(0);
    //Retornamos el valor que extrajimos.
    return letra;
}

//Desreferencia a (dado) y devuelve true si es palindroma de lo contrario devuelve false
//Definicion de palindromo: http://es.wikipedia.org/wiki/Pal%C3%ADndromo
//Ejemplos de palindromos: Ana, arenera, arepera, anilina, ananá, Malayalam, Neuquén, Oruro, oso, radar, reconocer, rotor, salas, seres, somos, sometemos
bool esPalindromo(string* a)
{
    //Referencia del codigo utilizado: https://espanol.answers.yahoo.com/question/index?qid=20110907202010AAE3fw9

    //Creamos un apuntador tipo string para almacenar la palabra de forma inversa.
    string *resultado = new string("");
    //Usamos un FOR para recorrer la variable desferenciada de "a"
    //sacamos el tamaño del string de la variable en forma inversa para hacer luego uso de la comparacion.
    for(int c = a->length()-1;c>=0;c--)
    {
        //Hacemos uso de la variable "resultado" donde asignamos cada letra en forma inversa
        //usamos ademas la funcion "at()"
        resultado += a->at(c);
    }
    //Agregamos un IF para comparar si la palabra guardada en la variable "resultado" es igual a la variable "a"
    if (resultado==a)
    return true; //Si se cumple retorna VERDADERO.
}

//Desreferencia base (dado) y exponente (dado) y devuelve la base elevado al exponente
int getExponente(int* base, int* exponente)
{
    //Utilizo la funcion "pow" para utilizar los valores de base y exponente.
    //Para utilizar esta funcion debemos agregar al inicio del "main" #include "Math.h"
    return pow((*base),(*exponente));
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
