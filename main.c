#include <stdio.h>
#include <stdbool.h>
#define INCREMENTO 0.20

typedef enum {LUN, MAR, MER, GIO, VEN, SAB, DOM} GiorniSettimana;

typedef struct {
    int giorno;
    int ore;
    float pagaOraria;
    int codiceDipendente;
    _Bool straordinario;
} Pagamento;

int main() {

    Pagamento lavoratore = {2, 30, 10.00, 7612, true};
    float importoStipendio = lavoratore.pagaOraria * lavoratore.ore;

    importoStipendio = lavoratore.straordinario > false ? importoStipendio + (importoStipendio * INCREMENTO) : importoStipendio;
    printf("\nIl giorno %d della settimana, il dipendente con il codice %d e\' stato pagato %.2f euro avendo lavorato %d ore."
            , lavoratore.giorno, lavoratore.codiceDipendente, importoStipendio, lavoratore.ore);

    return 0;
}