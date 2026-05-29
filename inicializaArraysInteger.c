/**
    @brief Inicializa vector de Enteros
    @param longitud del vector final
    @param puntero al array Int
    @return void
*/
void inicializaArraysInteger(int, int *);


void inicializaArraysInteger(int LONG, int *array10)
{
    for(int i=0; i<LONG; i++)
    {
        array10[i]=0;
    }
}