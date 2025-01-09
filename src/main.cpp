#define WITH_SDL2_STATIC 1

/*
 * We should define PI ourselves in adagio but for now...
 * this helps with PI on windows lol
*/
#define _USE_MATH_DEFINES

#include <adagio/adagio.hpp>
#include <adagio/backends/raylib.hpp>
#include <adagio/backends/soloud.hpp>
#include "MuffinsGame.h"
#include "states/TitleState.h"

#include <stdlib.h>
#include <ctime>

int main() {
    srand (static_cast <unsigned> (time(0)));
    SoLoud::Soloud soloud;
    RaylibGraphicsDevice graphicsDevice;
    RaylibGamepadHandler gamepadHandler;
    RaylibKeyboardHandler keyboardHandler;
    RaylibMouseHandler mouseHandler;
    Adagio::SpriteBatch spriteBatch(&graphicsDevice);
    SoloudAudioDevice audioDevice{soloud};
    Muffins::MuffinsGame game(spriteBatch);
    game.audio.setAudioDevice(&audioDevice);
    game.input.addHandler(&gamepadHandler);
    game.input.addHandler(&keyboardHandler);
    game.input.addHandler(&mouseHandler);
    Muffins::TitleState state;
    Adagio::Runner runner(&game, dynamic_cast<Adagio::GameState *>(&state));
    runner.run();
    soloud.deinit();
    return EXIT_SUCCESS;
}
