#define tamTab 10        
 
    #define    tocado    'X'                        // Diferentes marcas a representar en los tableros.
    #define hundido    '#'
    #define agua     '~'
    #define fin     '*'
    #define vacio     ' '
 
    #define BARPEQ  2                        // Numero de barcos de cada tamaño. Maximo 9 en total.
    #define BARMED  2
    #define BARGRA  1
 
    #define LONGBARPEQ 2                    // La longitud de cada tamaño de barco.
    #define LONGBARMED 3
    #define LONGBARGRA 4
 
 
// Librerias:
    #include <stdio.h>
 
    #include <stdlib.h>                        // Librerías requeridas para el calculo de números aleatorios.
    #include <time.h>
 
    #include <string.h>
 
                                            // Librería propia que contiene todas las funciones necesarias para
					// que el jugador y la maquina coloquen...

    #include "libreria1.h"    // ...sus barcos en el tablero.
    #include "libreria2.h"    // ...sus bombas.
 
 
 
// Función principal:
main()
{
    //Se genera un conjunto de números aleatorios:
    srand((unsigned int)time(NULL));
 
 
    // Se crean dos tableros de tres dimensiones, en el primer nivel se guardan los barcos de cada jugador,
   // y en el segundo las bombas que tocaron barco o agua del contrario:
    char tabJug[tamTab][tamTab][2];
    char tabMaq[tamTab][tamTab][2];
 
 
    // Se inicializan las variables, algunas de ellas reciben el valor de las Constantes de la cabecera:
    int  barPeq = BARPEQ, longBarPeq = LONGBARPEQ;
    int  barMed = BARMED, longBarMed = LONGBARMED;
    int  barGra = BARGRA, longBarGra = LONGBARGRA;
    int  barcos = barPeq + barMed + barGra;
    int trozosBarco = (barPeq*longBarPeq)+(barMed*longBarMed)+(barGra*longBarGra);
    char tipoBar;
    int i;
 // Variable con valor generado aleatoriamente cuyos valores seran: 
 //0=jugador, 1=maquina. E indicaran de quien es el turno.
    int leTocaA = rand()%2; 

    // Se rellenan todos los componentes de las cuatro matrices con 'vacio':
    rellTablero( tabJug, tabMaq );
 
 
    // La Maquina coloca todos sus barcos:
    for( i=0; i < barcos; i++ )
    {
        // Se van eligiendo los barcos de mayor a menor medida:
        if( barGra != 0 )
        {
            tipoBar = 'g';
            impBarco( tabJug, tabMaq, longBarGra, i, 1 ); 
// El ultimo parámetro, el 1, indica que la introducción de barcos es por parte de la maquina y 
//por consiguiente que tablero deberá de usar.
            barGra--;
        }
        else if( barMed != 0 )
        {
            tipoBar = 'm';
            impBarco( tabJug, tabMaq, longBarMed, i, 1 );
            barMed--;
        }
        else if( barPeq != 0 )
        {
            tipoBar = 'p';
            impBarco( tabJug, tabMaq, longBarPeq, i, 1 );
            barPeq--;
        };
    };
 
 
    //Se resetean los barcos con los valores de las Constantes para que el jugador pueda colocar sus barcos ahora:
    barPeq = BARPEQ; barMed = BARMED; barGra = BARGRA;
 
 
    // El jugador introduce todos sus barcos:
    for( i=0; i < barcos; i++ )
    {
        // Se imprime el tablero:
        impTablero(tabJug);
 
        // Se solicita el barco a colocar:
        printf( "Dispone de %i barcos: %i pequeños, %i medianos y %i grandes.\n", 
barPeq+barMed+barGra, barPeq, barMed, barGra );
        printf( "Indique el barco que quiere colocar: p / m / g\n" );
        do
        {
            scanf( "%c", &tipoBar );
        } while( tipoBar != 'p' && tipoBar != 'm' && tipoBar != 'g' );
 
 
        // Si hay disponibles barcos de ese tamaño, se envían a la función que los imprime:
        if( tipoBar == 'p' && barPeq != 0 )
        {
            impBarco( tabJug, tabMaq, longBarPeq, i, 0); 
// El ultimo parámetro, el 0, indica que la introducción de barcos es por parte del jugador 
//y por consiguiente que tablero deberá de usar.
            barPeq--;
        }
        else if( tipoBar == 'm' && barMed != 0 )
        {
            impBarco( tabJug, tabMaq, longBarMed, i, 0);
            barMed--;
        }
        else if( tipoBar == 'g' && barGra != 0 )
        {
            impBarco( tabJug, tabMaq, longBarGra, i, 0);
            barGra--;
        }
        else
        {
            printf( "No dispone de mas barcos de ese tamanio, elija otro.\n" );
            i--; //Dado que hemos elegido un tamaño de barco que no estaba disponible, 
                 //para que no dejemos de introducir ninguno se resta 1 al bucle.
        };
    };
 
    system("clear");
 
    // Ahora hay que programar la guerra!
    // En el momento de que alguno de los jugadores tenga todos los barcos hunidos por completo se termina el juego:
    do
    {
        impBomba( tabJug, tabMaq, trozosBarco, &leTocaA );
    } while( cuenTrozHund(tabJug) != trozosBarco   &&   cuenTrozHund(tabMaq) != trozosBarco );
 
    printf( "\n\n" );
    impTabJudYTamBomJug( tabJug, tabMaq );
   
    // Quien tenga mas trozos hundidos pierde:
    if( cuenTrozHund(tabJug) < cuenTrozHund(tabMaq) )    printf( "\n   Ganaste!\n\n" );
    else                                                printf( "\n   Gano la maquina\n\n" );
 
};
