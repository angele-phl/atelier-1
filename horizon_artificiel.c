#include <stdio.h>
#include <string.h> 

int main() {
    int vitesse = 125;     // Vitesse (kts)
    int altitude = 9800;   // Altitude (ft)
    int cap = 45;          // Cap (degrés)
    // (Nord, Sud, Est, Ouest)
    char cardinal[2]; 
    int cap_gauche = (cap - 15 + 360) % 360; 
    int cap_droite = (cap + 15) % 360;       
    if (cap >= 315 || cap < 45) {
        strcpy(cardinal, "N"); 
    } else if (cap >= 45 && cap < 135) {
        strcpy(cardinal, "E");
    } else if (cap >= 135 && cap < 225) {
        strcpy(cardinal, "S");
    } else 
    {
        strcpy(cardinal, "W");
    }
    printf("===========================================================================\n");
    printf("|                         INDICATEUR DIRECTIONNEL                         |\n");
    printf("|                                                                         |\n");
    printf("|                     ... %03d ... [ %s ] ... %03d ...                       |\n", cap_gauche, cardinal, cap_droite);
    printf("|                                  %03d                                    |\n", cap);
    printf("===========================================================================\n");
    printf("|   VITESSE (kts) |           HORIZON ARTIFICIEL          | ALTITUDE (ft) |\n");
    printf("|                 |                                       |               |\n");
    printf("|                 |                 + 20                  |               |\n");
    printf("|      %03d        |             |----------|              |     %05d     |\n", vitesse+20, altitude+200);
    printf("|                 |                 + 10                  |               |\n");
    printf("|      %03d        |               |------|                |     %05d     |\n", vitesse+10, altitude+100);
    printf("|                 |                                       |               |\n");
    printf("|      %03d        |                                       |     %05d     |\n", vitesse+5, altitude+50);
    printf("|    > %03d <      |    -----------\\     /-----------      |   > %05d <   |\n", vitesse, altitude);
    printf("|      %03d        |                \\___/                  |     %05d     |\n", vitesse-5, altitude-50);
    printf("|                 |                                       |               |\n");
    printf("|      %03d        |               |------|                |     %05d     |\n", vitesse-10, altitude-100);
    printf("|                 |                 - 10                  |               |\n");
    printf("|      %03d        |             |----------|              |     %05d     |\n", vitesse-20, altitude-200);
    printf("|                 |                 - 20                  |               |\n");
    printf("|                 |                                       |               |\n");
    printf("===========================================================================\n");
    return 0;
}