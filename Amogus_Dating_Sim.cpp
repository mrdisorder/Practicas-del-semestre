// Amogus Dating Sim.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <windows.h>
#include <time.h>
using namespace std;
int lovepoint;
string name;
int color;
int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18, d19, d20, d21, d22;


int main()
{

    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "        /+       +h.   `dh       -oyhhys:     `+dmdho`  /s       o+     -+oso/`       `mds/.            `+:    /hhyyyyyyss+syyyysso`.mh.      :N/    -ymddy/           -+sso/` :yyyyyso/   `ys    :m+    " << endl;
    cout << "      `hMM-     -MMy   +MM/    .dm+.``.+Nd   :Nd-  ./`  hM       Nd   :mh+::/+.       .My/smNs-        -mMN     `..:My..--...:My-:: .MMN:     `Md   sNo` `::         /mh/::/+. `..sM:-:-   sMM-   mMN    " << endl;
    cout << "     -md-My     sMNN` `NmMs   -Nh`      +M: :Ms         hM      `Nh   mM/-.`          `Ms   .oNy`     /Ms/M/       `My       :M+    `My/Ny`    mN  hN-               NN/-.`       yM`     `NNMs  /MmM-   " << endl;
    cout << "    /Md/+mM`   `Nd/M+ sM-hN   hN`       oM: Nd -+syhhd/ hM      .Ms   `+yhhmNh:       `My     .Ny    sMy/oMd        md       :M+    `Ny `yN/   dN /M/`/oyhhdh`       .+yhhmNh-    yM`     +M/dN``Nd.Mo   " << endl;
    cout << "   yMmhs++Mo   sM: mm:Ms /M/  dN       .Nd -Mo ++-.-Nm` sM-     oM:         `dM`      .Ms      md   mMdyo+sM-       dN       -M+    `My   :md: dm yM`.o/-.sM+              .mN    yM`    `Nm :MoyM. dm`  " << endl;
    cout << "  /My     dN. `Mm  /MMm` `Nm  -Nd:`  .+Ny` `Nd.  .+Nd.  .mm:` `+Ms   dy.   .+Ny       -Mo    `yN:  sM/    `Nd       hN`     `:Mo..` `Mh     +Ndmm +M+   -yMo       `ds.   .+Ns  ``yM-..  +M+  dMMo  /M+  " << endl;
    cout << "  oo      .y: :M+   hm-   oM:  `/ydddhs-    .sdddds:     `+hdddy:    -ohdddho-        .hmdhhdmy.   y/      :y.      +s     ydhhyyys .Ms      `+ds  /ydddh+`         -shdddho-  .hhhyyyy: yN`  -Nh    mN  " << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;

    cout << "Bienvenidx a AMOGUS DATING SIM." << endl;
    cout << "Elige a tu crewmate favorito y ganate su corazon!" << endl;
    cout << endl;
    cout << "Ve a 5 citas con el crewmate de tu eleccion y gana puntos tomando decisiones correctas, estas influiran en la opinion del crewmate sobre ti según los Love Points (LP) que tengas." << endl;
    cout << "Cuidado en llegar a 0! Llegar a 0 es un game over automatico." << endl;
    cout << endl;
    cout << "Mucha suerte!" << endl;
    cout << endl;
    cout << endl;
    cout << "Presiona cualquier tecla para continuar..." << endl;
    _getch();

        cout << "Ingresa tu nombre, cadete." << endl;
        cin >> name;
        cout << endl;
        cout << "Entendido, " << name << endl;
        cout << "Bienvenidx a la nave. Toma asiento." << endl;

        cout << "Presiona cualquier tecla para continuar..." << endl;
        _getch();

        do
        {
            cout << "La vida en la aeronave despues de años navegando en el espacio se vuelve muy solitaria." << endl;
            cout << "Recuerdas que la otra vez que fuiste a la cafeteria encontraste un folleto que te llamó la atención." << endl;
            cout << "El folleto decia lo siguiente: " << endl;
            cout << endl;
            cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
            cout << "¿Te sientes solx? ¿Estar en el espacio está a punto de volverte locx? ¡Deja que nuestros expertos te ayuden a encontrar tu media naranja!" << endl;
            cout << "LLAMA AL XXX-XXX-XXX" << endl;
            cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
            cout << endl;
            cout << "Decides llamar en esperas de que algo bueno salga de ello." << endl;
            cout << "La persona del telefono te dice que mañana estés puntual en la cafeteria a las 10 am. ¿De qué se tratará todo esto?" << endl;
            cout << "Presiona cualquier tecla para continuar..." << endl;
            _getch();

            cout << "DIA SIGUIENTE..." << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "Llegas puntual a la mesa que se te fue asignada." << endl;
            cout << "Despues de 2 minutos, comienzas a preocuparte. ¿Y si te dejaron plantadx?" << endl;
            cout << "Mientras te concentras en tus preocupaciones, alguien se sienta en tu mesa." << endl;
            cout << endl;
            cout << "¿Quien es?" << endl;
            cout << "1. Negro." << endl;
            cout << "2. Rojo." << endl;
            cout << "3. Verde." << endl;
            cin >> color;
            cout << "Presiona cualquier tecla para continuar..." << endl;
            _getch();

            if (color = 1)
            {

                cout << " << Lo lamento, estoy esperando a alguien. >> le dices." << endl;
                cout << " << Sí creo que soy yo. >> Responde con una ligera risa." << endl;
                cout << " << Oh, una disculpa. Me presento, soy " << name << " . Un placer conocerte. >>" << endl; // cambiar color
                cout << " << El placer es mio, soy Negro. >> " << endl; // cambiar color
                cout << endl;
                cout << endl;
                cout << "LOGRO OBTENIDO: Mi nombre es Negro" << endl; // cambiar color
                cout << "Presiona cualquier tecla para continuar..." << endl;
                _getch();

                cout << "1ERA CITA" << endl; // --------------------------------------------------------------------------------- INICIA 1ERA CITA
                cout << "Para conocerse mejor deciden comprar algo en la cafeteria." << endl;
                cout << endl;
                cout << "EVENTO: De regreso a la mesa, Negro se tropieza y tira su café." << endl; // cambiar color
                cout << "¿Qué haces?" << endl;
                cout << "1. Le ayudo a levantarse y limpiar su ropa." << endl;
                cout << "2. Obviamente me burlo, que tontx de su parte." << endl;
                cin >> d1;

                if (d1 = 1)
                {
                    cout << "HAS DECIDIDO AYUDAR." << endl;
                    cout << "Ayudaste a Negro a levantarse, definitivamente apreció el gesto." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[+ 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint + 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();

                } // +10

                else
                {
                    cout << "HAS DECIDIDO BURLARTE." << endl;
                    cout << "Te burlaste de Negro en frente de todos, definitivamente no le agradó que hicieras eso." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[- 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint - 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();
                } // -10

                cout << "Despues del pequeño accidente, logran llegar a su mesa. Ahi, comienzan a hablar sobre ustedes y a conocerse." << endl;
                cout << endl;
                cout << "EVENTO: En un punto de la conversación, intenta hacer un chiste pero resulta que este fue muy malo y no te dio mucha risa que digamos." << endl;
                cout << "¿Qué haces?" << endl;
                cout << "1. Te ries aun asi, crees que su risa es contagiosa." << endl;
                cout << "2. Te le quedas viendo seriamente. No te causo gracia." << endl;
                cin >> d2;

                if (d2 = 1)
                {
                    cout << "HAS DECIDIDO REIR." << endl;
                    cout << "Te reiste de su chiste por su risa es contagiosa, pasaron un buen rato." << endl;
                    cout << endl;
                    cout << endl;
                    cout << "[+ 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint + 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();

                } // +10

                else
                {
                    cout << "HAS DECIDIDO NO REIR." << endl;
                    cout << "Silencio... Que incomodo." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[- 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint - 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();
                } // -10

                cout << "Despues de hablar otro rato, se despiden porque ya es muy tarde." << endl;
                cout << "Asi termina tu 1era cita." << endl;
                cout << endl;
                cout << endl;
                cout << "LOGRO OBTENIDO: 1era cita." << endl;
                cout << "Current lovepoint: " << lovepoint << endl;
                cout << "Presiona cualquier tecla para continuar..." << endl;
                _getch(); // ------------------------------------------------------------------------------------------------------------------ FINALIZA 1ERA CITA

                cout << "2DA CITA" << endl; // --------------------------------------------------------------------------------- INICIA 2DA CITA
                cout << "Negro te invita a realizar tareas juntos en Reactor." << endl; //cambiar color
                cout << "Accedes y te diriges hacia alla." << endl;
                cout << "EVENTO: Cuando vas llegando, puedes ver que se le está complicando el Simón dice." << endl;
                cout << "¿Que haces?" << endl;
                cout << "1. Te acercas y te ofreces a ayudarle." << endl;
                cout << "2. Pasas de largo y te vas a hacer lo tuyo." << endl;
                cin >> d3;

                if (d3 = 1)
                {
                    cout << "HAS DECIDIDO AYUDAR." << endl;
                    cout << "Te acercaste con mucha delicadez y ofreciste tu ayuda. Negro gustosx la aceptó y pudieron terminar con esa tarea facil." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[+ 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint + 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();

                } // +10

                else
                {
                    cout << "HAS DECIDIDO IGNORAR." << endl;
                    cout << "Silencio... Que incomodo." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[- 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint - 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();
                } // -10

                cout << "Pasa algo de tiempo y de la nada sale el tema de los impostores." << endl;
                cout << "EVENTO: Negro menciona que no le gustan los lugar con alcantarillas debido a que impostores podrían estar cerca." << endl; // cambiar color
                cout << "¿Que haces?" << endl;
                cout << "1. Le das palmaditas en la espalda para que sepa que lo esta haciendo bien." << endl;
                cout << "2. Apagas todas las luces y le haces una broma." << endl;
                cin >> d4;

                if (d4 = 1)
                {
                    cout << "HAS DECIDIDO ANIMAR." << endl;
                    cout << "Negro te sonrie al sentir tus palmaditas. Despues de otro intento logra pasarlo." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[+ 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint + 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();

                } // +10

                else
                {
                    cout << "HAS DECIDIDO ASUSTAR." << endl;
                    cout << "Apagas las luces y espantas a Negro, haciendole gritar." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[- 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint - 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();
                } // -10

                cout << "Despues de un arduo dia de trabajo, cada quien se va a su capsula." << endl;
                cout << "Mañana será otro dia." << endl;
                cout << "Asi termina tu 2da cita." << endl;
                cout << endl;
                cout << endl;
                cout << "LOGRO OBTENIDO: 2da cita." << endl;
                cout << "Current lovepoint: " << lovepoint << endl;
                cout << "Presiona cualquier tecla para continuar..." << endl;
                _getch(); // ------------------------------------------------------------------------------------------------------------------ FINALIZA 2DA CITA

                cout << "3ERA CITA" << endl; // --------------------------------------------------------------------------------- INICIA 3ERA CITA
                cout << "Hoy es dia de simulacro contra impostores." << endl;
                cout << "EVENTO: Un compañero con botarga de impostor los viene persiguiendo pero Negro se tropieza." << endl; // cambiar nombre
                cout << "¿Que haces?" << endl;
                cout << "1. La ayudo rapido a levantarse y correr." << endl;
                cout << "2. La dejas ahi." << endl;
                cin >> d5;

                if (d5 = 1)
                {
                    cout << "HAS DECIDIDO AYUDAR." << endl;
                    cout << "Rapido le tendiste tu mano a Negro, lo agradece." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[+ 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint + 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();

                } // +10

                else
                {
                    cout << "HAS DECIDIDO ABANDONAR." << endl;
                    cout << "Negro te gritaba a la distancia pero tu solo podias pensar en pasar la prueba." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[- 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint - 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();
                } // -10

                cout << "¡Sabotaje sorpresa!" << endl;
                cout << "EVENTO: Todos tienen que ir a oxigeno, pero puedes notar como Negro batalla con ingresar el codigo" << endl; // cambiar color
                cout << "¿Que haces?" << endl;
                cout << "1. Le das palmaditas en la espalda para que sepa que lo esta haciendo bien." << endl;
                cout << "2. Le gritas que no es tan dificil." << endl;
                cin >> d6;

                if (d6 = 1)
                {
                    cout << "HAS DECIDIDO ANIMAR." << endl;
                    cout << "Negro te sonrie al sentir tus palmaditas. Despues de otro intento logra pasarlo." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[+ 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint + 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();

                } // +10

                else
                {
                    cout << "HAS DECIDIDO GRITAR." << endl;
                    cout << "Le gritas que no es tan dificil y que se apure. Esto no ayuda a Negro." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[- 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint - 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();
                } // -10

                cout << "Despues de un arduo dia de trabajo, cada quien se va a su capsula." << endl;
                cout << "Mañana será otro dia." << endl;
                cout << "Asi termina tu 3era cita." << endl;
                cout << endl;
                cout << endl;
                cout << "LOGRO OBTENIDO: 3era cita." << endl;
                cout << "Current lovepoint: " << lovepoint << endl;
                cout << "Presiona cualquier tecla para continuar..." << endl;
                _getch(); // ------------------------------------------------------------------------------------------------------------------ FINALIZA 3ERA CITA

                cout << "4TA CITA" << endl; // --------------------------------------------------------------------------------- INICIA 4TA CITA
                cout << "Hoy toca dar capacitación a los menores de la nave." << endl;
                cout << "Dan un recorrido por todo el lugar, finalmente llegan a Administracion." << endl;
                cout << "EVENTO: Puedes ver como Negro comienza a sudar de pena y nervios cuando no logra pasar la tarjeta." << endl; // cambiar nombre
                cout << "¿Que haces?" << endl;
                cout << "1. Corro hacia ella y con delicadez le explico como." << endl;
                cout << "2. Llegas, le arrebatas la tarjeta y le dices que nuca se compre otra" << endl;
                cin >> d7;

                if (d7 = 1)
                {
                    cout << "HAS DECIDIDO EXPLICAR." << endl;
                    cout << "Rapidamente llegas y le explicas que debe ser despacio, pero no tanto." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[+ 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint + 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();

                } // +10

                else
                {
                    cout << "HAS DECIDIDO ARREBATAR." << endl;
                    cout << "Llegas, le arrebatas la tarjeta y lo haces tu. No sirve para nada." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[- 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint - 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();
                } // -10

                cout << "Van hacia electricidad para mostrar los circuitos y de la nada se va la luz." << endl;
                cout << "EVENTO: Negro te está abrazando porque tiene miedo." << endl; // cambiar color
                cout << "¿Que haces?" << endl;
                cout << "1. Lx abrazas de vuelta y le dices que todo esta bien." << endl;
                cout << "2. Lx apartas y le dices que no sea cobarde." << endl;
                cin >> d8;

                if (d6 = 1)
                {
                    cout << "HAS DECIDIDO ABRAZAR." << endl;
                    cout << "Negro deja de tener miedo y te sonrie." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[+ 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint + 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();

                } // +10

                else
                {
                    cout << "HAS DECIDIDO APARTAR." << endl;
                    cout << "Apartas a Negro y le dices que no sea cobarde en frente de todos los chicos de capacitación. Ouch." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[- 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint - 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();
                } // -10

                cout << "Despues de un arduo dia de trabajo, cada quien se va a su capsula." << endl;
                cout << "Mañana será otro dia." << endl;
                cout << "Asi termina tu 4ta cita." << endl;
                cout << endl;
                cout << endl;
                cout << "LOGRO OBTENIDO: 4ta cita." << endl;
                cout << "Current lovepoint: " << lovepoint << endl;
                cout << "Presiona cualquier tecla para continuar..." << endl;
                _getch(); // ------------------------------------------------------------------------------------------------------------------ FINALIZA 4ta CITA


                cout << "5TA CITA" << endl; // --------------------------------------------------------------------------------- INICIA 5TA CITA
                cout << "Como es la ultima cita que tendran, Negro decide intentar demostrar sus habilidades destruyendo asteroides." << endl; // cambiar nombre
                cout << "EVENTO: Realmente no tiene talento haciendolo..." << endl; 
                cout << "¿Que haces?" << endl;
                cout << "1. Le echo muchas porras y lx animo demasiado. ¡Asi se hace!" << endl;
                cout << "2. Te burlas y lx haces a un lado para humillarlo con tus habilidades." << endl;
                cin >> d9;

                if (d9 = 1)
                {
                    cout << "HAS DECIDIDO ANIMAR." << endl;
                    cout << "Negro se siente mas animada y empieza a atinarle a cada meteorito, en realidad si se le da." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[+ 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint + 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();

                } // +10

                else
                {
                    cout << "HAS DECIDIDO HUMILLAR." << endl;
                    cout << "Quitas a Negro de su asiento y te pones tu para humillarlx." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[- 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint - 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();
                } // -10

                cout << "Antes de terminar su jornada, deciden ayudar a tirar la basura por las escotillas." << endl;
                cout << "¿Que quieres hacer?" << endl;
                cout << "1. Le ayudas en lo que puedes." << endl;
                cout << "2. Lx cargas y finges que lo vas a echar como si fuera basura." << endl;
                cin >> d10;

                if (d10 = 1)
                {
                    cout << "HAS DECIDIDO APOYAR." << endl;
                    cout << "Negro agradece tu ayuda y te sonrie" << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[+ 15 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint + 15 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();

                } // +15

                else
                {
                    cout << "HAS DECIDIDO CARGAR." << endl;
                    cout << "Le llegas por detras, lx cargas y Negro empieza a gritar del miedo. Definitivamente una broma de mal gusto." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[- 15 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint - 15 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();
                } // -15

                cout << "Despues de un arduo dia de trabajo, cada quien se va a su capsula." << endl;
                cout << "Mañana será otro dia." << endl;
                cout << "Asi termina tu 5ta cita." << endl;
                cout << endl;
                cout << endl;
                cout << "LOGRO OBTENIDO: 5ta cita." << endl;
                cout << "Current lovepoint: " << lovepoint << endl;
                cout << "Presiona cualquier tecla para continuar..." << endl;
                _getch(); // ------------------------------------------------------------------------------------------------------------------ FINALIZA 5ta CITA

                cout << "RESULTADOS:" << endl;
                cout << endl;
                cout << "Final lovepoint: " << lovepoint << endl;
                cout << endl;
                cout << endl;
                cout << "Presiona cualquier tecla para continuar..." << endl;
                _getch();
                cout << "EPILOGO" << endl; // ------------------------------------------------------------------------------------------------------------------ EPILOGO
                cout << endl;
                cout << endl;
                if ((lovepoint > 5) && (lovepoint < 20))
                {
                    cout << "Teminaron siendo conocidos. Si se ven en la nave se saludan pero nada más" << endl;
                    cout << endl;
                    cout << endl;
                    cout << "NEUTRAL ENDING ACHIEVED: Just Acquaintances." << endl;
                }

                else
                {
                    if ((lovepoint > 25) && (lovepoint < 40))
                    {
                        cout << "Teminaron siendo buenos compañeros de trabajo." << endl;
                        cout << endl;
                        cout << endl;
                        cout << "NEUTRAL ENDING ACHIEVED: Coworkers." << endl;
                    }

                    else
                    {
                        if ((lovepoint > 45) && (lovepoint < 60))
                        {
                            cout << "Teminaron siendo buenos amigos, platican constantemente." << endl;
                            cout << endl;
                            cout << endl;
                            cout << "GOOD ENDING ACHIEVED: Friends." << endl;
                        }

                        else
                        {
                            if ((lovepoint > 65) && (lovepoint < 75))
                            {
                                cout << "Teminaron siendo mejores amigos, salen siempre juntos a divertirse." << endl;
                                cout << endl;
                                cout << endl;
                                cout << "BETTER ENDING ACHIEVED: Best Friends." << endl;
                            }

                            else
                            {
                                if ((lovepoint > 80) && (lovepoint < 90))
                                {
                                    cout << "Teminaron siendo algo, definitivamente tuvieron mas citas despues." << endl;
                                    cout << endl;
                                    cout << endl;
                                    cout << "EVEN BETTER ENDING ACHIEVED: Dating." << endl;
                                }

                                else
                                {
                                    if ((lovepoint > 95) && (lovepoint = 100))
                                    {
                                        cout << "Teminaron siendo pareja, ahora se aman mucho." << endl;
                                        cout << endl;
                                        cout << endl;
                                        cout << "EVEN BETTER ENDING ACHIEVED: Partners." << endl;
                                    }
                                }
                            }
                        }
                    }
                }


            } // ruta de negro

            else
            {

                if (color = 2)
                {

                    cout << " << Lo lamento, estoy esperando a alguien. >> le dices." << endl;
                    cout << " << Sí creo que soy yo. >> Responde con una ligera risa." << endl;
                    cout << " << Oh, una disculpa. Me presento, soy " << name << " . Un placer conocerte. >>" << endl; // cambiar color
                    cout << " << El placer es mio, soy Rojo. >> " << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "LOGRO OBTENIDO: Mi nombre es Rojo" << endl; // cambiar color
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();

                    cout << "1ERA CITA" << endl; // --------------------------------------------------------------------------------- INICIA 1ERA CITA
                    cout << "Para conocerse mejor deciden comprar algo en la cafeteria." << endl;
                    cout << endl;
                    cout << "EVENTO: De regreso a la mesa, Rojo se tropieza y tira su café." << endl; // cambiar color
                    cout << "¿Qué haces?" << endl;
                    cout << "1. Le ayudo a levantarse y limpiar su ropa." << endl;
                    cout << "2. Obviamente me burlo, que tontx de su parte." << endl;
                    cin >> d1;

                    if (d1 = 1)
                    {
                        cout << "HAS DECIDIDO AYUDAR." << endl;
                        cout << "Ayudaste a Rojo a levantarse, definitivamente apreció el gesto." << endl; // cambiar color
                        cout << endl;
                        cout << endl;
                        cout << "[+ 10 lovepoint]" << endl;

                        cout << "Current lovepoint: " << lovepoint + 10 << endl;
                        cout << endl;
                        cout << endl;
                        cout << "Presiona cualquier tecla para continuar..." << endl;
                        _getch();

                    } // +10

                    else
                    {
                        cout << "HAS DECIDIDO BURLARTE." << endl;
                        cout << "Te burlaste de Rojo en frente de todos, definitivamente no le agradó que hicieras eso." << endl; // cambiar color
                        cout << endl;
                        cout << endl;
                        cout << "[- 10 lovepoint]" << endl;

                        cout << "Current lovepoint: " << lovepoint - 10 << endl;
                        cout << endl;
                        cout << endl;
                        cout << "Presiona cualquier tecla para continuar..." << endl;
                        _getch();
                    } // -10

                    cout << "Despues del pequeño accidente, logran llegar a su mesa. Ahi, comienzan a hablar sobre ustedes y a conocerse." << endl;
                    cout << endl;
                    cout << "EVENTO: En un punto de la conversación, intenta hacer un chiste pero resulta que este fue muy malo y no te dio mucha risa que digamos." << endl;
                    cout << "¿Qué haces?" << endl;
                    cout << "1. Te ries aun asi, crees que su risa es contagiosa." << endl;
                    cout << "2. Te le quedas viendo seriamente. No te causo gracia." << endl;
                    cin >> d2;

                    if (d2 = 1)
                    {
                        cout << "HAS DECIDIDO REIR." << endl;
                        cout << "Te reiste de su chiste por su risa es contagiosa, pasaron un buen rato." << endl;
                        cout << endl;
                        cout << endl;
                        cout << "[+ 10 lovepoint]" << endl;

                        cout << "Current lovepoint: " << lovepoint + 10 << endl;
                        cout << endl;
                        cout << endl;
                        cout << "Presiona cualquier tecla para continuar..." << endl;
                        _getch();

                    } // +10

                    else
                    {
                        cout << "HAS DECIDIDO NO REIR." << endl;
                        cout << "Silencio... Que incomodo." << endl; // cambiar color
                        cout << endl;
                        cout << endl;
                        cout << "[- 10 lovepoint]" << endl;

                        cout << "Current lovepoint: " << lovepoint - 10 << endl;
                        cout << endl;
                        cout << endl;
                        cout << "Presiona cualquier tecla para continuar..." << endl;
                        _getch();
                    } // -10

                    cout << "Despues de hablar otro rato, se despiden porque ya es muy tarde." << endl;
                    cout << "Asi termina tu 1era cita." << endl;
                    cout << endl;
                    cout << endl;
                    cout << "LOGRO OBTENIDO: 1era cita." << endl;
                    cout << "Current lovepoint: " << lovepoint << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch(); // ------------------------------------------------------------------------------------------------------------------ FINALIZA 1ERA CITA

                    cout << "2DA CITA" << endl; // --------------------------------------------------------------------------------- INICIA 2DA CITA
                    cout << "Rojo te invita a realizar tareas juntos en Reactor." << endl; //cambiar color
                    cout << "Accedes y te diriges hacia alla." << endl;
                    cout << "EVENTO: Cuando vas llegando, puedes ver que se le está complicando el Simón dice." << endl;
                    cout << "¿Que haces?" << endl;
                    cout << "1. Te acercas y te ofreces a ayudarle." << endl;
                    cout << "2. Pasas de largo y te vas a hacer lo tuyo." << endl;
                    cin >> d3;

                    if (d3 = 1)
                    {
                        cout << "HAS DECIDIDO AYUDAR." << endl;
                        cout << "Te acercaste con mucha delicadez y ofreciste tu ayuda. Rojo gustosx la aceptó y pudieron terminar con esa tarea facil." << endl; // cambiar color
                        cout << endl;
                        cout << endl;
                        cout << "[+ 10 lovepoint]" << endl;

                        cout << "Current lovepoint: " << lovepoint + 10 << endl;
                        cout << endl;
                        cout << endl;
                        cout << "Presiona cualquier tecla para continuar..." << endl;
                        _getch();

                    } // +10

                    else
                    {
                        cout << "HAS DECIDIDO IGNORAR." << endl;
                        cout << "Silencio... Que incomodo." << endl; // cambiar color
                        cout << endl;
                        cout << endl;
                        cout << "[- 10 lovepoint]" << endl;

                        cout << "Current lovepoint: " << lovepoint - 10 << endl;
                        cout << endl;
                        cout << endl;
                        cout << "Presiona cualquier tecla para continuar..." << endl;
                        _getch();
                    } // -10

                    cout << "Pasa algo de tiempo y de la nada sale el tema de los impostores." << endl;
                    cout << "EVENTO: Rojo menciona que no le gustan los lugar con alcantarillas debido a que impostores podrían estar cerca." << endl; // cambiar color
                    cout << "¿Que haces?" << endl;
                    cout << "1. Le das palmaditas en la espalda para que sepa que lo esta haciendo bien." << endl;
                    cout << "2. Apagas todas las luces y le haces una broma." << endl;
                    cin >> d4;

                    if (d4 = 1)
                    {
                        cout << "HAS DECIDIDO ANIMAR." << endl;
                        cout << "Rojo te sonrie al sentir tus palmaditas. Despues de otro intento logra pasarlo." << endl; // cambiar color
                        cout << endl;
                        cout << endl;
                        cout << "[+ 10 lovepoint]" << endl;

                        cout << "Current lovepoint: " << lovepoint + 10 << endl;
                        cout << endl;
                        cout << endl;
                        cout << "Presiona cualquier tecla para continuar..." << endl;
                        _getch();

                    } // +10

                    else
                    {
                        cout << "HAS DECIDIDO ASUSTAR." << endl;
                        cout << "Apagas las luces y espantas a Rojo, haciendole gritar." << endl; // cambiar color
                        cout << endl;
                        cout << endl;
                        cout << "[- 10 lovepoint]" << endl;

                        cout << "Current lovepoint: " << lovepoint - 10 << endl;
                        cout << endl;
                        cout << endl;
                        cout << "Presiona cualquier tecla para continuar..." << endl;
                        _getch();
                    } // -10

                    cout << "Despues de un arduo dia de trabajo, cada quien se va a su capsula." << endl;
                    cout << "Mañana será otro dia." << endl;
                    cout << "Asi termina tu 2da cita." << endl;
                    cout << endl;
                    cout << endl;
                    cout << "LOGRO OBTENIDO: 2da cita." << endl;
                    cout << "Current lovepoint: " << lovepoint << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch(); // ------------------------------------------------------------------------------------------------------------------ FINALIZA 2DA CITA

                    cout << "3ERA CITA" << endl; // --------------------------------------------------------------------------------- INICIA 3ERA CITA
                    cout << "Hoy es dia de simulacro contra impostores." << endl;
                    cout << "EVENTO: Un compañero con botarga de impostor los viene persiguiendo pero Rojo se tropieza." << endl; // cambiar nombre
                    cout << "¿Que haces?" << endl;
                    cout << "1. La ayudo rapido a levantarse y correr." << endl;
                    cout << "2. La dejas ahi." << endl;
                    cin >> d5;

                    if (d5 = 1)
                    {
                        cout << "HAS DECIDIDO AYUDAR." << endl;
                        cout << "Rapido le tendiste tu mano a Rojo, lo agradece." << endl; // cambiar color
                        cout << endl;
                        cout << endl;
                        cout << "[+ 10 lovepoint]" << endl;

                        cout << "Current lovepoint: " << lovepoint + 10 << endl;
                        cout << endl;
                        cout << endl;
                        cout << "Presiona cualquier tecla para continuar..." << endl;
                        _getch();

                    } // +10

                    else
                    {
                        cout << "HAS DECIDIDO ABANDONAR." << endl;
                        cout << "Rojo te gritaba a la distancia pero tu solo podias pensar en pasar la prueba." << endl; // cambiar color
                        cout << endl;
                        cout << endl;
                        cout << "[- 10 lovepoint]" << endl;

                        cout << "Current lovepoint: " << lovepoint - 10 << endl;
                        cout << endl;
                        cout << endl;
                        cout << "Presiona cualquier tecla para continuar..." << endl;
                        _getch();
                    } // -10

                    cout << "¡Sabotaje sorpresa!" << endl;
                    cout << "EVENTO: Todos tienen que ir a oxigeno, pero puedes notar como Rojo batalla con ingresar el codigo" << endl; // cambiar color
                    cout << "¿Que haces?" << endl;
                    cout << "1. Le das palmaditas en la espalda para que sepa que lo esta haciendo bien." << endl;
                    cout << "2. Le gritas que no es tan dificil." << endl;
                    cin >> d6;

                    if (d6 = 1)
                    {
                        cout << "HAS DECIDIDO ANIMAR." << endl;
                        cout << "Rojo te sonrie al sentir tus palmaditas. Despues de otro intento logra pasarlo." << endl; // cambiar color
                        cout << endl;
                        cout << endl;
                        cout << "[+ 10 lovepoint]" << endl;

                        cout << "Current lovepoint: " << lovepoint + 10 << endl;
                        cout << endl;
                        cout << endl;
                        cout << "Presiona cualquier tecla para continuar..." << endl;
                        _getch();

                    } // +10

                    else
                    {
                        cout << "HAS DECIDIDO GRITAR." << endl;
                        cout << "Le gritas que no es tan dificil y que se apure. Esto no ayuda a Rojo." << endl; // cambiar color
                        cout << endl;
                        cout << endl;
                        cout << "[- 10 lovepoint]" << endl;

                        cout << "Current lovepoint: " << lovepoint - 10 << endl;
                        cout << endl;
                        cout << endl;
                        cout << "Presiona cualquier tecla para continuar..." << endl;
                        _getch();
                    } // -10

                    cout << "Despues de un arduo dia de trabajo, cada quien se va a su capsula." << endl;
                    cout << "Mañana será otro dia." << endl;
                    cout << "Asi termina tu 3era cita." << endl;
                    cout << endl;
                    cout << endl;
                    cout << "LOGRO OBTENIDO: 3era cita." << endl;
                    cout << "Current lovepoint: " << lovepoint << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch(); // ------------------------------------------------------------------------------------------------------------------ FINALIZA 3ERA CITA

                    cout << "4TA CITA" << endl; // --------------------------------------------------------------------------------- INICIA 4TA CITA
                    cout << "Hoy toca dar capacitación a los menores de la nave." << endl;
                    cout << "Dan un recorrido por todo el lugar, finalmente llegan a Administracion." << endl;
                    cout << "EVENTO: Puedes ver como Rojo comienza a sudar de pena y nervios cuando no logra pasar la tarjeta." << endl; // cambiar nombre
                    cout << "¿Que haces?" << endl;
                    cout << "1. Corro hacia ella y con delicadez le explico como." << endl;
                    cout << "2. Llegas, le arrebatas la tarjeta y le dices que nuca se compre otra" << endl;
                    cin >> d7;

                    if (d7 = 1)
                    {
                        cout << "HAS DECIDIDO EXPLICAR." << endl;
                        cout << "Rapidamente llegas y le explicas que debe ser despacio, pero no tanto." << endl; // cambiar color
                        cout << endl;
                        cout << endl;
                        cout << "[+ 10 lovepoint]" << endl;

                        cout << "Current lovepoint: " << lovepoint + 10 << endl;
                        cout << endl;
                        cout << endl;
                        cout << "Presiona cualquier tecla para continuar..." << endl;
                        _getch();

                    } // +10

                    else
                    {
                        cout << "HAS DECIDIDO ARREBATAR." << endl;
                        cout << "Llegas, le arrebatas la tarjeta y lo haces tu. No sirve para nada." << endl; // cambiar color
                        cout << endl;
                        cout << endl;
                        cout << "[- 10 lovepoint]" << endl;

                        cout << "Current lovepoint: " << lovepoint - 10 << endl;
                        cout << endl;
                        cout << endl;
                        cout << "Presiona cualquier tecla para continuar..." << endl;
                        _getch();
                    } // -10

                    cout << "Van hacia electricidad para mostrar los circuitos y de la nada se va la luz." << endl;
                    cout << "EVENTO: Rojo te está abrazando porque tiene miedo." << endl; // cambiar color
                    cout << "¿Que haces?" << endl;
                    cout << "1. Lx abrazas de vuelta y le dices que todo esta bien." << endl;
                    cout << "2. Lx apartas y le dices que no sea cobarde." << endl;
                    cin >> d8;

                    if (d6 = 1)
                    {
                        cout << "HAS DECIDIDO ABRAZAR." << endl;
                        cout << "Rojo deja de tener miedo y te sonrie." << endl; // cambiar color
                        cout << endl;
                        cout << endl;
                        cout << "[+ 10 lovepoint]" << endl;

                        cout << "Current lovepoint: " << lovepoint + 10 << endl;
                        cout << endl;
                        cout << endl;
                        cout << "Presiona cualquier tecla para continuar..." << endl;
                        _getch();

                    } // +10

                    else
                    {
                        cout << "HAS DECIDIDO APARTAR." << endl;
                        cout << "Apartas a Rojo y le dices que no sea cobarde en frente de todos los chicos de capacitación. Ouch." << endl; // cambiar color
                        cout << endl;
                        cout << endl;
                        cout << "[- 10 lovepoint]" << endl;

                        cout << "Current lovepoint: " << lovepoint - 10 << endl;
                        cout << endl;
                        cout << endl;
                        cout << "Presiona cualquier tecla para continuar..." << endl;
                        _getch();
                    } // -10

                    cout << "Despues de un arduo dia de trabajo, cada quien se va a su capsula." << endl;
                    cout << "Mañana será otro dia." << endl;
                    cout << "Asi termina tu 4ta cita." << endl;
                    cout << endl;
                    cout << endl;
                    cout << "LOGRO OBTENIDO: 4ta cita." << endl;
                    cout << "Current lovepoint: " << lovepoint << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch(); // ------------------------------------------------------------------------------------------------------------------ FINALIZA 4ta CITA


                    cout << "5TA CITA" << endl; // --------------------------------------------------------------------------------- INICIA 5TA CITA
                    cout << "Como es la ultima cita que tendran, Rojo decide intentar demostrar sus habilidades destruyendo asteroides." << endl; // cambiar nombre
                    cout << "EVENTO: Realmente no tiene talento haciendolo..." << endl;
                    cout << "¿Que haces?" << endl;
                    cout << "1. Le echo muchas porras y lx animo demasiado. ¡Asi se hace!" << endl;
                    cout << "2. Te burlas y lx haces a un lado para humillarlo con tus habilidades." << endl;
                    cin >> d9;

                    if (d9 = 1)
                    {
                        cout << "HAS DECIDIDO ANIMAR." << endl;
                        cout << "Rojo se siente mas animada y empieza a atinarle a cada meteorito, en realidad si se le da." << endl; // cambiar color
                        cout << endl;
                        cout << endl;
                        cout << "[+ 10 lovepoint]" << endl;

                        cout << "Current lovepoint: " << lovepoint + 10 << endl;
                        cout << endl;
                        cout << endl;
                        cout << "Presiona cualquier tecla para continuar..." << endl;
                        _getch();

                    } // +10

                    else
                    {
                        cout << "HAS DECIDIDO HUMILLAR." << endl;
                        cout << "Quitas a Rojo de su asiento y te pones tu para humillarlx." << endl; // cambiar color
                        cout << endl;
                        cout << endl;
                        cout << "[- 10 lovepoint]" << endl;

                        cout << "Current lovepoint: " << lovepoint - 10 << endl;
                        cout << endl;
                        cout << endl;
                        cout << "Presiona cualquier tecla para continuar..." << endl;
                        _getch();
                    } // -10

                    cout << "Antes de terminar su jornada, deciden ayudar a tirar la basura por las escotillas." << endl;
                    cout << "¿Que quieres hacer?" << endl;
                    cout << "1. Le ayudas en lo que puedes." << endl;
                    cout << "2. Lx cargas y finges que lo vas a echar como si fuera basura." << endl;
                    cin >> d10;

                    if (d10 = 1)
                    {
                        cout << "HAS DECIDIDO APOYAR." << endl;
                        cout << "Rojo agradece tu ayuda y te sonrie" << endl; // cambiar color
                        cout << endl;
                        cout << endl;
                        cout << "[+ 15 lovepoint]" << endl;

                        cout << "Current lovepoint: " << lovepoint + 15 << endl;
                        cout << endl;
                        cout << endl;
                        cout << "Presiona cualquier tecla para continuar..." << endl;
                        _getch();

                    } // +15

                    else
                    {
                        cout << "HAS DECIDIDO CARGAR." << endl;
                        cout << "Le llegas por detras, lx cargas y Rojo empieza a gritar del miedo. Definitivamente una broma de mal gusto." << endl; // cambiar color
                        cout << endl;
                        cout << endl;
                        cout << "[- 15 lovepoint]" << endl;

                        cout << "Current lovepoint: " << lovepoint - 15 << endl;
                        cout << endl;
                        cout << endl;
                        cout << "Presiona cualquier tecla para continuar..." << endl;
                        _getch();
                    } // -15

                    cout << "Despues de un arduo dia de trabajo, cada quien se va a su capsula." << endl;
                    cout << "Mañana será otro dia." << endl;
                    cout << "Asi termina tu 5ta cita." << endl;
                    cout << endl;
                    cout << endl;
                    cout << "LOGRO OBTENIDO: 5ta cita." << endl;
                    cout << "Current lovepoint: " << lovepoint << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch(); // ------------------------------------------------------------------------------------------------------------------ FINALIZA 5ta CITA

                    cout << "RESULTADOS:" << endl;
                    cout << endl;
                    cout << "Final lovepoint: " << lovepoint << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();
                    cout << "EPILOGO" << endl; // ------------------------------------------------------------------------------------------------------------------ EPILOGO
                    cout << endl;
                    cout << endl;
                    if ((lovepoint > 5) && (lovepoint < 20))
                    {
                        cout << "Teminaron siendo conocidos. Si se ven en la nave se saludan pero nada más" << endl;
                        cout << endl;
                        cout << endl;
                        cout << "NEUTRAL ENDING ACHIEVED: Just Acquaintances." << endl;
                    }

                    else
                    {
                        if ((lovepoint > 25) && (lovepoint < 40))
                        {
                            cout << "Teminaron siendo buenos compañeros de trabajo." << endl;
                            cout << endl;
                            cout << endl;
                            cout << "NEUTRAL ENDING ACHIEVED: Coworkers." << endl;
                        }

                        else
                        {
                            if ((lovepoint > 45) && (lovepoint < 60))
                            {
                                cout << "Teminaron siendo buenos amigos, platican constantemente." << endl;
                                cout << endl;
                                cout << endl;
                                cout << "GOOD ENDING ACHIEVED: Friends." << endl;
                            }

                            else
                            {
                                if ((lovepoint > 65) && (lovepoint < 75))
                                {
                                    cout << "Teminaron siendo mejores amigos, salen siempre juntos a divertirse." << endl;
                                    cout << endl;
                                    cout << endl;
                                    cout << "BETTER ENDING ACHIEVED: Best Friends." << endl;
                                }

                                else
                                {
                                    if ((lovepoint > 80) && (lovepoint < 90))
                                    {
                                        cout << "Teminaron siendo algo, definitivamente tuvieron mas citas despues." << endl;
                                        cout << endl;
                                        cout << endl;
                                        cout << "EVEN BETTER ENDING ACHIEVED: Dating." << endl;
                                    }

                                    else
                                    {
                                        if ((lovepoint > 95) && (lovepoint = 100))
                                        {
                                            cout << "Teminaron siendo pareja, ahora se aman mucho." << endl;
                                            cout << endl;
                                            cout << endl;
                                            cout << "EVEN BETTER ENDING ACHIEVED: Partners." << endl;
                                        }
                                    }
                                }
                            }
                        }
                    }


                } // ruta de rojo

                else
                {

                cout << " << Lo lamento, estoy esperando a alguien. >> le dices." << endl;
                cout << " << Sí creo que soy yo. >> Responde con una ligera risa." << endl;
                cout << " << Oh, una disculpa. Me presento, soy " << name << " . Un placer conocerte. >>" << endl; // cambiar color
                cout << " << El placer es mio, soy Verde. >> " << endl; // cambiar color
                cout << endl;
                cout << endl;
                cout << "LOGRO OBTENIDO: Mi nombre es Verde" << endl; // cambiar color
                cout << "Presiona cualquier tecla para continuar..." << endl;
                _getch();

                cout << "1ERA CITA" << endl; // --------------------------------------------------------------------------------- INICIA 1ERA CITA
                cout << "Para conocerse mejor deciden comprar algo en la cafeteria." << endl;
                cout << endl;
                cout << "EVENTO: De regreso a la mesa, Verde se tropieza y tira su café." << endl; // cambiar color
                cout << "¿Qué haces?" << endl;
                cout << "1. Le ayudo a levantarse y limpiar su ropa." << endl;
                cout << "2. Obviamente me burlo, que tontx de su parte." << endl;
                cin >> d1;

                if (d1 = 1)
                {
                    cout << "HAS DECIDIDO AYUDAR." << endl;
                    cout << "Ayudaste a Verde a levantarse, definitivamente apreció el gesto." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[+ 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint + 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();

                } // +10

                else
                {
                    cout << "HAS DECIDIDO BURLARTE." << endl;
                    cout << "Te burlaste de Verde en frente de todos, definitivamente no le agradó que hicieras eso." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[- 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint - 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();
                } // -10

                cout << "Despues del pequeño accidente, logran llegar a su mesa. Ahi, comienzan a hablar sobre ustedes y a conocerse." << endl;
                cout << endl;
                cout << "EVENTO: En un punto de la conversación, intenta hacer un chiste pero resulta que este fue muy malo y no te dio mucha risa que digamos." << endl;
                cout << "¿Qué haces?" << endl;
                cout << "1. Te ries aun asi, crees que su risa es contagiosa." << endl;
                cout << "2. Te le quedas viendo seriamente. No te causo gracia." << endl;
                cin >> d2;

                if (d2 = 1)
                {
                    cout << "HAS DECIDIDO REIR." << endl;
                    cout << "Te reiste de su chiste por su risa es contagiosa, pasaron un buen rato." << endl;
                    cout << endl;
                    cout << endl;
                    cout << "[+ 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint + 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();

                } // +10

                else
                {
                    cout << "HAS DECIDIDO NO REIR." << endl;
                    cout << "Silencio... Que incomodo." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[- 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint - 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();
                } // -10

                cout << "Despues de hablar otro rato, se despiden porque ya es muy tarde." << endl;
                cout << "Asi termina tu 1era cita." << endl;
                cout << endl;
                cout << endl;
                cout << "LOGRO OBTENIDO: 1era cita." << endl;
                cout << "Current lovepoint: " << lovepoint << endl;
                cout << "Presiona cualquier tecla para continuar..." << endl;
                _getch(); // ------------------------------------------------------------------------------------------------------------------ FINALIZA 1ERA CITA

                cout << "2DA CITA" << endl; // --------------------------------------------------------------------------------- INICIA 2DA CITA
                cout << "Verde te invita a realizar tareas juntos en Reactor." << endl; //cambiar color
                cout << "Accedes y te diriges hacia alla." << endl;
                cout << "EVENTO: Cuando vas llegando, puedes ver que se le está complicando el Simón dice." << endl;
                cout << "¿Que haces?" << endl;
                cout << "1. Te acercas y te ofreces a ayudarle." << endl;
                cout << "2. Pasas de largo y te vas a hacer lo tuyo." << endl;
                cin >> d3;

                if (d3 = 1)
                {
                    cout << "HAS DECIDIDO AYUDAR." << endl;
                    cout << "Te acercaste con mucha delicadez y ofreciste tu ayuda. Verde gustosx la aceptó y pudieron terminar con esa tarea facil." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[+ 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint + 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();

                } // +10

                else
                {
                    cout << "HAS DECIDIDO IGNORAR." << endl;
                    cout << "Silencio... Que incomodo." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[- 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint - 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();
                } // -10

                cout << "Pasa algo de tiempo y de la nada sale el tema de los impostores." << endl;
                cout << "EVENTO: Verde menciona que no le gustan los lugar con alcantarillas debido a que impostores podrían estar cerca." << endl; // cambiar color
                cout << "¿Que haces?" << endl;
                cout << "1. Le das palmaditas en la espalda para que sepa que lo esta haciendo bien." << endl;
                cout << "2. Apagas todas las luces y le haces una broma." << endl;
                cin >> d4;

                if (d4 = 1)
                {
                    cout << "HAS DECIDIDO ANIMAR." << endl;
                    cout << "Verde te sonrie al sentir tus palmaditas. Despues de otro intento logra pasarlo." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[+ 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint + 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();

                } // +10

                else
                {
                    cout << "HAS DECIDIDO ASUSTAR." << endl;
                    cout << "Apagas las luces y espantas a Verde, haciendole gritar." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[- 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint - 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();
                } // -10

                cout << "Despues de un arduo dia de trabajo, cada quien se va a su capsula." << endl;
                cout << "Mañana será otro dia." << endl;
                cout << "Asi termina tu 2da cita." << endl;
                cout << endl;
                cout << endl;
                cout << "LOGRO OBTENIDO: 2da cita." << endl;
                cout << "Current lovepoint: " << lovepoint << endl;
                cout << "Presiona cualquier tecla para continuar..." << endl;
                _getch(); // ------------------------------------------------------------------------------------------------------------------ FINALIZA 2DA CITA

                cout << "3ERA CITA" << endl; // --------------------------------------------------------------------------------- INICIA 3ERA CITA
                cout << "Hoy es dia de simulacro contra impostores." << endl;
                cout << "EVENTO: Un compañero con botarga de impostor los viene persiguiendo pero Verde se tropieza." << endl; // cambiar nombre
                cout << "¿Que haces?" << endl;
                cout << "1. La ayudo rapido a levantarse y correr." << endl;
                cout << "2. La dejas ahi." << endl;
                cin >> d5;

                if (d5 = 1)
                {
                    cout << "HAS DECIDIDO AYUDAR." << endl;
                    cout << "Rapido le tendiste tu mano a Verde, lo agradece." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[+ 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint + 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();

                } // +10

                else
                {
                    cout << "HAS DECIDIDO ABANDONAR." << endl;
                    cout << "Verde te gritaba a la distancia pero tu solo podias pensar en pasar la prueba." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[- 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint - 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();
                } // -10

                cout << "¡Sabotaje sorpresa!" << endl;
                cout << "EVENTO: Todos tienen que ir a oxigeno, pero puedes notar como Verde batalla con ingresar el codigo" << endl; // cambiar color
                cout << "¿Que haces?" << endl;
                cout << "1. Le das palmaditas en la espalda para que sepa que lo esta haciendo bien." << endl;
                cout << "2. Le gritas que no es tan dificil." << endl;
                cin >> d6;

                if (d6 = 1)
                {
                    cout << "HAS DECIDIDO ANIMAR." << endl;
                    cout << "Verde te sonrie al sentir tus palmaditas. Despues de otro intento logra pasarlo." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[+ 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint + 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();

                } // +10

                else
                {
                    cout << "HAS DECIDIDO GRITAR." << endl;
                    cout << "Le gritas que no es tan dificil y que se apure. Esto no ayuda a Verde." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[- 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint - 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();
                } // -10

                cout << "Despues de un arduo dia de trabajo, cada quien se va a su capsula." << endl;
                cout << "Mañana será otro dia." << endl;
                cout << "Asi termina tu 3era cita." << endl;
                cout << endl;
                cout << endl;
                cout << "LOGRO OBTENIDO: 3era cita." << endl;
                cout << "Current lovepoint: " << lovepoint << endl;
                cout << "Presiona cualquier tecla para continuar..." << endl;
                _getch(); // ------------------------------------------------------------------------------------------------------------------ FINALIZA 3ERA CITA

                cout << "4TA CITA" << endl; // --------------------------------------------------------------------------------- INICIA 4TA CITA
                cout << "Hoy toca dar capacitación a los menores de la nave." << endl;
                cout << "Dan un recorrido por todo el lugar, finalmente llegan a Administracion." << endl;
                cout << "EVENTO: Puedes ver como Verde comienza a sudar de pena y nervios cuando no logra pasar la tarjeta." << endl; // cambiar nombre
                cout << "¿Que haces?" << endl;
                cout << "1. Corro hacia ella y con delicadez le explico como." << endl;
                cout << "2. Llegas, le arrebatas la tarjeta y le dices que nuca se compre otra" << endl;
                cin >> d7;

                if (d7 = 1)
                {
                    cout << "HAS DECIDIDO EXPLICAR." << endl;
                    cout << "Rapidamente llegas y le explicas que debe ser despacio, pero no tanto." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[+ 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint + 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();

                } // +10

                else
                {
                    cout << "HAS DECIDIDO ARREBATAR." << endl;
                    cout << "Llegas, le arrebatas la tarjeta y lo haces tu. No sirve para nada." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[- 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint - 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();
                } // -10

                cout << "Van hacia electricidad para mostrar los circuitos y de la nada se va la luz." << endl;
                cout << "EVENTO: Verde te está abrazando porque tiene miedo." << endl; // cambiar color
                cout << "¿Que haces?" << endl;
                cout << "1. Lx abrazas de vuelta y le dices que todo esta bien." << endl;
                cout << "2. Lx apartas y le dices que no sea cobarde." << endl;
                cin >> d8;

                if (d6 = 1)
                {
                    cout << "HAS DECIDIDO ABRAZAR." << endl;
                    cout << "Verde deja de tener miedo y te sonrie." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[+ 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint + 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();

                } // +10

                else
                {
                    cout << "HAS DECIDIDO APARTAR." << endl;
                    cout << "Apartas a Verde y le dices que no sea cobarde en frente de todos los chicos de capacitación. Ouch." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[- 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint - 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();
                } // -10

                cout << "Despues de un arduo dia de trabajo, cada quien se va a su capsula." << endl;
                cout << "Mañana será otro dia." << endl;
                cout << "Asi termina tu 4ta cita." << endl;
                cout << endl;
                cout << endl;
                cout << "LOGRO OBTENIDO: 4ta cita." << endl;
                cout << "Current lovepoint: " << lovepoint << endl;
                cout << "Presiona cualquier tecla para continuar..." << endl;
                _getch(); // ------------------------------------------------------------------------------------------------------------------ FINALIZA 4ta CITA


                cout << "5TA CITA" << endl; // --------------------------------------------------------------------------------- INICIA 5TA CITA
                cout << "Como es la ultima cita que tendran, Verde decide intentar demostrar sus habilidades destruyendo asteroides." << endl; // cambiar nombre
                cout << "EVENTO: Realmente no tiene talento haciendolo..." << endl;
                cout << "¿Que haces?" << endl;
                cout << "1. Le echo muchas porras y lx animo demasiado. ¡Asi se hace!" << endl;
                cout << "2. Te burlas y lx haces a un lado para humillarlo con tus habilidades." << endl;
                cin >> d9;

                if (d9 = 1)
                {
                    cout << "HAS DECIDIDO ANIMAR." << endl;
                    cout << "Verde se siente mas animada y empieza a atinarle a cada meteorito, en realidad si se le da." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[+ 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint + 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();

                } // +10

                else
                {
                    cout << "HAS DECIDIDO HUMILLAR." << endl;
                    cout << "Quitas a Verde de su asiento y te pones tu para humillarlx." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[- 10 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint - 10 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();
                } // -10

                cout << "Antes de terminar su jornada, deciden ayudar a tirar la basura por las escotillas." << endl;
                cout << "¿Que quieres hacer?" << endl;
                cout << "1. Le ayudas en lo que puedes." << endl;
                cout << "2. Lx cargas y finges que lo vas a echar como si fuera basura." << endl;
                cin >> d10;

                if (d10 = 1)
                {
                    cout << "HAS DECIDIDO APOYAR." << endl;
                    cout << "Verde agradece tu ayuda y te sonrie" << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[+ 15 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint + 15 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();

                } // +15

                else
                {
                    cout << "HAS DECIDIDO CARGAR." << endl;
                    cout << "Le llegas por detras, lx cargas y Negro empieza a gritar del miedo. Definitivamente una broma de mal gusto." << endl; // cambiar color
                    cout << endl;
                    cout << endl;
                    cout << "[- 15 lovepoint]" << endl;

                    cout << "Current lovepoint: " << lovepoint - 15 << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Presiona cualquier tecla para continuar..." << endl;
                    _getch();
                } // -15

                cout << "Despues de un arduo dia de trabajo, cada quien se va a su capsula." << endl;
                cout << "Mañana será otro dia." << endl;
                cout << "Asi termina tu 5ta cita." << endl;
                cout << endl;
                cout << endl;
                cout << "LOGRO OBTENIDO: 5ta cita." << endl;
                cout << "Current lovepoint: " << lovepoint << endl;
                cout << "Presiona cualquier tecla para continuar..." << endl;
                _getch(); // ------------------------------------------------------------------------------------------------------------------ FINALIZA 5ta CITA

                cout << "RESULTADOS:" << endl;
                cout << endl;
                cout << "Final lovepoint: " << lovepoint << endl;
                cout << endl;
                cout << endl;
                cout << "Presiona cualquier tecla para continuar..." << endl;
                _getch();
                cout << "EPILOGO" << endl; // ------------------------------------------------------------------------------------------------------------------ EPILOGO
                cout << endl;
                cout << endl;
                if ((lovepoint > 5) && (lovepoint < 20))
                {
                    cout << "Teminaron siendo conocidos. Si se ven en la nave se saludan pero nada más" << endl;
                    cout << endl;
                    cout << endl;
                    cout << "NEUTRAL ENDING ACHIEVED: Just Acquaintances." << endl;
                }

                else
                {
                    if ((lovepoint > 25) && (lovepoint < 40))
                    {
                        cout << "Teminaron siendo buenos compañeros de trabajo." << endl;
                        cout << endl;
                        cout << endl;
                        cout << "NEUTRAL ENDING ACHIEVED: Coworkers." << endl;
                    }

                    else
                    {
                        if ((lovepoint > 45) && (lovepoint < 60))
                        {
                            cout << "Teminaron siendo buenos amigos, platican constantemente." << endl;
                            cout << endl;
                            cout << endl;
                            cout << "GOOD ENDING ACHIEVED: Friends." << endl;
                        }

                        else
                        {
                            if ((lovepoint > 65) && (lovepoint < 75))
                            {
                                cout << "Teminaron siendo mejores amigos, salen siempre juntos a divertirse." << endl;
                                cout << endl;
                                cout << endl;
                                cout << "BETTER ENDING ACHIEVED: Best Friends." << endl;
                            }

                            else
                            {
                                if ((lovepoint > 80) && (lovepoint < 90))
                                {
                                    cout << "Teminaron siendo algo, definitivamente tuvieron mas citas despues." << endl;
                                    cout << endl;
                                    cout << endl;
                                    cout << "EVEN BETTER ENDING ACHIEVED: Dating." << endl;
                                }

                                else
                                {
                                    if ((lovepoint > 95) && (lovepoint = 100))
                                    {
                                        cout << "Teminaron siendo pareja, ahora se aman mucho." << endl;
                                        cout << endl;
                                        cout << endl;
                                        cout << "EVEN BETTER ENDING ACHIEVED: Partners." << endl;
                                    }
                                }
                            }
                        }
                    }
                }



                } // ruta de verde

            }


        } while (lovepoint != 0); // mientras los love points no sean iguales a 0, el juego continuará corriendo.

        cout << "Tus lovepoint han llegado a un estado crítico." << endl;

        if (color = 1)
        {

            cout << "De la nada Negro dejó de hablarte o buscarte." << endl;
            cout << "No estará evitándote... ¿verdad?" << endl;
            cout << " " << endl;
            cout << "BAD ENDING: Te ghostearon." << endl;

            return 0;
        } // ghosteado por negro

        else
        {

            if (color = 2)
            {

                cout << "De la nada Rojo dejó de hablarte o buscarte." << endl;
                cout << "No estará evitándote... ¿verdad?" << endl;
                cout << " " << endl;
                cout << "BAD ENDING: Te ghostearon." << endl;

                return 0;
            } // ghosteado por rojo

            else
            {

                cout << "De la nada Verde dejó de hablarte o buscarte." << endl;
                cout << "No estará evitándote... ¿verdad?" << endl;
                cout << " " << endl;
                cout << "BAD ENDING: Te ghostearon." << endl;


                return 0;
            } // ghosteado por verde

        }

        cout << "¡Gracias por jugar!" << endl;

}
