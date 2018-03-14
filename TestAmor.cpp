#include <iostream>
using namespace std;

//Es la funcion que llama a la presentacion
void Presentacion(){
    int enter;

    cout << " - - - - - - - - - - - - - -" << endl;
    cout << "| QUE CLASE DE AMOR SIENTO? |" << endl;
    cout << " - - - - - - - - - - - - - -" << endl;

    cout << "\nEste test indicara que forma tienes de sentir el amor.\nPiensa en una persona de la que estas enamorado o de la\nque has estado en un pasado." << endl;
    cout << "\nBasandose en ese amor, responda a las siguientes preguntas de forma\nsincera, respondiendo con un numero del 1 al 5, donde cada numero significa lo siguiente: " << endl;
    cout << "\n1: Completamente de acuerdo" << endl;
    cout << "2: Moderadamente de acuerdo" << endl;
    cout << "3: Ni de acuerdo ni en desacuerdo" << endl;
    cout << "4: Moderadamente en desacuerdo" << endl;
    cout << "5: Completamente en desacuerdo" << endl;

}
//Este metodo sirve para limpiar la pantalla antes de mostrar el nuevo texto.
void LimpiarPantalla(){
    cout << string(50, '\n');
    Presentacion();
}

//Esta funcion permite introducir las respuestas y calcula tu tipo de amor cada vez
void IntroducirDato(int &pregunta, int &eros, int &ludus, int &compromiso, int &pragma, int &mania, int &agape){
    int dato;
    do{
        cout << "> ";
        cin >> dato;
        if (dato < 1 || dato > 5){
            cout << "Por favor, solo valores del 1 al 5" << endl;
            cout << endl;
        }
    } while (dato < 1 || dato > 5);

    if (pregunta >= 36 && pregunta <= 43){
        agape += dato;
        pregunta++;
        LimpiarPantalla();
        return;
    }

    else if (pregunta >= 29 && pregunta <= 36){
        mania += dato;
        pregunta++;
        LimpiarPantalla();
        return;
    }

    else if (pregunta >= 22 && pregunta <= 29){
        pragma += dato;
        pregunta++;
        LimpiarPantalla();
        return;
    }

    else if (pregunta >= 15 && pregunta <= 22){
        compromiso += dato;
        pregunta++;
        LimpiarPantalla();
        return;
    }

    else if (pregunta >= 8 && pregunta <= 15){
        ludus += dato;
        pregunta++;
        LimpiarPantalla();
        return;
    }

    else if (pregunta <= 7){
        eros += dato;
        pregunta++;
        LimpiarPantalla();
        return;
    }


}

//Funcion para mostrar pregunta
void PreguntaTipo(string textoPregunta, int pregunta){
    cout << string(7, '\n');
    cout << "PREGUNTA " << pregunta << ": " << endl;
    cout << textoPregunta << endl;
    cout << "\n|Introduce un numero del 1 al 5 segun los parametros indicados.|" << endl;
    cout << endl;
}

