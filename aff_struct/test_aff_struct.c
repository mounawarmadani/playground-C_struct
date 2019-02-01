#include <stdio.h>
#include <stdlib.h>
#include "aff_struct.h"

int main() {
  struct contact personne;

  scanf("%s",personne.nom);
  scanf("%s",personne.prenom);
  scanf("%s",personne.adresse);
  scanf("%s",personne.numero);
  scanf("%s",personne.localite);
  scanf("%d",&(personne.CP));
  scanf("%d/%d/%d",&(personne.naissance.jour),&(personne.naissance.mois),&(personne.naissance.annee));
  
  affiche_contact(personne);

  return 0;
}
