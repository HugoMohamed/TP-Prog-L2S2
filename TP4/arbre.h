#ifndef ARBRE_H
#define ARBRE_H

typedef struct noeud
{
    char objet;
    struct noeud *gauche;
    struct noeud *droit;
}struct_noeud;

typedef struct_noeud *arbre;

// renvoie un pointeur null
arbre creer_arbre_vide();

// 1 pour vide, 0 sinon
int est_vide(arbre a);

arbre creer_noeud(char c);

arbre creer_arbre(char c,arbre filsgauche,arbre filsdroit);

arbre inserer_fils_gauche(arbre a,arbre filsgauche);

arbre inserer_fils_droit(arbre a,arbre filsdroit);

void affiche_arbre(arbre a);

void affiche_arbre_graphique(arbre a);

int est_op(char c);

arbre creer_arbre_expression(char * expression, int * position);

int eval(arbre a);

#endif
