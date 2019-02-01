# Exercice 1

Les structures suivantes sont définies :

```c 
struct date {
	int jour;
	int mois;
	int annee;
};

struct contact {
	char nom[20];
	char prenom[20];
	char adresse[100];
	char numero[10];
	char localite[50];
	int CP;
	struct date naissance;
};
```

Il faut écrire la fonction `affiche_contact`. Celle-ci doit afficher la structure contact qui lui est passée en argument en respectant le format suivant :

```html
Dupond Jean
rue des allouettes 502
1000 Bruxelles
Date de naissance: 06/12/1945
```

@[Affiche contact]({"stubs": ["aff_struct.h"],"command": "sh /project/target/run.sh test_aff_struct","project": "aff_struct"})