# Exercice 2

Les structures suivantes sont définies :

```c 
struct date {
	int jour;
	int mois;
	int annee;
}

struct contact {
	char nom[20];
	char prenom[20];
	char adresse[100];
	char numero[10];
	char localite[50];
	int CP;
	struct date naissance;
}
```

Il faut écrire la fonction `encode_contact`. Celle-ci doit permettre l'encodage d'une structure contact en vérifiant les données fournie par l'utilisateur.

Les données doivent respecter les conditions suivantes :
- Le nom doit uniquement être composé des caractères de A à Z et de a à z.
- Le prénom doit uniquement être composé des caractères de A à Z et de a à z.
- L'adresse ne possède aucune contrainte particulière.
- Le numéro ne peut être composé que de chiffre et des caractères de A à Z.
- Le code postal est une valeur numérique comprise entre 1000 et 9999.
- La localité doit uniquement être composé des caractères de A à Z et de a à z.
- La date de naissance doit être une date valide.

@[Encode contact]({"stubs": ["encode_struct.h"],"command": "sh /project/target/run.sh test_encode_struct","project": "encode_struct"})