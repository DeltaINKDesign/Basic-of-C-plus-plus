#include <cstdlib>
#include <cstdio>
#include <ctime>

int main()
{
    srand( time( NULL ) ); 
	// Zazwyczaj jako argument funkcji srand() podaje si� funkcj� time(0), kt�ra zwraca ilo�� czasu, kt�ra min�a od 1 stycznia 1970 roku, w sekundach.
    
    //Funkcja rand() zwraca kolejn� pseudolosow� liczb� ca�kowit� z przedzia�u <0, RAND_MAX>, gdzie RAND_MAX ma warto�� co najmniej 32767. 
    
    
    for( int i = 0; i <= 10; i++ )
         printf( "Wylosowano %d\n", rand()%100);
    
}
