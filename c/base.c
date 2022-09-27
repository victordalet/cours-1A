/*27-09*/	
	// instruction -> ordre simple
	// programme -> ensemble ordonnée d'instruction 
	// language de programation -> format lisse d'une présentation des instrction

	// famille de languages : -machine (processeur); -assembleur ; -évolués;
	// traduction évolué to machine  -> compilateur (traduit + enregistrer (en exécutable)) / interpréteur (traduit + exécuté)

	// Concépteur : Dennis Ritchie & Brian Kernighan
	// versions : 70-72 ; C K&R (78) -> standard ; C89/90 -> norme ; C99 -> performance ; C11 -> multithread

	// fonctionnement : fichier source (.c) -> compilation -> fichier objet (.obj) -> éditeur de liens [linker] -> fichier programme (.exe)

	// ereur :  compilation -> sytaxe ; linker -> conflit / problème de versions / manque de fichiers ; d'éxécution -> mauvais résultat

	// compilateurs : Visual C++ ; gcc ; clang (apple) ; Intel C++
	// IDE : Clion ; Xcode (mac) ; Eclipse (IBM) ; NetBeans (ORACLE) ; Codeblocks

	// bilblio base : stdio.h -> printf() ; scanf()  / stdlib.h -> rand() / time.h -> time() / math-> sin()


	/*exemple de programme d'addition*/
	#include <stdio.h>

	int add(int val1 , int val2) {
	    return val1 + val2;
	}


	int main(int argc , char **argv) {
	    int val1 , val2 , result ;
	    printf("Type the first value :");
	    scanf("%d",&val1);
	    printf("Type the second value :");
	    scanf("%d",&val2);
	    result = add(val1,val2);
	    printf(" Result : %d ",result);
	    return 0;
	}

	