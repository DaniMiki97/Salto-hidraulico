//funciones

#ifndef SALTO_H

#define SALTO_H

#include <cmath>
#include "tipos.h"

class Salto
{
public:
    F V1,V2,Y1,Y2,Q,F1,F2,E1,E2,Ta;
    Salto(F,F,F);
    F Discharge (F, F);
    F Energy_Specific_Before(F,F);
    F Energy_Specific_After(F,F);
    F Critical_Depth(F);
    F Critical_Velocity(F); // la entrada es el Critical_depth
    F Number_Froude(F,F); // entradas: critical_depth and critical_velocity


    //virtual ~Salto();
};

#endif // SALTO_H
