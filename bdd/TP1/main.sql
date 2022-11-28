/* ******************************************************************* */
/*                                                                     */
/* OBJECTIVE : TP1                     #####      ###    ###    #      */
/* AUTHORS :  VICTOR DALET             #         #      #       #      */
/* CREATED : 28 11 2022                ####      #      #  ##   #      */
/* UPDATE  : 28 11 2022                #         #      #   #   #      */
/*                                     ####    ###      #####   #.fr   */
/* ******************************************************************* */



/* 1 */

CREATE TABLE PERSONNE (id_personne INTEGER PRIMARY KEY ,num_secu INTEGER,nom VARCHAR(35), prenom VARCHAR(35), date INTEGER);
CREATE TABLE COURS (id_cours INTEGER PRIMARY KEY ,id_enseignant INTEGER REFERENCES PERSONNE (id_personne),sigle INTEGER, intitule VARCHAR(35), credit VARCHAR(35), description VARCHAR(50));
CREATE TABLE SUIVRE(note INTEGER, id_etudiant INTEGER REFERENCES PERSONNE(i), id_cours INTEGER REFERENCES PERSONNE(i));
ALTER TABLE SUIVRE ADD PRIMARY KEY (id_etudiant, id_cours);
/* 2 */


CREATE TABLE CLIENT (codeclt INTEGER PRIMARY KEY , nomclt VARCHAR(15), prenomclt VARCHAR(15), adresse VARCHAR(40), cp INTEGER, ville VARCHAR(40));
CREATE TABLE PRODUIT (reference INTEGER PRIMARY KEY , designation VARCHAR(40), prix INTEGER);
CREATE TABLE TECHNICIEN (codetec INTEGER PRIMARY KEY , nomtec VARCHAR(100), prenomtec VARCHAR(20), tauxhoraire INTEGER);
CREATE TABLE INTERVENTION (numero INTEGER PRIMARY KEY , date INTEGER, raison VARCHAR(200), codeclt INTEGER REFERENCES CLIENT (codeclt), reference INTEGER REFERENCES PRODUIT (reference), codetec INTEGER REFERENCES TECHNICIEN (codetec));

/* 3 */

CREATE TABLE BOISSON (
	id INTEGER PRIMARY KEY,
	nom VARCHAR(60),
	marque VARCHAR(60),
	gazeuse BOOLEAN
	);

CREATE TABLE SANDWICH(
	id INTEGER PRIMARY KEY,
	nom VARCHAR(60),
	crudites BOOLEAN,
	viande VARCHAR(20),
	vegetarien BOOLEAN,
	prix INTEGER
);

ALTER TABLE BOISSON ADD a_boire VARCHAR(7);

ALTER TABLE BOISSON DROP  primary key ;
ALTER TABLE BOISSON ADD PRIMARY KEY (nom, marque);

ALTER TABLE BOISSON DROP id;

ALTER TABLE BOISSON MODIFY prix FLOAT;

ALTER TABLE BOISSON CHANGE nom designation VARCHAR(60);



