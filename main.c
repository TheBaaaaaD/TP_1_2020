/******************************************************************************
Nom : 20200918_TP_Rev_C
Création : 18/09/20
Os : Windows 10
Compilateur : onlineGDB.com
Auteur : Thibault De Cort
Usgae :
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "tp20200918_1.h"
#include "tp20200918_2.h"

int main(int argc, char* argv[])
{
    signed int nb_c_displayed = printf("Hello wolrd!\n");//compte le nombre de caractere afficher
    signed int nb_c_inputted = EOF;//compte le nombre de caractere insérer
    unsigned char kb_in = 0;//pour stocker le caractere envoyer pas besoin de valeurs négatives ici et pour stocker sur 1 octet il faut un char
    signed int exit_code = -1;//Valeur de retour de fin

    printf("nb_c_displayed = %d\n\n", nb_c_displayed);
        nb_c_displayed = nb_c_displayed + printf("nb_c_displayed = %d\n\n", nb_c_displayed);//on oeut ajouter une valeur à l'aide d'un printf (nombre de caractere dans le printf)
    printf("nb_c_displayed = %d\n\n", nb_c_displayed);

    printf("nb_c_inputted = %d\n",nb_c_inputted);

    for (int i = 0; i < argc; i++) {
        printf("%s\n",argv[i]);
        nb_c_displayed++;
    }

    printf("nb_c_displayed = %d\n",nb_c_displayed);
    
    nb_c_inputted = scanf("%c",&kb_in);
        
        if(nb_c_inputted>0)//si le scanf est supérieur à 0 tout va bien
        {
            printf("%s\n",PAS_ERREUR);
            printf("%s\n",CA_MARCHE);
            exit_code = 1;
        }
        else if(nb_c_inputted == 0)//Si on a un probleme sur le nombre d'entrer (moins de valeur envoyer que demander)
        {
            ERREUR;
            printf("%s\n",CA_MARCHE_PAS);
        }
        else if(nb_c_inputted == -1)//Si on a l'erreur EOF
        {
            printf("%s\n",ERREUR);
        }
    
    printf("nb_c_inputted = %d\n",nb_c_inputted);
    
        struct tpInOut sommesIO;
        
        sommesIO.sum_In = 5;
        sommesIO.sum_Out = 7;
        
        printf("%d\n",sommesIO.sum_In);
        printf("%d\n",sommesIO.sum_In);
    
    return exit_code;
    
}
