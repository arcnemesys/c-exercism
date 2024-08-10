#include "rna_transcription.h"
#include <string.h>
#include <stdlib.h>
char *to_rna(const char *dna) {
    char *rna = (char *)malloc(sizeof(char) * strlen(dna));
    for (size_t i = 0; i < strlen(dna); i++) {
        switch (dna[i]) {
            case 'G': 
                rna[i] = 'C';
                break;
            case 'C':
                rna[i] = 'G';
                break;
            case 'T':
                rna[i] = 'A';
                break;
            case 'A':
                rna[i] = 'U';
                break;
        }
    }
    return rna;
}
