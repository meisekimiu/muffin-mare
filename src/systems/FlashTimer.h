#ifndef GL_ADAGIO_FLASHTIMER_H
#define GL_ADAGIO_FLASHTIMER_H

#include "adagio/state.hpp"
#include "adagio/components/sprite.hpp"
#include "entt/entt.hpp"

void FlashTimer(entt::registry &registry, Adagio::GameServices &services,
                Adagio::StateMachine *state);

#endif // GL_ADAGIO_FLASHTIMER_H
