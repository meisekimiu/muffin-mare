#ifndef GL_ADAGIO_FOODEVENTS_H
#define GL_ADAGIO_FOODEVENTS_H

#include "adagio/state.hpp"
#include "adagio/components/base.hpp"
#include "adagio/components/sprite.hpp"
#include "entt/entt.hpp"

void FoodEvents(entt::registry &registry, Adagio::GameServices &services,
                Adagio::StateMachine *state);

#endif // GL_ADAGIO_FOODEVENTS_H
