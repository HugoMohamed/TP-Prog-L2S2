#ifndef _FILEMAIL_H_
#define _FILEMAIL_H_

#include "listemail.h"

typedef listem filem;

filem file_videm();

int est_file_videm(filem f);

filem enfilerm(filem f,elementm e);

elementm debut_filem(filem f);

filem defilerm(filem f);

int taille_filem(filem f);

#endif
