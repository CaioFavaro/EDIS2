//Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume (v = 4/3
//* PI * R^3).

#ifndef CVOLUME_H
#define CVOLUME_H

class cVolume {
public:
    cVolume();
    cVolume(const cVolume& orig);
    virtual ~cVolume();
    void lerDados();
    float conta(float raio);
private:

};

#endif /* CVOLUME_H */

