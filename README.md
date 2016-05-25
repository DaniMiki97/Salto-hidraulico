# Salto-hidraulico
Fisica Computacional
 Salto::Discharge(F v1, F y1)
{

    int x;
    Q = v1*y1;
    return Q;
}

F Salto::Energy_Specific_Before(F v1, F y1)
{
    E1 = y1 + (pow(v1,2)/2*G);
    return E1;
}

F Salto::Energy_Specific_After(F, F)
{
    E2 =
}
