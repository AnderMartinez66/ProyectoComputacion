#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int opcion=0;
    int caminoEstrecho=0;
    int vida=100;
    int opcion2=0;
    int opcion3=0;
    int opcion4=0;
    int opcion5=0;
    
    cout << "Eres un explorador buscando un templo perdido en las montañas de Nepal, las historias relatan que el templo está en el sistema de cuevas de las montañas. Finalmente encuentras una entrada a las cuevas, y decides adentrarte en lo profundo, encuentras un camino oscuro que va hacia abajo, otro camino a lo alto de las paredes de la cueva, un río subterraneo a unos metros del acantilado, ¿Qué camino debería seguir? " << endl;
    cout << "1. Adentrarse en el camino oscuro y estrecho" << endl;
    cout << "2. Tratar de escalar las paredes hastra llegar al camino en lo alto" << endl;
    cout << "3. Aventarse al río" << endl;
    cout << "4. Bajar al río con ayuda del equipo de alpinismo" << endl;
    cout << "5. Salir de la simulación" << endl;
    cout << "Vida: " << vida << endl;
    do {
    cout << "Ingrese el numero de la opcion: ";
    cin >> opcion;
        switch(opcion) {
            case 1:
                cout << "Te adentras en el camino oscuro y detectas un olor desagradable, ¿Qué debería hacer?" << endl;
                cout << "1. Seguir avanzando" << endl;
                cout << "2. Regresar al punto anterior" << endl;
                cout << "3. Salir de la simulación." << endl;
                do {
                    cout << "Ingrese el numero de la opcion: ";
                    cin >> caminoEstrecho;
                    switch(caminoEstrecho) {
                        case 1:
                            vida = vida - 25;
                            cout<<"Has encontrado un nido de arañas gigantes y una de ellas te pica, vuelves corriendo al punto anterior y has perdido 25 de vida"<<endl;
                            cout << "¿Qúe debería hacer ahora?"<< endl;
                            cout << "1. Tratar de escalar las paredes hastra llegar al camino en lo alto" << endl;
                            cout << "2. Aventarse al río" << endl;
                            cout << "3. Bajar al río con ayuda del equipo de alpinismo" << endl;
                            cout << "4. Salir de la simulación" << endl;
                            cout << "Vida: " << vida << endl;
                            do {
                            cout << "Ingrese el número de la opcion: " << endl;
                            cin >> opcion2;
                            switch(opcion2) {
                                case 1:
                                vida = vida - 25;
                                cout << "Tratas de escalar la pared, pero al estar húmedo caes y pierdes 25 de vida. ¿Qué debería hacer ahora?." << endl;
                                cout << "1. Aventarse al río" << endl;
                                cout << "2. Bajar al río con ayuda del equipo de alpinismo" << endl;
                                cout << "3. Salir de la simulación" << endl;
                                cout << "Vida: " << vida << endl;
                                do {
                                cout << "Ingrese el número de la opcion: " << endl;
                                cin >> opcion3;
                                    switch(opcion3) {
                                        case 1:
                                        vida = vida - 50;
                                        cout << "Te avientas al río, al parecer no era muy hondo y te has lastimado la pierna, has perdido 50 de vida. Después de un nadar un rato río abajo, encuentras una cueva enorme con una selva dentro, en la orilla del río una especie de puerto, que sigue un camino adentrándose en la jungla. ¿Qué debería hacer ahora?" << endl;
                                        cout << "1. Continuar nadando por el río." << endl;
                                        cout << "2. Seguir el camino del puerto misterioso." << endl;
                                        cout << "3. Salir de la simulación." << endl;
                                        cout << "Vida: " << vida << endl;
                                        do {
                                        cout << "Ingrese el número de la opcion: " << endl;
                                        cin >> opcion4;
                                            switch(opcion4) {
                                                case 1:
                                                    vida = 0;
                                                    cout << "Continúas por el río hasta que sientes que la corriente te arrastra con más fuerza y a lo lejos ves el precipicio acercándose, tratas de nadar contracorriente pero es inútil, has muerto." << endl;
                                                    cout << "Vida: " << vida << endl;
                                                    return 0;
                                                case 2:
                                                    cout << "Sigues el camino misterioso a través de la jungla hasta que ves rastros de sangre cerca, y escuchas un rugido por la espalda, volteas y ves un jaguar busca comerte. ¿Qué debería hacer ahora?." << endl;
                                                    cout << "1. Tomar una piedra del suelo y arrojársela para intentar ahuyentarlo." << endl;
                                                    cout << "2. Sacar una bengala de la mochila e intentar ahuyentarlo." << endl;
                                                    cout << "3. Salir corriendo y gritando para escapar." << endl;
                                                    cout << "Vida: " << vida << endl;
                                                    do {
                                                        cout << "Ingrese el número de la opcion: " << endl;
                                                        cin >> opcion5;
                                                            switch(opcion5){
                                                                case 1:
                                                                    vida = 0;
                                                                    cout << "Al parecer al jaguar no le ha agradado el golpe, así que te ataca y te devora vivo, has muerto." << endl;
                                                                    return 0;
                                                                    cout << "Vida: " << vida << endl;
                                                                break;
                                                                case 2:
                                                                    cout << "La bengala ha ahuyentado al jaguar con éxito, así que continuas por el camino, hasta que, después de un rato  de caminar por la jungla, encuentras el templo antiguo, ahora eres una leyenda de la arqueología y serás reconocido mundialmente, el viaje ha sido un éxito." << endl;
                                                                    return 0;
                                                                break;
                                                                case 3:
                                                                    vida = 0;
                                                                    cout << "Intentas correr a toda velocidad, pero el rey de la jungla se hace presente, y termina alcanzándote y devorándote, has muerto." << endl;
                                                                    cout << "Vida: " << vida << endl;
                                                                    return 0;
                                                                break;
                                                                case 4:
                                                                    return 0;
                                                                break;
                                                                default:
                                                                    cout << "Opción no válida." << endl;
                                                                break;
                                                            }
                                                    } while (opcion5 < 1 || opcion5 > 3);
                                                break;
                                                case 3:
                                                    return 0;
                                                break;
                                                default:
                                                    cout << "Opcion no valida" << endl;
                                                break;
                                            }
                                        } while (opcion4 < 0 || opcion4 > 3);
                                        break;
                                        case 2:
                                            cout << "Con ayuda de un gancho, al clavarlo en la orilla del precipicio, bajas por la cuerda hasta llegar al río. Después de un nadar un rato río abajo, encuentras una cueva enorme con una selva dentro, en la orilla del río una especie de puerto, que sigue un camino adentrándose en la jungla. ¿Qué debería hacer ahora?" << endl;
                                            cout << "1. Continuar nadando por el río." << endl;
                                            cout << "2. Seguir el camino del puerto misterioso." << endl;
                                            cout << "3. Salir de la simulación." << endl;
                                            cout << "Vida: " << vida << endl;
                                            do {
                                                cout << "Ingrese el número de la opcion: " << endl;
                                                cin >> opcion4;
                                                    switch (opcion4) {
                                                        case 1:
                                                            vida = 0;
                                                            cout << "Continúas por el río hasta que sientes que la corriente te arrastra con más fuerza y a lo lejos ves el precipicio acercándose, tratas de nadar contracorriente pero es inútil, has muerto." << endl;
                                                            cout << "Vida: " << vida << endl;
                                                            return 0;
                                                        break;
                                                        case 2:
                                                            cout << "Sigues el camino misterioso a través de la jungla hasta que ves rastros de sangre cerca, y escuchas un rugido por la espalda, volteas y ves un jaguar busca comerte. ¿Qué debería hacer ahora?." << endl;
                                                            cout << "1. Tomar una piedra del suelo y arrojársela para intentar ahuyentarlo." << endl;
                                                            cout << "2. Sacar una bengala de la mochila e intentar ahuyentarlo." << endl;
                                                            cout << "3. Salir corriendo y gritando para escapar." << endl;
                                                            cout << "Vida: " << vida << endl;
                                                            do {
                                                                cout << "Ingrese el número de la opcion: " << endl;
                                                                cin >> opcion4;
                                                                    switch (opcion4) {
                                                                        case 1:
                                                                            vida = 0;
                                                                            cout << "Al parecer al jaguar no le ha agradado el golpe, así que te ataca y te devora vivo, has muerto." << endl;
                                                                            return 0;
                                                                            cout << "Vida: " << vida << endl;
                                                                        break;
                                                                        case 2:
                                                                            cout << "La bengala ha ahuyentado al jaguar con éxito, así que continuas por el camino, hasta que, después de un rato  de caminar por la jungla, encuentras el templo antiguo, ahora eres una leyenda de la arqueología y serás reconocido mundialmente, el viaje ha sido un éxito." << endl;
                                                                            return 0;
                                                                        break;
                                                                        case 3:
                                                                            vida = 0;
                                                                            cout << "Intentas correr a toda velocidad, pero el rey de la jungla se hace presente, y termina alcanzándote y devorándote, has muerto." << endl;
                                                                            cout << "Vida: " << vida << endl;
                                                                            return 0;
                                                                        break;
                                                                        case 4:
                                                                            return 0;
                                                                        break;
                                                                        default:
                                                                            cout << "Opción no válida." << endl;
                                                                        break;
                                                                    }
                                                            } while (opcion5 < 1 || opcion > 3);
                                                        break;
                                                        case 3:
                                                            return 0;
                                                        break;
                                                        default:
                                                            cout << "Opcion no valida" << endl;
                                                        break;
                                                    }
                                            } while (opcion4 < 1 || opcion4 > 3);
                                        break;
                                        default:    
                                            cout <<"Opción no válida"<<endl;
                                        break;
                                    }
                                } while (opcion3 < 1 || opcion3 > 4);
                                break;
                                case 2:
                                    vida = vida - 50;
                                        cout << "Te avientas al río, al parecer no era muy hondo y te has lastimado la pierna, has perdido 50 de vida. Después de un nadar un rato río abajo, encuentras una cueva enorme con una selva dentro, en la orilla del río una especie de puerto, que sigue un camino adentrándose en la jungla. ¿Qué debería hacer ahora?" << endl;
                                        cout << "1. Continuar nadando por el río." << endl;
                                        cout << "2. Seguir el camino del puerto misterioso." << endl;
                                        cout << "3. Salir de la simulación." << endl;
                                        cout << "Vida: " << vida << endl;
                                        do {
                                        cout << "Ingrese el número de la opcion: " << endl;
                                        cin >> opcion4;
                                            switch(opcion4) {
                                                case 1:
                                                    vida = 0;
                                                    cout << "Continúas por el río hasta que sientes que la corriente te arrastra con más fuerza y a lo lejos ves el precipicio acercándose, tratas de nadar contracorriente pero es inútil, has muerto." << endl;
                                                    cout << "Vida: " << vida << endl;
                                                    return 0;
                                                case 2:
                                                    cout << "Sigues el camino misterioso a través de la jungla hasta que ves rastros de sangre cerca, y escuchas un rugido por la espalda, volteas y ves un jaguar busca comerte. ¿Qué debería hacer ahora?." << endl;
                                                    cout << "1. Tomar una piedra del suelo y arrojársela para intentar ahuyentarlo." << endl;
                                                    cout << "2. Sacar una bengala de la mochila e intentar ahuyentarlo." << endl;
                                                    cout << "3. Salir corriendo y gritando para escapar." << endl;
                                                    cout << "Vida: " << vida << endl;
                                                    do {
                                                        cout << "Ingrese el número de la opcion: " << endl;
                                                        cin >> opcion5;
                                                            switch(opcion5){
                                                                case 1:
                                                                    vida = 0;
                                                                    cout << "Al parecer al jaguar no le ha agradado el golpe, así que te ataca y te devora vivo, has muerto." << endl;
                                                                    return 0;
                                                                    cout << "Vida: " << vida << endl;
                                                                break;
                                                                case 2:
                                                                    cout << "La bengala ha ahuyentado al jaguar con éxito, así que continuas por el camino, hasta que, después de un rato  de caminar por la jungla, encuentras el templo antiguo, ahora eres una leyenda de la arqueología y serás reconocido mundialmente, el viaje ha sido un éxito." << endl;
                                                                    return 0;
                                                                break;
                                                                case 3:
                                                                    vida = 0;
                                                                    cout << "Intentas correr a toda velocidad, pero el rey de la jungla se hace presente, y termina alcanzándote y devorándote, has muerto." << endl;
                                                                    cout << "Vida: " << vida << endl;
                                                                    return 0;
                                                                break;
                                                                case 4:
                                                                    return 0;
                                                                break;
                                                                default:
                                                                    cout << "Opción no válida." << endl;
                                                                break;
                                                            }
                                                    } while (opcion5 < 1 || opcion5 > 3);
                                                break;
                                                case 3:
                                                    return 0;
                                                break;
                                                default:
                                                    cout << "Opcion no valida" << endl;
                                                break;
                                            }
                                        } while (opcion4 < 0 || opcion4 > 3);
                                        break;
                                break;
                                case 3:
                                    return 0;
                                break;
                                default:
                                    cout << "Opción no válida." << endl;
                                break;
                            }
                            } while (opcion3 < 1 || opcion3 > 4);
                        break;
                        case 2:
                            cout << "¿Qúe debería hacer ahora?"<< endl;
                            cout << "1. Tratar de escalar las paredes hastra llegar al camino en lo alto" << endl;
                            cout << "2. Aventarse al río" << endl;
                            cout << "3. Bajar al río con ayuda del equipo de alpinismo" << endl;
                            cout << "4. Salir de la simulación" << endl;
                            cout << "Vida: " << vida << endl;
                                do {
                                    cout << "Ingrese el número de la opcion: " << endl;
                                    cin >> opcion2;
                                        switch(opcion2) {
                                            case 1:
                                                vida = vida - 25;
                                                cout << "Tratas de escalar la pared, pero al estar húmedo caes y pierdes 25 de vida. ¿Qué debería hacer ahora?." << endl;
                                                cout << "1. Aventarse al río" << endl;
                                                cout << "2. Bajar al río con ayuda del equipo de alpinismo" << endl;
                                                cout << "3. Salir de la simulación" << endl;
                                                cout << "Vida: " << vida << endl;
                                                    do {
                                                        cout << "Ingrese el número de la opcion: " << endl;
                                                        cin >> opcion3;
                                                            switch(opcion3) {
                                                                case 1:
                                                                    vida = vida - 50;
                                                                    cout << "Te avientas al río, al parecer no era muy hondo y te has lastimado la pierna, has perdido 50 de vida. Después de un nadar un rato río abajo, encuentras una cueva enorme con una selva dentro, en la orilla del río una especie de puerto, que sigue un camino adentrándose en la jungla. ¿Qué debería hacer ahora?" << endl;
                                                                    cout << "1. Continuar nadando por el río." << endl;
                                                                    cout << "2. Seguir el camino del puerto misterioso." << endl;
                                                                    cout << "3. Salir de la simulación." << endl;
                                                                    cout << "Vida: " << vida << endl;
                                                                        do {
                                                                            cout << "Ingrese el número de la opcion: " << endl;
                                                                            cin >> opcion4;
                                                                                switch(opcion4) {
                                                                                    case 1:
                                                                                        vida = 0;
                                                                                        cout << "Continúas por el río hasta que sientes que la corriente te arrastra con más fuerza y a lo lejos ves el precipicio acercándose, tratas de nadar contracorriente pero es inútil, has muerto." << endl;
                                                                                        cout << "Vida: " << vida << endl;
                                                                                        return 0;
                                                                                    case 2:
                                                                                        cout << "Sigues el camino misterioso a través de la jungla hasta que ves rastros de sangre cerca, y escuchas un rugido por la espalda, volteas y ves un jaguar busca comerte. ¿Qué debería hacer ahora?." << endl;
                                                                                        cout << "1. Tomar una piedra del suelo y arrojársela para intentar ahuyentarlo." << endl;
                                                                                        cout << "2. Sacar una bengala de la mochila e intentar ahuyentarlo." << endl;
                                                                                        cout << "3. Salir corriendo y gritando para escapar." << endl;
                                                                                        cout << "Vida: " << vida << endl;
                                                                                            do {
                                                                                                cout << "Ingrese el número de la opcion: " << endl;
                                                                                                cin >> opcion5;
                                                                                                    switch(opcion5){
                                                                                                        case 1:
                                                                                                            vida = 0;
                                                                                                            cout << "Al parecer al jaguar no le ha agradado el golpe, así que te ataca y te devora vivo, has muerto." << endl;
                                                                                                            return 0;
                                                                                                            cout << "Vida: " << vida << endl;
                                                                                                        break;
                                                                                                        case 2:
                                                                                                            cout << "La bengala ha ahuyentado al jaguar con éxito, así que continuas por el camino, hasta que, después de un rato  de caminar por la jungla, encuentras el templo antiguo, ahora eres una leyenda de la arqueología y serás reconocido mundialmente, el viaje ha sido un éxito." << endl;
                                                                                                            return 0;
                                                                                                        break;
                                                                                                        case 3:
                                                                                                            vida = 0;
                                                                                                            cout << "Intentas correr a toda velocidad, pero el rey de la jungla se hace presente, y termina alcanzándote y devorándote, has muerto." << endl;
                                                                                                            cout << "Vida: " << vida << endl;
                                                                                                            return 0;
                                                                                                        break;
                                                                                                        case 4:
                                                                                                            return 0;
                                                                                                        break;
                                                                                                        default:
                                                                                                            cout << "Opción no válida." << endl;
                                                                                                        break;
                                                                                                    }
                                                                                            } while (opcion5 < 1 || opcion5 > 3);
                                                break;
                                                case 3:
                                                    return 0;
                                                break;
                                                default:
                                                    cout << "Opcion no valida" << endl;
                                                break;
                                            }
                                        } while (opcion4 < 0 || opcion4 > 3);
                                        break;
                                        case 2:
                                            cout << "Con ayuda de un gancho, al clavarlo en la orilla del precipicio, bajas por la cuerda hasta llegar al río. Después de un nadar un rato río abajo, encuentras una cueva enorme con una selva dentro, en la orilla del río una especie de puerto, que sigue un camino adentrándose en la jungla. ¿Qué debería hacer ahora?" << endl;
                                            cout << "1. Continuar nadando por el río." << endl;
                                            cout << "2. Seguir el camino del puerto misterioso." << endl;
                                            cout << "3. Salir de la simulación." << endl;
                                            cout << "Vida: " << vida << endl;
                                            do {
                                                cout << "Ingrese el número de la opcion: " << endl;
                                                cin >> opcion4;
                                                    switch (opcion4) {
                                                        case 1:
                                                            vida = 0;
                                                            cout << "Continúas por el río hasta que sientes que la corriente te arrastra con más fuerza y a lo lejos ves el precipicio acercándose, tratas de nadar contracorriente pero es inútil, has muerto." << endl;
                                                            cout << "Vida: " << vida << endl;
                                                            return 0;
                                                        break;
                                                        case 2:
                                                            cout << "Sigues el camino misterioso a través de la jungla hasta que ves rastros de sangre cerca, y escuchas un rugido por la espalda, volteas y ves un jaguar busca comerte. ¿Qué debería hacer ahora?." << endl;
                                                            cout << "1. Tomar una piedra del suelo y arrojársela para intentar ahuyentarlo." << endl;
                                                            cout << "2. Sacar una bengala de la mochila e intentar ahuyentarlo." << endl;
                                                            cout << "3. Salir corriendo y gritando para escapar." << endl;
                                                            cout << "Vida: " << vida << endl;
                                                            do {
                                                                cout << "Ingrese el número de la opcion: " << endl;
                                                                cin >> opcion4;
                                                                    switch (opcion4) {
                                                                        case 1:
                                                                            vida = 0;
                                                                            cout << "Al parecer al jaguar no le ha agradado el golpe, así que te ataca y te devora vivo, has muerto." << endl;
                                                                            return 0;
                                                                            cout << "Vida: " << vida << endl;
                                                                        break;
                                                                        case 2:
                                                                            cout << "La bengala ha ahuyentado al jaguar con éxito, así que continuas por el camino, hasta que, después de un rato  de caminar por la jungla, encuentras el templo antiguo, ahora eres una leyenda de la arqueología y serás reconocido mundialmente, el viaje ha sido un éxito." << endl;
                                                                            return 0;
                                                                        break;
                                                                        case 3:
                                                                            vida = 0;
                                                                            cout << "Intentas correr a toda velocidad, pero el rey de la jungla se hace presente, y termina alcanzándote y devorándote, has muerto." << endl;
                                                                            cout << "Vida: " << vida << endl;
                                                                            return 0;
                                                                        break;
                                                                        case 4:
                                                                            return 0;
                                                                        break;
                                                                        default:
                                                                            cout << "Opción no válida." << endl;
                                                                        break;
                                                                    }
                                                            } while (opcion5 < 1 || opcion > 3);
                                                        break;
                                                        case 3:
                                                            return 0;
                                                        break;
                                                        default:
                                                            cout << "Opcion no valida" << endl;
                                                        break;
                                                    }
                                            } while (opcion4 < 1 || opcion4 > 3);
                                        break;
                                        default:    
                                            cout <<"Opción no válida"<<endl;
                                        break;
                                    }
                                } while (opcion3 < 1 || opcion3 > 4);
                                break;
                                case 2:
                                    vida = vida - 50;
                                        cout << "Te avientas al río, al parecer no era muy hondo y te has lastimado la pierna, has perdido 50 de vida. Después de un nadar un rato río abajo, encuentras una cueva enorme con una selva dentro, en la orilla del río una especie de puerto, que sigue un camino adentrándose en la jungla. ¿Qué debería hacer ahora?" << endl;
                                        cout << "1. Continuar nadando por el río." << endl;
                                        cout << "2. Seguir el camino del puerto misterioso." << endl;
                                        cout << "3. Salir de la simulación." << endl;
                                        cout << "Vida: " << vida << endl;
                                        do {
                                        cout << "Ingrese el número de la opcion: " << endl;
                                        cin >> opcion4;
                                            switch(opcion4) {
                                                case 1:
                                                    vida = 0;
                                                    cout << "Continúas por el río hasta que sientes que la corriente te arrastra con más fuerza y a lo lejos ves el precipicio acercándose, tratas de nadar contracorriente pero es inútil, has muerto." << endl;
                                                    cout << "Vida: " << vida << endl;
                                                    return 0;
                                                case 2:
                                                    cout << "Sigues el camino misterioso a través de la jungla hasta que ves rastros de sangre cerca, y escuchas un rugido por la espalda, volteas y ves un jaguar busca comerte. ¿Qué debería hacer ahora?." << endl;
                                                    cout << "1. Tomar una piedra del suelo y arrojársela para intentar ahuyentarlo." << endl;
                                                    cout << "2. Sacar una bengala de la mochila e intentar ahuyentarlo." << endl;
                                                    cout << "3. Salir corriendo y gritando para escapar." << endl;
                                                    cout << "Vida: " << vida << endl;
                                                    do {
                                                        cout << "Ingrese el número de la opcion: " << endl;
                                                        cin >> opcion5;
                                                            switch(opcion5){
                                                                case 1:
                                                                    vida = 0;
                                                                    cout << "Al parecer al jaguar no le ha agradado el golpe, así que te ataca y te devora vivo, has muerto." << endl;
                                                                    return 0;
                                                                    cout << "Vida: " << vida << endl;
                                                                break;
                                                                case 2:
                                                                    cout << "La bengala ha ahuyentado al jaguar con éxito, así que continuas por el camino, hasta que, después de un rato  de caminar por la jungla, encuentras el templo antiguo, ahora eres una leyenda de la arqueología y serás reconocido mundialmente, el viaje ha sido un éxito." << endl;
                                                                    return 0;
                                                                break;
                                                                case 3:
                                                                    vida = 0;
                                                                    cout << "Intentas correr a toda velocidad, pero el rey de la jungla se hace presente, y termina alcanzándote y devorándote, has muerto." << endl;
                                                                    cout << "Vida: " << vida << endl;
                                                                    return 0;
                                                                break;
                                                                case 4:
                                                                    return 0;
                                                                break;
                                                                default:
                                                                    cout << "Opción no válida." << endl;
                                                                break;
                                                            }
                                                    } while (opcion5 < 1 || opcion5 > 3);
                                                break;
                                                case 3:
                                                    return 0;
                                                break;
                                                default:
                                                    cout << "Opcion no valida" << endl;
                                                break;
                                            }
                                        } while (opcion4 < 0 || opcion4 > 3);
                                        break;
                                break;
                                case 3:
                                    return 0;
                                break;
                                default:
                                    cout << "Opción no válida." << endl;
                                break;
                            }
                            } while (opcion3 < 1 || opcion3 > 4);
                        break;
                        case 3:
                            return 0;
                        break;
                        default:
                            cout << "Opción no válida." << endl;
                        break;
                    }
                } while (caminoEstrecho < 1 || caminoEstrecho > 4);
            break;
            case 2:
                cout << "Tratas de escalar la pared, pero al estar húmedo caes y pierdes 25 de vida. ¿Qué debería hacer ahora?" << endl;
                cout << "1. Aventarse al río" << endl;
                cout << "2. Bajar al río con ayuda del equipo de alpinismo" << endl;
                cout << "3. Salir de la simulación" << endl;
                cout << "Vida: " << vida << endl;
                do {
                cout << "Ingrese el número de la opcion: " << endl;
                cin >> opcion2;
                    switch (opcion2) {
                        case 1:
                            vida = vida - 25;
                            cout << "Te avientas al río, al parecer no era muy hondo y te has lastimado la pierna, has perdido 25 de vida. Después de un nadar un rato río abajo, encuentras una cueva enorme con una selva dentro, en la orilla del río una especie de puerto, que sigue un camino adentrándose en la jungla. ¿Qué debería hacer ahora?" << endl;
                            cout << "1. Continuar nadando por el río." << endl;
                            cout << "2. Seguir el camino del puerto misterioso." << endl;
                            cout << "3. Salir de la simulación." << endl;
                            cout << "Vida: " << vida << endl;
                            do {
                                cout << "Ingrese el número de la opcion: " << endl;
                                cin >> opcion3;
                                    switch (opcion3) {
                                        case 1:
                                            vida = 0;
                                            cout << "Continúas por el río hasta que sientes que la corriente te arrastra con más fuerza y a lo lejos ves el precipicio acercándose, tratas de nadar contracorriente pero es inútil, has muerto." << endl;
                                            cout << "Vida: " << vida << endl; 
                                            return 0;
                                        break;
                                        case 2:
                                            cout << "Sigues el camino misterioso a través de la jungla hasta que ves rastros de sangre cerca, y escuchas un rugido por la espalda, volteas y ves un jaguar busca comerte. ¿Qué debería hacer ahora?." << endl;
                                            cout << "1. Tomar una piedra del suelo y arrojársela para intentar ahuyentarlo." << endl;
                                            cout << "2. Sacar una bengala de la mochila e intentar ahuyentarlo." << endl;
                                            cout << "3. Salir corriendo y gritando para escapar." << endl;
                                            cout << "4. Salir de la simulación." << endl;
                                            cout << "Vida: " << vida << endl;
                                            do {
                                                cout << "Ingrese el número de la opcion: " << endl;
                                                cin >> opcion4;
                                                    switch (opcion4) {
                                                        case 1:
                                                            vida = 0;
                                                            cout << "Al parecer al jaguar no le ha agradado el golpe, así que te ataca y te devora vivo, has muerto." << endl;
                                                            return 0;
                                                            cout << "Vida: " << vida << endl;
                                                        break;
                                                        case 2:
                                                            cout << "La bengala ha ahuyentado al jaguar con éxito, así que continuas por el camino, hasta que, después de un rato  de caminar por la jungla, encuentras el templo antiguo, ahora eres una leyenda de la arqueología y serás reconocido mundialmente, el viaje ha sido un éxito." << endl;
                                                            return 0;
                                                        break;
                                                        case 3:
                                                            vida = 0;
                                                            cout << "Intentas correr a toda velocidad, pero el rey de la jungla se hace presente, y termina alcanzándote y devorándote, has muerto." << endl;
                                                            cout << "Vida: " << vida << endl;
                                                            return 0;
                                                        break;
                                                        case 4:
                                                            return 0;
                                                        break;
                                                        default:
                                                            cout << "Opción no válida." << endl;
                                                        break;
                                                    }
                                            } while (opcion4 < 1 || opcion4 > 3);
                                        break;
                                        case 3:
                                            return 0;
                                        break;
                                        default:
                                            cout << "Opción no válida." << endl;
                                        break;
                                    }
                            }while (opcion3 < 1 || opcion3 > 3);
                        break;
                        case 2:
                            cout << "Con ayuda de un gancho, al clavarlo en la orilla del precipicio, bajas por la cuerda hasta llegar al río. Después de un nadar un rato río abajo, encuentras una cueva enorme con una selva dentro, en la orilla del río una especie de puerto, que sigue un camino adentrándose en la jungla. ¿Qué debería hacer ahora?" << endl;
                            cout << "1. Continuar nadando por el río." << endl;
                            cout << "2. Seguir el camino del puerto misterioso." << endl;
                            cout << "3. Salir de la simulación." << endl;
                            cout << "Vida: " << vida << endl;
                                do {
                                    cout << "Ingrese el número de la opcion: " << endl;
                                    cin >> opcion2;
                                        switch (opcion2){
                                            case 1:
                                                vida = 0;
                                                cout << "Continúas por el río hasta que sientes que la corriente te arrastra con más fuerza y a lo lejos ves el precipicio acercándose, tratas de nadar contracorriente pero es inútil, has muerto." << endl;
                                                cout << "Vida: " << vida << endl; 
                                                return 0;
                                            break;
                                            case 2:
                                                cout << "Sigues el camino misterioso a través de la jungla hasta que ves rastros de sangre cerca, y escuchas un rugido por la espalda, volteas y ves un jaguar busca comerte. ¿Qué debería hacer ahora?." << endl;
                                                cout << "1. Tomar una piedra del suelo y arrojársela para intentar ahuyentarlo." << endl;
                                                cout << "2. Sacar una bengala de la mochila e intentar ahuyentarlo." << endl;
                                                cout << "3. Salir corriendo y gritando para escapar." << endl;
                                                cout << "4. Salir de la simulación." << endl;
                                                cout << "Vida: " << vida << endl;
                                                    do {
                                                        cout << "Ingrese el número de la opcion: " << endl;
                                                        cin >> opcion2;
                                                            switch (opcion2){
                                                                case 1:
                                                                    vida = 0;
                                                                    cout << "Al parecer al jaguar no le ha agradado el golpe, así que te ataca y te devora vivo, has muerto." << endl;
                                                                    cout << "Vida: " << vida << endl;
                                                            return 0;
                                                            break;
                                                            case 2:
                                                                cout << "La bengala ha ahuyentado al jaguar con éxito, así que continuas por el camino, hasta que, después de un rato  de caminar por la jungla, encuentras el templo antiguo, ahora eres una leyenda de la arqueología y serás reconocido mundialmente, el viaje ha sido un éxito." << endl;
                                                                return 0;
                                                            break;
                                                            case 3:
                                                                vida = 0;
                                                                cout << "Intentas correr a toda velocidad, pero el rey de la jungla se hace presente, y termina alcanzándote y devorándote, has muerto." << endl;
                                                                cout << "Vida: " << vida << endl;
                                                                return 0;
                                                            break;
                                                            case 4:
                                                                return 0;
                                                            break;
                                                            default:    
                                                                cout <<"Opción no válida"<<endl;
                                                            break;
                                                        }
                                                    } while (opcion3 < 1 || opcion3 > 4);
                                            break;
                                            case 3:
                                            break;
                                            default:
                                                cout << "Opción no válida." << endl;
                                            break;
                                        }
                                } while (opcion2 < 1 || opcion2 > 3);
            break;
                        break;
                        case 3:
                        break;
                        default:    
                            cout <<"Opción no válida"<<endl;
                        break;
                    }
                } while (opcion2 < 1 || opcion2 > 3);
            break;
            case 3:
                vida=vida - 25;
                cout << "Te avientas al río, al parecer no era muy hondo y te has lastimado la pierna, has perdido 25 de vida. Después de un nadar un rato río abajo, encuentras una cueva enorme con una selva dentro, en la orilla del río una especie de puerto, que sigue un camino adentrándose en la jungla. ¿Qué debería hacer ahora?" << endl;
                cout << "1. Continuar nadando por el río." << endl;
                cout << "2. Seguir el camino del puerto misterioso" << endl;
                cout << "4. Salir de la simulación" << endl;
            break;
            case 4:
                cout << "Con ayuda de un gancho, al clavarlo en la orilla del precipicio, bajas por la cuerda hasta llegar al río. Después de un nadar un rato río abajo, encuentras una cueva enorme con una selva dentro, en la orilla del río una especie de puerto, que sigue un camino adentrándose en la jungla. ¿Qué debería hacer ahora?" << endl;
                cout << "1. Continuar nadando por el río." << endl;
                cout << "2. Seguir el camino del puerto misterioso." << endl;
                cout << "3. Salir de la simulación." << endl;
                cout << "Vida: " << vida << endl;
                do {
                    cout << "Ingrese el número de la opcion: " << endl;
                    cin >> opcion2;
                        switch (opcion2){
                            case 1:
                                vida = 0;
                                cout << "Continúas por el río hasta que sientes que la corriente te arrastra con más fuerza y a lo lejos ves el precipicio acercándose, tratas de nadar contracorriente pero es inútil, has muerto." << endl;
                                cout << "Vida: " << vida << endl; 
                                return 0;
                            break;
                            case 2:
                                cout << "Sigues el camino misterioso a través de la jungla hasta que ves rastros de sangre cerca, y escuchas un rugido por la espalda, volteas y ves un jaguar busca comerte. ¿Qué debería hacer ahora?." << endl;
                                cout << "1. Tomar una piedra del suelo y arrojársela para intentar ahuyentarlo." << endl;
                                cout << "2. Sacar una bengala de la mochila e intentar ahuyentarlo." << endl;
                                cout << "3. Salir corriendo y gritando para escapar." << endl;
                                cout << "4. Salir de la simulación." << endl;
                                cout << "Vida: " << vida << endl;
                                do {
                                    cout << "Ingrese el número de la opcion: " << endl;
                                    cin >> opcion2;
                                        switch (opcion2){
                                            case 1:
                                                vida = 0;
                                                cout << "Al parecer al jaguar no le ha agradado el golpe, así que te ataca y te devora vivo, has muerto." << endl;
                                                cout << "Vida: " << vida << endl;
                                                return 0;
                                            break;
                                            case 2:
                                                cout << "La bengala ha ahuyentado al jaguar con éxito, así que continuas por el camino, hasta que, después de un rato  de caminar por la jungla, encuentras el templo antiguo, ahora eres una leyenda de la arqueología y serás reconocido mundialmente, el viaje ha sido un éxito." << endl;
                                                return 0;
                                            break;
                                            case 3:
                                                vida = 0;
                                                cout << "Intentas correr a toda velocidad, pero el rey de la jungla se hace presente, y termina alcanzándote y devorándote, has muerto." << endl;
                                                cout << "Vida: " << vida << endl;
                                                return 0;
                                            break;
                                            case 4:
                                                return 0;
                                            break;
                                            default:    
                                                cout <<"Opción no válida"<<endl;
                                            break;
                                        }
                                } while (opcion3 < 1 || opcion3 > 4);
                            break;
                            case 3:
                                return 0;
                            break;
                            default:
                                cout << "Opción no válida." << endl;
                            break;
                        }
                } while (opcion2 < 1 || opcion2 > 3);
            break;
            case 5:
                return 0;
            break;
            default:
                cout << "Opcion no válida." << endl;
            break;
        }
    } while (opcion < 1 || opcion > 5);
    return 0;
}
