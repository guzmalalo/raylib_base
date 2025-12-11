#include "raylib.h"

#define WIDTH 800
#define HEIGHT 600

int main(void) {
    // Initialisation de la fenêtre avec un titre
    InitWindow(WIDTH, HEIGHT, "ECE");

    // Initialisation de ressources
    Image logoEce = LoadImage("../ressources/ece-logo.png");
    ImageResize(&logoEce, logoEce.width / 2, logoEce.height / 2);
    Texture2D textureEce = LoadTextureFromImage(logoEce);

    // Fréquence d'affichage
    SetTargetFPS(60);

    // Boucle principale
    // Le jeu tourne tant qu'on n'a pas cliqué sur le bouton Fermer
    // ou sur la touche échap
    while (!WindowShouldClose()) {
        // Mise à jour de la logique du jeu
        //----------------------------------------------------------------------------------
        // A faire !
        //----------------------------------------------------------------------------------

        // Dessin
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawTexture(textureEce, 0, 0, RAYWHITE);
        DrawText("Bonjour les ING 1!", 200, 400, 40, LIGHTGRAY);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // Libération de ressources
    //--------------------------------------------------------------------------------------
    UnloadImage(logoEce);
    UnloadTexture(textureEce);
    CloseWindow();
    //--------------------------------------------------------------------------------------

    return 0;
}
