#pragma once
#include <iostream>
#include "Video.hpp"

#include <string>

using namespace std;


class Pelicula:public Video{
    public:
    ~Pelicula();
    Pelicula(int id, string titulo, int duracion, string genero, vector<int> calificaciones, double peso);
    void mostrarInformacion() override;
};

