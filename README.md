# Tarea 5 Juan Francisco Gortarez

Para correr este programa, uno requiere tener descargada la versión más reciente de Qt, descargar el folder donde se encuentran los códigos, y abrir en Qt Creator el archivo .pro
Una vez ahi, en la parte inferior derecha darle clic a run.

Estoy subiendo dos códigos: uno en el cual vertí mi alma, sudor y lágrimas (tarea5v2) y otro que obtuve de internet (que me sospecho la gran mayoría entregara como propio). Si considera que lo que yo hice es deficiente (<90) por favor califique lo obtenido de internet como se lo calificaría a todas las personas que entregaron eso únicamente.
Me es muy importante no reprobar esta materia, dado que si ocurre estaré condicionado. Usted sabe que yo empecé a trabajar en esta tarea desde que la asignó, pero mi mejor esfuerzo no fue suficiente para tener todos los requisitos. Le pido clemencia y que no utilice la mentalidad 'ay pero no vas a reprobar'.
Dicho esto, aqui está la lista de issues conocidas en mi código:

* Cuando se intenta aplicar una rotación a un polígono de n lados, el programa crashea --> debido a QTransform.map() no compaginando con coordenadas negativas
* El arco tiene una línea cuando se dibuja en ocasiones posteriores al inicio --> idiosincracias del QPainterPath que pinta su recorrido desde el origen al punto de inicio del arco, el cual no pude obtener (si lo obtuviera, inicializaría el path allí)

Buen fin de semestre.


