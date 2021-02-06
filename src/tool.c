/*
** EPITECH PROJECT, 2021
** Workshop
** File description:
** tool
*/

#include "tek.h"

static const char *STUDENT_SENTENCES[] = {
    "Ça compile bien sur mon pc",
    "Quoi ? Fallait compiler avec les flags ?",
    "C'est quoi valgrind ?",
    "J'ai oublié de m'inscrire au bootstrap",
    "J'ai un problème avec mon pc",
    "J'arrive pas à me connecter au wifi, mais mon mot de passe est bon ... Ah non",
    "Y a que moi qui push parce qu'on s'envoie le code par mail",
    "On a fait du \"peer-programming\"",
    "Ah oui, je savais pas parce que j'ai pas lu mes mails",
    "Tu peux me passer une mouli stp ? je crois ya eu un bug",
    "C'est quand la prochaine mouli ?",
    "Non, mais je push que le vendredi soir, quand j'ai tout codé",
    "C'est quand la pause ?",
    "C'est quoi la norme ?",
    "C'est un Astek qui m'a dit que ...",
    "C'est en visio ou en présentiel ? Ah, c'est écrit sur l'intra désolé",
    "J'ai entendu dire que les absences ça joue sur le GPA. Qui t'a dit ça ? Un astek ou un APE ? Non non un pote",
    "Pourquoi je segfault ?",
    "Je peux savoir ce que test la mouli ?",
    "Je comprend pas la mouli",
    "Je crois que la mouli est cassée",
    "Je veux arrêter Epitech, quelle est la procédure ?",
    "Je crois Epitech, c'est pas pour moi, je vais à Epita",
    "J'ai fait le projet le week-end du rendu",
    "Y'aura un deuxieme BTTF ?",
    "J'ai un bug que j'arrive pas à résoudre, c'est urgent",
    "J'ai une question ?",
};

const char *get_sentence(size_t index)
{
    index %= ARRAY_SIZE(STUDENT_SENTENCES);
    return (STUDENT_SENTENCES[index]);
}
