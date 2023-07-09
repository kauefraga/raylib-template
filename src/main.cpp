#include <raylib.h>

// You should check out the Raylib cheatsheet: https://www.raylib.com/cheatsheet/cheatsheet.html
// Also see some examples: https://www.raylib.com/examples.html

const int WIDTH = 600;
const int HEIGHT = 600;

int main() {
  // If you want to disable the raylib debug/logs window, use
  // SetTraceLogLevel(LOG_ERROR);

  // Initialization - Starts the window and opengl context
  InitWindow(WIDTH, HEIGHT, "Raylib Template");

  // Starts audio device and context
  InitAudioDevice(); 

  Music music = LoadMusicStream("assets/elevator.mp3");

  PlayMusicStream(music);

  bool pause = false;

  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    /* --- UPDATE --- */
    // Here you will put your logic code

    UpdateMusicStream(music); // Update music buffer with new stream data

    // Pause music feature
    if (IsKeyPressed(KEY_P)) {
      pause = !pause;

      if (pause) PauseMusicStream(music);
      else ResumeMusicStream(music);
    }

    /* --- DRAW --- */
    // Here you will put your render code
    BeginDrawing();

    ClearBackground(RAYWHITE); // Clear the screen before start drawing anything

    DrawText("Good development!", WIDTH / 2 - 100, HEIGHT / 2 - 10, 30, BLACK);
    DrawText("Press p to pause/resume the music.", WIDTH / 2 - 270, HEIGHT / 2 + 10, 30, BLACK);

    EndDrawing();
  }

  // Close the window and unload opengl context
  CloseWindow();

  return 0;
}
