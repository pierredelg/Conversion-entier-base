#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int b2d(){
	
	char c;
	
	int i = 0;
	
	char texte [1024];
	
	printf("\nEntrez un nombre binaire \n");
	
	c= getchar();

	while(c != EOF && i != 1024){

		texte[i]=c;

		c = getchar();
	
		i++;
	}

	texte[i]='\0';

	int j = 0;
	
	int resultat = 0;

	int puissance = 0;

	for(j =(i-1) ;j >= 0 ; j--){

		if(texte[j] != 48 && texte[j] != 49){

			return -1;
		}
		else{
			if(texte[j] == 49){
			
				resultat = resultat + (1 * pow(2,puissance));
			}
			puissance ++;
		}
	}

	return resultat;
}

int any2d(int base){

	if (base != 2 && base != 8 && base != 10 && base != 16 ){

		printf("\nCette base n'est pas prise en compte\n");

		return -1;
	}
	if(base == 2){

		b2d();
	}
	if(base == 8){

		char c;
	
		int i = 0;
	
		char texte [1024];
	
		printf("\nEntrez un nombre octal \n");
	
		c= getchar();

		while(c != EOF && i != 1024){

			texte[i]=c;

			c = getchar();
	
			i++;
		}

		texte[i]='\0';

		int j = 0;
	
		int resultat = 0;

		int puissance = 0;

		for(j =(i-1) ;j >= 0 ; j--){

			if(texte[j] < 48 || texte[j] > 55 ){

				return -1;
			}
			else{
				if(texte[j] != 48){
			
					resultat = resultat + ((texte[j] - 48) * pow(8,puissance));
				}
				puissance ++;
			}
		}

		return resultat;
	}

	if(base == 10){

		char c1;
	
		int i1 = 0;
	
		char texte1 [1024];
	
		printf("\nEntrez un nombre decimal \n");
	
		c1= getchar();

		while(c1 != EOF && i1 != 1024){

			texte1[i1] = c1;

			c1 = getchar();
	
			i1++;
		}

		texte1[i1]='\0';

		int j1 = 0;
	
		int resultat1 = 0;

		int puissance1 = 0;

		for(j1 =(i1-1) ;j1 >= 0 ; j1--){
					
			resultat1 = resultat1 +((texte1[j1] - 48)* pow(10,puissance1));

			puissance1++;
		
		}

		return resultat1;
		
	}
	if(base == 16){

		char c2;
	
		int i2 = 0;
	
		char texte2 [1024];
	
		printf("\nEntrez un nombre hexadecimal \n");
	
		c2= getchar();

		while(c2 != EOF && i2 != 1024){

			texte2[i2]=c2;

			c2 = getchar();
	
			i2++;
		}

		texte2[i2]='\0';

		int j2 = 0;
	
		int resultat2 = 0;

		int puissance2 = 0;

		for(j2 =(i2-1) ;j2 >= 0 ; j2--){

			if(texte2[j2] < 48 || texte2[j2] > 57 && texte2[j2] < 65 || texte2[j2] > 70 && texte2[j2] < 97 || texte2[j2] > 102 ){

				return -1;
			}
			else{
				if(texte2[j2] > 48 && texte2[j2] < 58){
			
					resultat2 = resultat2 + ((texte2[j2] - 48) * pow(16,puissance2));
				}
				if(texte2[j2] > 65 && texte2[j2] < 71){

					resultat2 = resultat2 + (((texte2[j2] - 65) + 10) * pow(16,puissance2));
				}
				if(texte2[j2] > 97 && texte2[j2] < 103){

					resultat2 = resultat2 + (((texte2[j2] - 97) + 10) * pow(16,puissance2));
				}
				puissance2 ++;
			}
		}

		return resultat2;

	}
}

