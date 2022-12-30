#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* declaration des variables :
	    nbr_o = nombre qui affiche par l'utilisateur
	    nbr_s = nombre de resulta
	    bo = la base d'entree 
	    bs = la base du sortie
		dic = c'est le nombre en dicimale
		a et c = c'est des valeur  */
	int bo , bs , dic , a , c ;
	long nbr_o , nbr_s ; 
	/* En la deuxieme etap , on va faire l'affctation de la base d'entree et du sortie et le nombre en base d'ontree */
	printf (" Veulliez donner la base d'ontree : ");
	scanf ("  %d ", &bo );
	printf (" Veulliez donner la valeure de nombre en %d : ", bo );
	scanf (" %ld ", & nbr_o );
	printf (" Veulliez donner la base du sortie : ");
	scanf ("  %d ", &bs );
	/* on va faire les opperations pour transformer le nombre vers la base decimal */
	dic = 0 ; 
	a = 1 ;
	while ( nbr_o != 0 ){
		c = nbr_o % 10 ;
		dic = dic + c * a ;
		nbr_o = nbr_o / 10 ;
		a = a * bo ;
	}
	printf (" le nombre en dicimal est %d \n ", dic );
	/* on va faire les opperationts pour transoformer le nombre vers la base de sortie */
        i = 0 ;
	nbr_s = 0 ;
	while ( dic != 0 ){
    	c = dic % bs ;
		nbr_s = nbr_s + c * a ;
		dic = dic / bs ;
		a = a * 10 ;
	}
	printf (" le nombre en la base %d est : %ld " , bs , nbr_s );
	return 0 ;
}
