#include "Director.h"

Team* Director::buildTeam(string name) {
    TeamBuilder builder;
    return builder.build(name);
}