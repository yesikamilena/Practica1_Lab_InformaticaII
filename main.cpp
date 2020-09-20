#include <iostream>

using namespace std;

int main()
{
    bool k=1;
    do{

    char repetir;

    short int p;

    cout << "Ingresa el numero del ejercicio que quieras hacer: ";
    cin>>p;


    int A;
    double Adouble;
    int B;
    double C=0;
    double D;
    int N;
    int i;

    double pi=3.1416;



    switch(p){

    case 1:
        /* Ejercicio 1. Escriba un programa que pida dos números A y B e imprima en pantalla el residuo de la división A/B.
           Ej: si se ingresan 8 y 3 se debe imprimir:
           El residuo de la division 8/3 es: 2

            Nota: Nótese que la palabra división no tiene tílde, esto no es un error tipográco, es debido a que no se puede imprimir correctamente
            tíldes en la terminal. De ahora en adelante todos los ejemplos de salidas contendrán el mismo error tipográco.
        */





        break;

    case 2:
        /* Ejercicio 2. Escriba un programa que pida un número N e imprima en pantalla si es par o impar.
           Ej: si se ingresa 5 se debe imprimir:
           5 es impar
        */





        break;




    case 3:
        /* Ejercicio 3. Escriba un programa que pida dos números A y B e imprima en pantalla el mayor.
           Ej: si se ingresan 7 y 3 se debe imprimir:
           El mayor es 7
        */

        cout<<"Dame un numero: ";
        cin>>A;
        cout<<"Dame otro numero: ";
        cin>>B;

        if (A>B)
            cout<<"El mayor es "<<A<<endl<<endl;
        else if(B>A)
            cout<<"El mayor es "<<B<<endl<<endl;
        else
            cout<<"Ambos números son iguales."<<endl<<endl;

        break;

    case 4:
        /* Ejercicio 4. Escriba un programa que pida dos números A y B e imprima en pantalla el menor.
            Ej: si se ingresan 7 y 3 se debe imprimir:
            El menor es 3
        */

        cout<<"Dame un numero: ";
        cin>>A;
        cout<<"Dame otro numero: ";
        cin>>B;

        if (A<B)
            cout<<"El menor es "<<A<<endl<<endl;
        else if(B<A)
            cout<<"El menor es "<<B<<endl<<endl;
        else
            cout<<"Ambos números son iguales."<<endl<<endl;


        break;



    case 5:
        /* Ejercicio 5. Escriba un programa que pida dos números A y B e imprima en pantalla la división A/B con redondeo.
            Ej: si se ingresan 8 y 3 se debe imprimir:
            8/3=3
            Si se ingresan 7 y 3 se debe imprimir:
            7/3=2
        */


        cout<<"Dame un numero: ";
        cin>>A;
        cout<<"Dame otro numero: ";
        cin>>B;

        C=A/B;

        if (A%B>=C)     //Si el módulo es mayor a A/B, las décimas son mayores a 0.5
            C=C+1;

        cout<<A<<'/'<<B<<'='<<C<<endl<<endl;




        break;


    case 6:
        /* Ejercicio 6. Escriba un programa que pida dos números A y B e imprima en pantalla la potencia A**B, sin hacer uso de librerías matemáticas.
            Ej: si se ingresan 5 y 3 se debe imprimir:
            5∧3=125
        */


        cout<<"Dame un numero para la base: ";
        cin>>Adouble;             //A será la base
        cout<<"Dame otro numero para el exponente: ";
        cin>>B;             //B será el exponente

        C=B;

        D=Adouble;
        if(C==0){          //condición para elevar a 0
            if (Adouble==0){
                cout<< Adouble << " elevado a "<< B << '='<< " Indefinido"<<endl<<endl;
            }
            else {
                cout<<Adouble<<" elevado a "<<B<<"="<<1<<endl<<endl;
            }

        }

        else if (C<0){
            Adouble=1.0/Adouble;
            D=Adouble;

            while (C+1<0){  //Se pone el -1, porque en la primera iteración se multiplican dos veces la base.

            D=D*Adouble;
            C++;
        }
            cout<<A<<" elevado a "<<B<<"="<<D<<endl<<endl;

        }


        else{
            while (C-1>0){  //Se pone el -1, porque en la primera iteración se multiplican dos veces la base.
            D=D*A;
            C--;
        }

                    cout<<A<<" elevado a "<<B<<"="<<D<<endl<<endl;
        }

        break;



    case 7:
        /* Ejercicio 7. Escriba un programa que pida un número N e imprima en pantalla la suma de todos los números entre 0 y N (incluyéndose el mismo).
            Ej: si se ingresa 5: 1+2+3+4+5=15, por lo que se debe imprimir:
            La sumatoria desde 0 hasta 5 es: 15
        */

        cout<<"Dame un numero: ";
        cin>>N;

        C=0;

        for (i=0; i<=N; i++){
            C=C+i;
        }


        cout<<"La sumatoria desde 0 hasta "<<N<< " es: "<<C<<endl<<endl;




        break;



    case 8:
        /* Ejercicio 8. Escriba un programa que pida un número N e imprima en pantalla su factorial.
            Ej: si se ingresa 5: 5!=1*2*3*4*5=120, por lo que se debe imprimir:
            5!=120
        */

        cout<<"Dame un numero: ";
        cin>>N;

        C=1;


        for (i=1; i<=N; i++){
            C=C*i;
        }


        cout<<N<< "!="<<C<<endl<<endl;




        break;



    case 9:
        /* Ejercicio 9. Escriba un programa que pida un número N e imprima el perímetro y área de un círculo con radio N. Nota: use 3.1416 como una aproximación de pi.
            Ej: si se ingresa 1 se debe imprimir:
            Perimetro: 6.28352
            Area: 3.1416
        */


        cout<<"Dame un numero: ";
        cin>>N;


        C=2*pi*N;
        D=pi*N*N;

        cout<<"Perimetro: "<< C <<endl<<"Area: "<<D<<endl<<endl;




        break;



    case 10:
        /* Ejercicio 10. Escriba un programa que pida un número N e imprima en pantalla todos los múltiplos de dicho número entre 1 y 100.

            Ej: si se ingresa 33 se debe imprimir:
            Multiplos de 33 menores que 100:
            33
            66
            99
        */


        i=2;

        cout<<"Dame un numero: ";
        cin>>N;

        C=N;

        cout<<"Multiplos de "<<N<<" menores que 100: "<<endl;


        while (C<=100){
            cout<<C<<endl;
            C=N*i;
            i++;
        }



        break;






    case 11:
        /* Ejercicio 11. Escriba un programa que pida un número N e imprima en pantalla su tabla de multiplicar hasta 10xN.

            Ej: si se ingresa 7 se debe imprimir:
            1x7=7
            2x7=14
            3x7=21
            4x7=28
            5x7=35
            6x7=42
            7x7=49
            8x7=56
            9x7=63
            10x7=70
        */


        cout<<"Dame un numero: ";
        cin>>N;


        C=N;


        for(i=1; i<=10; i++){
            C=N*i;
            cout<< i <<'x'<< N <<'='<< C << endl;
        }


        break;



    case 12:
        /* Ejercicio 12. Escriba un programa que pida un número N e imprima todas las potencias desde N**1 hasta N**5.
            Ej: si se ingresa 3 se debe imprimir:
            3∧1=3
            3∧2=9
            3∧3=27
            3∧4=81
            3∧5=243
        */


        cout<<"Dame un numero: ";
        cin>>N;


        C=N;

        cout<< N <<" elevado a "<< 1 <<'='<< N << endl;

        for(i=2; i<=5; i++){
            C=C*N;
            cout<< N <<" elevado a "<< i <<'='<< C << endl;
        }


        break;




    case 13:
        /* Ejercicio 13. Escriba un programa que pida un número N e imprima todos los divisores de N.
            Ej: si se ingresa 4 se debe imprimir:
            Los divisores de n son:
            1
            2
            4
        */


        cout<<"Dame un numero: ";
        cin>>N;

        cout<<"Los divisores de "<< N << " son: "<<endl;


        for (i=1; i<=N; i++){
            if ((N%i)==0){
                cout<<i<<endl;
            }
        }


        break;




    case 14:
        /* Ejercicio 14. Escriba un programa que imprima dos columnas paralelas, una con los números del 1 al 50 y otra con los números del 50 al 1.
            Ej: las primeras lineas a imprimir serían:
            1 50
            2 49
            3 48
        */


        for( i=1; i<=50 ; i++ ){
            cout<< i << ' ' << 51-i <<endl;
        }



        break;


    case 15:
        /* Ejercicio 15. Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima en pantalla la suma de todos
         * los números ingresados.

            Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
            El resultado de la sumatoria es: 6
        */



        do {

            cout<<"Dame numeros: ";
            cin>>N;
            C=C+N;
        }
        while(N!=0);


        cout<<"El resultado de la sumatoria es: "<< C <<endl;



        break;




    case 16:
        /* Ejercicio 16. Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima en pantalla el promedio de los
         * números ingresados (excluyendo el cero).

            Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
            El promedio es: 2
        */

        i =-1;

        do {

            cout<<"Dame numeros: ";
            cin>>N;
            C=C+N;
            i++;
        }
        while(N!=0);

        C=C/(i+1);                      //i+1 porque incluímos el del 0

        cout<<"El promedio es: "<< C <<endl;



        break;




    case 17:
        /* Ejercicio 17. Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima en pantalla el mayor de todos los
         * números ingresados.

            Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
            El numero mayor fue: 3
        */


        cout<<"Dame numeros: ";
        cin>>C;

        if (C==0){
        cout<<"El numero mayor fue: "<< C <<endl;

        }

        else{
        do {
            cout<<"Dame numeros: ";
            cin>>D;

            if (D>C)
                C=D;
        }

        while(D!=0);


        cout<<"El numero mayor fue: "<< C <<endl;

}

        break;




    case 18:
        /* Ejercicio 18. Escriba un programa que pida un número N e imprima si es o no un cuadrado perfecto.

            Ej: si se ingresa 9 se debe imprimir:
            9 es un cuadrado perfecto.
            y si se ingresa 8 se debe imprimir:
            8 NO es un cuadrado perfecto.
        */

        cout<<"Dame un numero: ";
        cin>>N;


        k=0;

        for( i=1 ; i<=N ; i++){
            if (i*i==N)
                k=1;
        }

        if (k==1)
            cout<< N << " es un cuadrado perfecto."<<endl;
        else
            cout<< N << " NO es un cuadrado perfecto."<<endl;


        break;


    case 19:
        /* Ejercicio 19. Escriba un programa que pida un número N e imprima si es o no un número primo.
            Ej: si se ingresa 7 se debe imprimir:
            7 es un numero primo.
            y si se ingresa 8 se debe imprimir:
            8 NO es un numero primo.
        */


        cout<<"Dame un numero: ";
        cin>>N;


        k=0;

        for( i=2 ; i<N ; i++){
            if (N%i!=0)
                k=1;
        }

        if (k==1)
            cout<< N << " es un numero primo."<<endl;
        else
            cout<< N << " NO es un numero primo."<<endl;


        break;


    case 20:
        /* Ejercicio 20. Escriba un programa que pida un número N e imprima si es o no un palíndromo (igual de derecha a izquierda que de izquierda a derecha).
            Ej: si se ingresa 121 se debe imprimir:
            121 es un numero palindromo.
            y si se ingresa 123 se debe imprimir:
            123 NO es un numero palindromo.
        */


        cout<<"Dame un numero: ";
        cin>>N;

       // cout<< N;

        i=0;

        //Miremos la longitud

        while(N>0){
            N=N/10;
            i++;
        }


         cout<<i;




    //    break;




    case 21:
        /* Ejercicio 21. Escriba un programa que pida un carácter C, si es una letra la debe convertir de mayúscula a minúscula y viceversa e imprimirla.
            Ej: si se ingresa B se debe imprimir:
            Letra convertida: b
            y si se ingresa k se debe imprimir:
            Letra convertida: K
        */





    //    break;



    case 22:
        /* Ejercicio 22. Escriba un programa que pida una cantidad entera de segundos y la imprima en
            formato horas:minutos:segundos.
            Ej: si se ingresa 7777 se debe imprimir:
            2:9:37
        */





    //    break;



    case 23:
        /* Ejercicio 23. Escriba un programa que pida dos números A y B e imprima en pantalla el mínimo común múltiplo entre los dos.
            Ej: si se ingresan 4 y 6 se debe imprimir:
            El MCM de 4 y 6 es: 12
        */





    //    break;


    case 24:
        /* Ejercicio 24. Escriba un programa que pida una número entero e imprima un cuadrado de dicho tamaño, los bordes del cuadrado deben estar hechos
         * con el carácter `+' y el interior debe estar vacío.
            Ej: si se ingresa 4 se debe imprimir:
            ++++
            +  +
            +  +
            ++++
        */





    //    break;



    case 25:
        /* Ejercicio 25. Escriba un programa que pida un número N e imprima en pantalla la cantidad de dígitos de N.
            Ej: si se ingresa 1234 se debe imprimir:
            1234 tiene 4 digitos.
        */





    //    break;



    case 26:
        /* Ejercicio 26. Escriba un programa que pida tres números e imprima el tipo de triangulo (isósceles, equilátero, escaleno) que se formaría, si
         * sus lados tienen la longitud denida por los números ingresados. Tenga en cuenta el caso en que los números ingresados no forman un triángulo.
            Ej: si se ingresan 3, 3 y 5 se debe imprimir:
            Se forma un triangulo isosceles.
            y si se ingresan 3, 3 y 6 se debe imprimir:
            Las longitudes ingresadas no forman un triangulo.
        */





    //    break;



    case 27:
        /* Ejercicio 27. Escriba un programa que actúe como una calculadora con operaciones de suma, resta, multiplicación y división, el usuario debe
         * ingresar los operandos y la operación a realizar.
            Ej: si se ingresan 3, + y 5 se debe imprimir:
            3+5=8
        */





    //    break;



    case 28:
        /* Ejercicio 28. Escriba un programa que encuentre el valor aproximado de pi en base a la siguiente suma innita:

            π = 4(1 − 1/3 + 1/5 − 1/7 + 1/9...)
            El usuario debe ingresar el número de elementos usados en la aproximación.
            Ej: si se ingresa 3π = 4(1 − 1/3 + 1/5) = 3,46667, por lo que se debe imprimir:
            pi es aproximadamente: 3.46667
        */





    //    break;


    case 29:
        /* Ejercicio 29. Escriba un programa que adivine un número A (entre 0 y 100) seleccionado por el usuario (el número NO se ingresa al programa),
         * el programa imprimirá en pantalla un número B y el usuario usará los símbolos `>', `<' y `=' para indicarle al programa si B es mayor, menor o
         * igual que A. El programa imprimira un nuevo número B, con base en simbolo ingresado por el usuario, y repetira el proceso hasta acertar el
         * número seleccionado por usuario.
        */





    //    break;



    case 30:
        /* Ejercicio 30. Escriba un programa que genere un número aleatorio A (entre 0 y 100) y le pida al usuario que lo adivine, el usuario ingresa un
         * número B y el programa le dirá si B es mayor o menor que A, esto se repetirá hasta que el usuario adivine el número, en ese momento el programa
         *  le dirá el número de intentos que tardo el usuario en adivinar el número.
            Nota: para generar el número aleatorio use la función rand() de la librería <cstdlib>, recuerde convertirlo al rango (0,100).
        */





    //    break;



    case 31:
        /* Problema 1. Escriba un programa que identique si un carácter ingresado es una vocal, una consonante o ninguna de las 2 e imprima un mensaje
         * según el caso.

            Nota: el formato de salida debe ser:
            no es una letra.
            a es una vocal.

            5

            C es una consonante.
        */





    //    break;



    case 32:
        /* Problema 2. Se necesita un programa que permita determinar la mínima combinación de billetes y monedas para una cantidad de dinero determinada.
         *  Los billetes en circulación son de $50.000, $20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.

            Hacer un programa que entregue el número de billetes y monedas de cada denominación para completar la cantidad deseada. Si por medio de los
            billetes y monedas disponibles no se puede lograr la cantidad deseada, el sistema deberá decir lo que resta para lograrla.
            Ej: si se ingresa 47810, el programa debe imprimir:
            50000 : 0
            20000: 2
            10000 : 0
            5000: 1
            2000 : 1
            1000: 0
            500 : 1
            200: 1
            100 : 1
            50: 0
            Faltante: 10
        */





    //    break;



    case 33:
        /* Problema 3. Escriba un programa que debe leer un mes y un día de dicho mes para luego decir si esa combinación de mes y día son válidos. El
         * caso más especial es el 29 de febrero, en dicho caso imprimir posiblemente año bisiesto.
            Nota: el formato de salida debe ser:
            14 es un mes invalido.
            31/4 es una fecha invalida.
            27/4 es una fecha valida.
            29/2 es valida en bisiesto.
        */





    //    break;



    case 34:
        /* Problema 4. Escriba un programa para leer dos números enteros con el siguiente signicado: el valor del primer número representa una hora del
         * día en un reloj de 24 horas, de modo que 1245 representa las doce y cuarenta y cinco de la tarde. El segundo entero representa un tiempo de
         * duración de la misma manera, por lo que 345 representa tres horas y 45 minutos. El programa debe sumar esta duración primer número, y el
         * resultado será impreso en la misma notación, en este caso 1630, que es el tiempo de 3 horas y 45 minutos después de 12:45.
            Nota: el formato de salida debe ser: La hora es 1630.
            Otra nota: se debe imprimir un mensaje como el siguiente cuando uno de los datos ingresados en inválido: 1560 es un tiempo invalido.
        */





    //    break;



    case 35:
        /* Problema 5. Escriba un programa que muestre el siguiente patrón en la pantalla:

                                                *
                                               ***
                                              *****
                                             *******
                                              ******
                                               ***
                                                *


            El tamaño del patrón estará determinado un número entero impar que ingrese el usuario. En el ejemplo mostrado, el tamaño de la gura es 7.
        */





    //    break;



    case 36:
        /* Problema 6. Escriba un programa que encuentre el valor aproximado del número de euler en base a la siguiente suma innita:
            e = 1/0! + 1/1! + 1/2! + 1/3! + 1/4! + 1/5! + ...

            El usuario debe ingresar el número de elementos usados en la aproximación.
            Ej: si se ingresa 3 e = 1/0! + 1/1! + 1/2! = 2,5

            Nota: el formato de salida debe ser: e es aproximadamente: 2.5
        */





    //    break;




    case 37:
        /* Problema 7. En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con 1 y 1. Ej: 1, 1, 2, 3, 5, 8, ....
            Escriba un programa que reciba un número n y halle la suma de todos los números pares en la serie de Fibonacci menores a n.
            Ej: si se ingresa 10, sería la suma de 2+8 =10
            Nota: el formato de salida debe ser: El resultado de la suma es: 10
        */





    //    break;



    case 38:
        /* Problema 8. Escriba un programa que reciba 3 números a, b, c, y calcule la suma de todos los múltiplos de a y b que sean menores a c. Tenga en
         * cuenta no sumar 2 veces los múltiplos comunes.
            Ej: para a=3, b=5 y c=10. Se sumarían 3+6+9+5=23
            Para a=5, b=7 y c=36. Se sumarían 5+10+15+20+25+30+35+7+14+21+28 = 210.
            Nota: el formato de salida debe ser:
            m11 + m12 + m13 + . . . + m21 + m22 + m23. . . = sumatoria.
            m11 representa el primer múltiplo de a y así sucesivamente. m21 representa el primer múltiplo de b y así sucesivamente.
        */





    //    break;



    case 39:
        /* Problema 9. Escriba un programa que pida un número entero N e imprima el resultado de la suma de todos sus dígitos elevados a sí mismos.
            Ej: si se ingresa 1223 el resultado sería 1**1 + 2**2 + 2**2 + 3**3 = 36
            Nota: la salida del programa debe ser: El resultado de la suma es: 36.
        */





    //    break;



    case 40:
        /* Problema 10. Escriba un programa que reciba un número n e imprima el enésimo número primo.
            Ej: Si recibe 4 el programa debe imprimir 7.
            Nota: la salida del programa debe ser: El primo numero 4 es: 7.
        */





    //    break;



    case 41:
        /* Problema 11. Escriba un programa que reciba un número y calcule el mínimo común múltiplo de todos los números enteros entre 1 y el número
         * ingresado.
            Ej: Si se recibe 4 el programa debe imprimir 12.
            Nota: la salida del programa debe ser: El minimo comun multiplo es: 12.
        */





    //    break;



    case 42:
        /* Problema 12. Escriba un programa que calcula el máximo factor primo de un número.
            Ej: Si se recibe 33 el programa debe imprimir 11.
            Nota: la salida del programa debe ser: El mayor factor primo de 33 es: 11.
        */





    //    break;



    case 43:
        /* Problema 13. Escriba un programa que reciba un número y calcule la suma de todos los primos menores que el número ingresado.
            Ej: Si se recibe 10 el programa debe imprimir 17.
            Nota: la salida del programa debe ser: El resultado de la suma es: 17.
        */





    //    break;



    case 44:
        /* Problema 14. Un número palíndromo es igual de derecha a izquierda y de izquierda a derecha,
            Ej: 969. escriba un programa que calcule el número palíndromo más grande que se puede obtener como una multiplicación de números de 3 dígitos.
            Ej: una de las posibles respuestas es: 143*777=111111.
            Nota: la salida del programa debe ser: 143*777=111111
        */





    //    break;



    case 45:
        /* Problema 15. Empezando con el número 1 y moviéndose hacia la izquierda y en sentido horario se genera una espiral de números como la siguiente:
            21 22 23 24 25
            20 7  8  9  10
            19 6  1  2  11
            18 5  4  3  12
            17 16 15 14 13
            En el caso de esta espiral de 5x5, la suma de los números en la diagonal es 101.
            Escriba un programa que reciba un número impar n y calcule la suma de los números en la diagonal de una espiral de nxn.
            Nota: la salida del programa debe ser:
            En una espiral de 5x5, la suma es: 101.
            Otra nota: se le dará una bonicación si imprime la espiral.
        */





    //    break;



    case 46:
        /* Problema 16. La serie de Collatz se conforma con la siguiente regla: sea n un elemento de la serie, si n es par, el siguiente elemento es n/2,
         * y si n es impar, el siguiente elemento es 3n+1. Escriba un programa que reciba un número k y calcule cual es el elemento inicial j (semilla),
         * menor que k, que produce la serie más larga y diga cuantos términos m tiene la serie.
            Tip: la serie termina al llegar a un elemento cuyo valor sea 1.
            Ej: para la semilla 13: 13, 40, 20, 10, 5, 16, 8, 4, 2, 1
            Nota: la salida del programa debe ser:
            La serie mas larga es con la semilla: j, teniendo m terminos.
            Otra nota: se le dará una bonicación si imprime la serie.
        */





    //    break;


    case 47:
        /* Problema 17. La secuencia de números triangulares se forma al sumar su posición en el arreglo con el valor del número anterior: 1, 1+2=3,
         * 3+3=6, 6+4=10, 10+5=15, 15+6=21, 21+7=28...
            Si listamos los números triangulares y sus divisores tenemos:
            1: 1
            3: 1,3
            6: 1,2,3,6
            10: 1,2,5,10
            15: 1,3,5,15
            21: 1,3,7,21
            28: 1,2,4,7,14,28
            Se observa que 28 es el primer número triangular que tiene más de 5 divisores. Escriba un programa que reciba un número k y calcule cual es
            el primer número triangular que tiene más de k divisores.
            Tip: el enésimo número triangular se puede representar como n*(n+1)/2.


            Nota: la salida del programa debe ser:
            El numero es: 28 que tiene 6 divisores.
        */





        break;

}       //corchete del switch



        cout<<"Pon s si quieres hacer otro ejercicio: ";
        cin>>repetir;

        if (repetir!='s')
            k=0;


}        //corchete de do while
    while(k==1);


    return 0;
}
