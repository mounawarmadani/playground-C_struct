#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aff_struct.h"

int main() {
  struct contact personne;

  fflush(stdin);
  scanf("%s",personne.nom);
  
  fflush(stdin);
  scanf("%s",personne.prenom);
  
  fflush(stdin);
  fgets(personne.adresse,50,stdin);
  personne.adresse[strlen(personne.adresse)-1]='\0';
  
  fflush(stdin);
  scanf("%s",personne.numero); 
  
  fflush(stdin);
  scanf("%s",personne.localite);
  
  fflush(stdin);
  scanf("%d",&(personne.CP));
    
  scanf("%d",&(personne.naissance.jour));
  scanf("%d",&(personne.naissance.mois));
  scanf("%d",&(personne.naissance.annee));
  //scanf("%d/%d/%d",&(personne.naissance.jour),&(personne.naissance.mois),&(personne.naissance.annee));
  
  affiche_contact(personne);

  printf("\n");
  return 0;
}
