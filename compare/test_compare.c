#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "compare.h"

int _compare_contact(struct contact c1,struct contact c2)
{                                                              
	int ret;
	int date1,date2;

	if ((ret=strcmp(c1.nom,c2.nom))==0) {
		if ((ret=strcmp(c1.prenom,c2.prenom))==0) {
			date1 = c1.naissance.annee*10000+c1.naissance.mois*100+c1.naissance.jour;
			date2 = c2.naissance.annee*10000+c2.naissance.mois*100+c2.naissance.jour;
			if (date1<date2) ret=1;
			else if (date1>date2) ret=-1;
			else ret=0;
		}
	}
	return ret;
}

int main(void) {
	int i;
    int ok=1;
	
	struct contact liste[5] = {
								{"Dupond","Jean","","","",0,{12,12,2012}},
								{"Dupond","Jean","","","",0,{12,12,2012}},
								{"Dupond","Jean","","","",0,{15,8,1975}},
								{"Dupond","Albert","","","",0,{12,12,2012}},
								{"Durand","Jean","","","",0,{12,12,2012}}
							};
	
    for (i=0;i<5;i++) {		
		if (_compare_contact(liste[i],liste[i+1]) == compare_contact(liste[i],liste[i+1])) {
            ok = ok && 1;
        }
        else {
            ok = ok && 0;
            printf("TECHIO> message --channel \"TEST ERREUR\" 'Error function fail test %d.'\n",i);
        }
    }
        
    if(ok)
        printf("TECHIO> success true\n");
    else  
		printf("TECHIO> success false\n");

	return 0;
}
