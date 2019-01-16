#include <cstdlib>
#include <cstdio>
#include <ctime>

int main()
{
    srand( time( NULL ) ); 
	// Zazwyczaj jako argument funkcji srand() podaje siê funkcjê time(0), która zwraca iloœæ czasu, która minê³a od 1 stycznia 1970 roku, w sekundach.
    
    //Funkcja rand() zwraca kolejn¹ pseudolosow¹ liczbê ca³kowit¹ z przedzia³u <0, RAND_MAX>, gdzie RAND_MAX ma wartoœæ co najmniej 32767. 
    
    
    for( int i = 0; i <= 10; i++ )
         printf( "Wylosowano %d\n", rand()%100);
    
}
