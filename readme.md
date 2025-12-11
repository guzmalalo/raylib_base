# Projet Base Raylib (C / CMake)

Ce projet constitue une base minimale pour démarrer une application en `C` utilisant raylib.

## 🎮 Installation Raylib

La bibliothèque **raylib** est **téléchargée et compilée localement** grâce à CMake (`FetchContent`).  
Aucun pré-requis supplémentaire n’est nécessaire : tout est géré automatiquement lors de la 
premiere compilation.


## 🏷️ Changer le nom du projet

Dans `CMakeLists.txt`, la ligne suivante définit le nom du projet :

```cmake
project(project_name C)
```

Remplacez `project_name` par le nom de votre jeu ou de votre application.  
Cela changera automatiquement le nom de l’exécutable généré.

## 📚 Exemples

Raylib propose **des centaines d’exemples** pour gérér :

- l'audio,
- les entrées (clavier/souris/manette),
- les images,
- la physique,
- les interfaces graphiques (GUI),
- le rendu **3D**,
- et plus...

Consultez-les ici :  
👉 https://www.raylib.com/examples.html

C’est la meilleure méthode pour s’approprier rapidement la bibliothèque.



## 👩‍💻 Code de base

Le fichier `main.c` ouvre une fenêtre, affiche un logo et un message :

```c
#include "raylib.h"

#define WIDTH 800
#define HEIGHT 600

int main(void) {
    InitWindow(WIDTH, HEIGHT, "ECE");

    Image logoEce = LoadImage("../ressources/ece-logo.png");
    ImageResize(&logoEce, logoEce.width / 2, logoEce.height / 2);
    Texture2D textureEce = LoadTextureFromImage(logoEce);

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawTexture(textureEce, 0, 0, RAYWHITE);
        DrawText("Bonjour les ING 1!", 200, 400, 40, LIGHTGRAY);

        EndDrawing();
    }

    UnloadImage(logoEce);
    UnloadTexture(textureEce);
    CloseWindow();

    return 0;
}
```

À vous de compléter la partie “logique du jeu” !