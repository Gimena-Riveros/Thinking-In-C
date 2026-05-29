// Incluimos libreria stdio.h para acceder a funciones pre definidas.
#include<stdio.h>
#ifdef _WIN32
    #include<windows.h>
    #define SLEEP_MS(ms) Sleep(ms)
#else
    #include <unistd.h>
    #define SLEEP_MS(ms) usleep((ms)*1000)
#endif // _WIN32

// funcion principal MAIN, todo inicia aqui.
int main(){
// funcion printf(de la libreria stdio.h) para mostrar un mensaje por pantalla.
printf("Hello Coders ! . . .\n");
// funcion que hace una pausa antes de seguir su ejecucion.
SLEEP_MS(1500); /* delay 1.5 seconds*/
printf("See you later B) ");
return(0);
}