//Muestra la pregunta correspondiente
void Pregunta(int pregunta){
    switch (pregunta){
    case 1:
        PreguntaTipo("La persona que quiero y yo nos sentimos atraidos inmediatamente en cuanto nos vimos la primera vez.", pregunta);
        break;

    case 2:
        PreguntaTipo("Entre la persona que quiero y yo hay 'quimica'.", pregunta);
        break;

    case 3:
        PreguntaTipo("Nuestra forma de amarnos es muy intensa y satisfactoria.", pregunta);
        break;

    case 4:
        PreguntaTipo("Siento que mi pareja y yo estamos destinados el uno para el otro.", pregunta);
        break;

    case 5:
        PreguntaTipo("Mi pareja y yo nos sentimos implicados emocionalmente con rapidez.", pregunta);
        break;

    case 6:
        PreguntaTipo("Mi pareja y yo realmente nos comprendemos el uno al otro.", pregunta);
        break;

    case 7:
        PreguntaTipo("Mi pareja se ajusta a mi ideal de belleza fisica.", pregunta);
        break;

    case 8:
        PreguntaTipo("Intento mantener a mi pareja con algo de incertidumbre acerca de mi compromiso hacia ella.", pregunta);
        break;

    case 9:
        PreguntaTipo("Creo que lo que mi pareja desconozca sobre mi no le herira.", pregunta);
        break;

    case 10:
        PreguntaTipo("A veces he tenido relaciones sentimentales con dos personas.", pregunta);
        break;

    case 11:
        PreguntaTipo("Generalmente salgo de los asuntos amorosos con facilidad y rapidez.", pregunta);
        break;

    case 12:
        PreguntaTipo("Mi pareja se molestaria si conociera algunas de las cosas que he hecho con otras personas.", pregunta);
        break;

    case 13:
        PreguntaTipo("Cuando mi pareja se hace demasiado dependiente de mi, me retiro un poco de ella.", pregunta);
        break;

    case 14:
        PreguntaTipo("Me gusta jugar 'el juego del amor' con diferentes personas.", pregunta);
        break;

    case 15:
        PreguntaTipo("No caia en la cuenta de que estaba enamorado/a hasta que llevaba cierto tiempo en esa situacion.\n(Es dificil decir con exactitud donde acaba la amistad y donde empieza el amor).", pregunta);
        break;

    case 16:
        PreguntaTipo("No puedo amar si antes no ha habido carinio.", pregunta);
        break;

    case 17:
        PreguntaTipo("Todavia tengo buenos amigos entre las personas con quienes he mantenido relaciones amorosas.", pregunta);
        break;

    case 18:
        PreguntaTipo("La mejor relacion amorosa surge de una larga amistad.", pregunta);
        break;

    case 19:
        PreguntaTipo("Es dificl decir con exactitud cuando mi pareja y yo nos sentimos enamorados.", pregunta);
        break;

    case 20:
        PreguntaTipo("El amor es realmente una amistad profunda, no una emocion mistica o misteriosa.", pregunta);
        break;

    case 21:
        PreguntaTipo("Mi relacion amorosa mas satisfactoria ha surgido de una buena amistad.", pregunta);
        break;

    case 22:
        PreguntaTipo("Considero que llegara a ser una persona en la vida antes de comprometerme con ella.", pregunta);
        break;

    case 23:
        PreguntaTipo("Intento planificar mi vida con cuidado antes de elegir pareja.", pregunta);
        break;

    case 24:
        PreguntaTipo("Es lo mejor querer a alguien que venga de mi mismo medio social.", pregunta);
        break;

    case 25:
        PreguntaTipo("Una cuestion importante a la hora de elegir pareja es si ella perjudicaria a mi familia.", pregunta);
        break;

    case 26:
        PreguntaTipo("Una cuestion importante a la hora de elegir pareja es si tiene o no unos buenos padres.", pregunta);
        break;

    case 27:
        PreguntaTipo("Una cuestion a considerar a la hora de elegir pareja es si perjudicara o no a mi carrera.", pregunta);
        break;

    case 28:
        PreguntaTipo("Antes de implicarme mucho con una persona, intento averiguar si su herencia genetica es\ncompatible o no con la mia, en el caso de que decidamos tener hijos.", pregunta);
        break;

    case 29:
        PreguntaTipo("Cuando las cosas no van bien con mi pareja, mi estomago se resiente.", pregunta);
        break;

    case 30:
        PreguntaTipo("Cuando fracaso en los asuntos amorosos me siento tan deprimido/a que incluso he pensado en el suicidio", pregunta);
        break;

    case 31:
        PreguntaTipo("A veces estoy tan excitado/a cuando me enamoro que no puedo dormir.", pregunta);
        break;

    case 32:
        PreguntaTipo("Cuando mi pareja no me presta atencion me siento mal.", pregunta);
        break;

    case 33:
        PreguntaTipo("Cuando estoy enamorado/a tengo problemas para concentrarme en cualquier cosa.", pregunta);
        break;

    case 34:
        PreguntaTipo("No puedo relajarme si sospecho que mi pareja esta con otra persona.", pregunta);
        break;

    case 35:
        PreguntaTipo("Si mi pareja me ignora, a veces hago cosas estupidas solo por atraer su atencion.", pregunta);
        break;

    case 36:
        PreguntaTipo("Intento ayudar a mi pareja en los momentos dificiles.", pregunta);
        break;

    case 37:
        PreguntaTipo("Prefiero sufrir yo a que sufra mi pareja.", pregunta);
        break;

    case 38:
        PreguntaTipo("No puedo ser feliz si mi pareja no es feliz.", pregunta);
        break;

    case 39:
        PreguntaTipo("Generalmente sacrifico mis propios deseos para que mi pareja logre los suyos.", pregunta);
        break;

    case 40:
        PreguntaTipo("Todo lo que tengo esta a disposicion de mi pareja.", pregunta);
        break;

    case 41:
        PreguntaTipo("Incluso cuando mi pareja se pone furiosa conmigo, la quiero incondicionalmente.", pregunta);
        break;

    case 42:
        PreguntaTipo("Daria todo por mi pareja.", pregunta);
        break;
    }
}