int some2d(){

	char c;
	
	int i = 0;
	
	char texte [1024];
	
	printf("\nEntrez un nombre(base 8, 10 ou 16)\n");
	
	c= getchar();

	while(c != EOF && i != 1024){

		texte[i]=c;

		c = getchar();
	
		i++;
	}

	texte[i]='\0';

	if(texte[0] == 48 && texte[1] == 120){

		int j2 = 0;
	
		int resultat2 = 0;

		int puissance2 = 0;

		for(j2 =(i-1) ;j2 > 1 ; j2--){

			if(texte[j2] < 48 || texte[j2] > 57 && texte[j2] < 65 || texte[j2] > 70 && texte[j2] < 97 || texte[j2] > 102 ){

				return -1;
			}
			else{
				if(texte[j2] > 48 && texte[j2] < 58){
			
					resultat2 = resultat2 + ((texte[j2] - 48) * pow(16,puissance2));
				}
				if(texte[j2] > 65 && texte[j2] < 71){

					resultat2 = resultat2 + (((texte[j2] - 65) + 10) * pow(16,puissance2));
				}
				if(texte[j2] > 97 && texte[j2] < 103){

					resultat2 = resultat2 + (((texte[j2] - 97) + 10) * pow(16,puissance2));
				}
				puissance2 ++;
			}
		}

		return resultat2;

	}
	if(texte[0] == 47 || texte[0] == 48){

		int j = 0;
	
		int resultat = 0;

		int puissance = 0;

		for(j =(i-1) ;j > 0 ; j--){

			if(texte[j] < 48 || texte[j] > 55 ){

				return -1;
			}
			else{
				if(texte[j] != 48){
			
					resultat = resultat + ((texte[j] - 48) * pow(8,puissance));
				}
				puissance ++;
			}
		}

		return resultat;

	}
	else{

		int j1 = 0;
	
		int resultat1 = 0;

		int puissance1 = 0;

		for(j1 =(i-1) ;j1 >= 0 ; j1--){
					
			resultat1 = resultat1 +((texte[j1] - 48)* pow(10,puissance1));

			puissance1++;
		
		}
		return resultat1;
	}
}

void d2any(int entier, int base){

	if(base != 10 && base <= entier){

		int i = 0;
		
		while (entier / pow(base,i) > 1){
			
			i++;
		}
		if (entier < pow(base,i)){

			i--;
		}

		int reste = 0;

		int resultat = 0;

		while(i >= 0){

			reste = entier % (int) pow(base,i);

			resultat = (entier - reste) / (int) pow(base,i);

			entier = reste;

			i--;

			if (resultat == 10 && base == 16){
				printf("A");
			}
			else if (resultat == 11 && base == 16){
				printf("B");
			}
			else if (resultat == 12 && base == 16){
				printf("C");
			}
			else if (resultat == 13 && base == 16){
				printf("D");
			}
			else if (resultat == 14 && base == 16){
				printf("E");
			}
			else if (resultat == 15 && base == 16){
				printf("F");
			}
			else{
				printf("%d",resultat);
			}
		}
		printf("\n");
	}
	else{

		if (entier == 10 && base == 16){
			printf("\nA");
		}
		else if (entier == 11 && base == 16){
			printf("\nB");
		}
		else if (entier == 12 && base == 16){
			printf("\nC");
		}
		else if (entier == 13 && base == 16){
			printf("\nD");
		}
		else if (entier == 14 && base == 16){
			printf("\nE");
		}
		else if (entier == 15 && base == 16){
			printf("\nF");
		}
		else{
			printf("\n%d\n",entier);
		}
	}
}

int main (void){

	/*printf("\n%d\n",b2d());
	
	int base = 0;

	printf("Choix de la base :\n");

	scanf("%d",&base);

	int resultat = 0;

	resultat = any2d(base);

	printf("\nLe resultat est %d\n",resultat );

	resultat = some2d();

	printf("\nLe resultat est %d\n",resultat );*/

	printf("Choix de la base :\n");

	int base1;

	scanf("%d",&base1);

	printf("\nChoix de l'entier :\n");

	int entier;

	scanf("%d",&entier);
	
	printf("\nLe nombre %d en base %d s'écrit :\n",entier,base1);
	
	d2any(entier,base1);
}
