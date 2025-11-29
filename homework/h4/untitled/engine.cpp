#include "engine.h"

int Engine::getHorsepower() const
{
    return horsepower;
}

void Engine::setHorsepower(int hp){
    horsepower = hp;
}

double Engine::getDisplacement() const
{
    return displacement;
}

void Engine::setDisplacement(const double &disp)
{
    displacement = disp;
}

Engine::Engine(){
    horsepower = 0;
    displacement = 0.0;
}

Engine::Engine(int hp, double disp)
{
    horsepower = hp;
    displacement = disp;
}