int main (){
    string enter;
    int pregunta = 1, eros = 0, ludus = 0, compromiso = 0, pragma = 0, mania = 0, agape = 0;
    float mediaEros, mediaLudus, mediaCompromiso, mediaPragma, mediaMania, mediaAgape, menor;

    Presentacion();
    cout << "\nPulsa Enter cuando estes listx para empezar" << endl;
    cin.ignore();
    LimpiarPantalla();
    while (pregunta <= 42){
        Pregunta(pregunta);
        IntroducirDato(pregunta, eros, ludus, compromiso, pragma, mania, agape);
    }

    cout << string(50, '\n');
    cout << "- - - - - - - - - -HAS TERMINADO!- - - - - - - - - -" << endl;
    cout << "\nObserva tu puntuacion en cada tipo (tras la explicacion del tipo). El tipo de amor\nen el que tengas MENOR puntuacion es tu tipo de amor." << endl;
    cout << "Pulsa Enter para ver los resultados.";
    cout << string(25, '\n');
    getline(cin.ignore(), enter);

    mediaEros = ((float)eros/7);
    mediaLudus = ((float)ludus/7);
    mediaCompromiso = ((float)compromiso/7);
    mediaPragma = ((float)pragma/7);
    mediaMania = ((float)mania/7);
    mediaAgape = ((float)agape/7);

    cout << endl;
    cout << "\nEros: Es el amor apasionado. Suele tener una imagen de las cualidades\nfisicas que valora en la persona amada. Alta autoestima\ny confianza en si mismo/a. Se centra mucho en la persona amada, pero no es posesivo/a ni celoso/a.\nTU PUNTUACION: " << mediaEros << endl;
    cout << endl;
    cout << "Ludus: El amor como juego (D. Juan Tenorio). No hay fuertes vinculos emocionales.\nLas caracteristicas de la persona amada no son los determinantes fundamentales\nde la atraccion. El contacto frecuente es evitado. Hay ciertas dosis de\nenganio. Los celos y la posesividad no son caracteristicas esenciales.\nTU PUNTUACION: " << mediaLudus << endl;
    cout << endl;
    cout << "Compromiso: Afecto natural. Nos sentimos profundamente unidos a esa persona, la valoramos\ny compartimos con ella todo lo que tenemos. El tono emocional es mas moderado.\nTU PUNTUACION: " << mediaCompromiso << endl;
    cout << endl;
    cout << "Pragma: El amor a traves de computadora. Se tiene una lista de las cualidades que se\nvaloran en la persona que se va a amar. No hay excitacion ni drama.\nTU PUNTUACION: " << mediaPragma << endl;
    cout << endl;
    cout << "Mania: Quien ama de esta manera esta deseoso de amar, pero siempre encuentra en el amor\nalgo doloroso. Celoso. Padece sintomas fisicos. Cambios de animo.\nTU PUNTUACION: " << mediaMania << endl;
    cout << endl;
    cout << "Agape: Cuidado incondicional, la entrega completa al otro sin esperar nada a cambio.\nTU PUNTUACION: " << mediaAgape << endl;

    cout << "\nPULSA ENTER PARA CERRAR EL PROGRAMA.";
    cin.ignore();
}
