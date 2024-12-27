#ifndef GL_ADAGIO_UPDATEPARTICLES_H
#define GL_ADAGIO_UPDATEPARTICLES_H

#include "adagio/state.hpp"
#include "entt/entt.hpp"

void UpdateParticles(entt::registry &registry, Adagio::GameServices &services,
                Adagio::StateMachine *state);

#endif // GL_ADAGIO_UPDATEPARTICLES_H
