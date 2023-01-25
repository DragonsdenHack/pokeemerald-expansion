Route10_MapScripts::
	.byte 0

Route10_1::
end



Route10_2::
end


Route10_3::
end


Route10_4::
end


Route10_5::
lock     
faceplayer     
msgbox Route5_Text_5, MSGBOX_DEFAULT
release     
end

Route5_Text_5:
.string "¿Tienes idea de lo que dices?\n"
.string "¡No hay ningún KANGASKHAN en este\l"
.string "lugar!\l"
.string "¿Sabes lo que ello implicaría?\l"
.string "¡La ZONA SAFARI cerraría, y no\l"
.string "solo eso, la gente se pondría a\l"
.string "investigar de dónde ha salido, un\l"
.string "POKÉMON así no sale de la nada!$"



Route10_6::
lock     
faceplayer     
msgbox Route5_Text_6, MSGBOX_DEFAULT
release     
end

Route5_Text_6:
.string "¡Te digo que he visto un\n"
.string "KANGASKHAN aquí dentro!$"


Route10_7::
lock     
faceplayer     
msgbox Route5_Text_7, MSGBOX_DEFAULT
release     
end

Route5_Text_7:
.string "La CENTRAL ENERGÍA ha sido\n"
.string "considerada patrimonio de nuestra\l"
.string "región, a partir de ahora será\l"
.string "protegida por las fuerzas del\l"
.string "orden y no estará abierta a la\l"
.string "exploración. Más te vale no\l"
.string "intentar ninguna estupidez, o el\l"
.string "peso de la justicia se cernirá\l"
.string "sobre ti.$"



Route10_8::
lock     
faceplayer     
msgbox Route5_Text_8, MSGBOX_DEFAULT
release     
end

Route5_Text_8:
.string "La CENTRAL ENERGÍA ha sido\n"
.string "considerada patrimonio de nuestra\l"
.string "región, a partir de ahora será\l"
.string "protegida por las fuerzas del\l"
.string "orden y no estará abierta a la\l"
.string "exploración. Más te vale no\l"
.string "intentar ninguna estupidez, o el\l"
.string "peso de la justicia se cernirá\l"
.string "sobre ti.$"


Route10_9::
end


Route10_10::
end


Route10_11::
end


Route10_12::
end


Route10_13::
end



Route10_EventScript_Chica::
	trainerbattle_single TRAINER_MATTHEW, Route10_Text_ChicaIntro, Route10_Text_ChicaDefeated
	msgbox Route10_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



Route10_EventScript_Hiker::
	trainerbattle_single TRAINER_BARRY, Route10_Text_HikerIntro, Route10_Text_HikerDefeated
	msgbox Route10_Text_HikerPostBattle, MSGBOX_AUTOCLOSE
	end



Route10_EventScript_Necio::
	trainerbattle_single TRAINER_DEAN, Route10_Text_NecioIntro, Route10_Text_NecioDefeated
	msgbox Route10_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



Route10_EventScript_Hiker2::
	trainerbattle_single TRAINER_DAISUKE, Route10_Text_Hiker2Intro, Route10_Text_Hiker2Defeated
	msgbox Route10_Text_Hiker2PostBattle, MSGBOX_AUTOCLOSE
	end



Route10_EventScript_Hiker3::
	trainerbattle_single TRAINER_YUJI, Route10_Text_Hiker3Intro, Route10_Text_Hiker3Defeated
	msgbox Route10_Text_Hiker3PostBattle, MSGBOX_AUTOCLOSE
	end



Route10_EventScript_Chica2::
	trainerbattle_single TRAINER_DAVID, Route10_Text_Chica2Intro, Route10_Text_Chica2Defeated
	msgbox Route10_Text_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



Route10Documento_100::
msgbox Route10Documento_Text_100, MSGBOX_SIGN   
end

Route10Documento_Text_100:
	.string "TÚNEL ROCA\n"
	.string "Desvío a PUEBLO LAVANDA$"



Route10Documento_101::
msgbox Route10Documento_Text_101, MSGBOX_SIGN   
end

Route10Documento_Text_101:
.string "CENTRAL ENERGÍA$"



Route10Documento_102::
msgbox Route10Documento_Text_102, MSGBOX_SIGN   
end

Route10Documento_Text_102:
.string "TÚNEL ROCA$"

Route10_Combate_Andra::
msgbox Route10_Combate_Andra_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route10_Combate_Andra_Texto_2 MSGBOX_AUTOCLOSE
msgbox Route10_Combate_Andra_Texto_3 MSGBOX_AUTOCLOSE
msgbox Route10_Combate_Andra_Texto_4 MSGBOX_AUTOCLOSE
msgbox Route10_Combate_Andra_Texto_5 MSGBOX_AUTOCLOSE
msgbox Route10_Combate_Andra_Texto_6 MSGBOX_AUTOCLOSE
msgbox Route10_Combate_Andra_Texto_7 MSGBOX_AUTOCLOSE
msgbox Route10_Combate_Andra_Texto_8 MSGBOX_AUTOCLOSE
msgbox Route10_Combate_Andra_Texto_9 MSGBOX_AUTOCLOSE
msgbox Route10_Combate_Andra_Texto_10 MSGBOX_AUTOCLOSE
msgbox Route10_Combate_Andra_Texto_11 MSGBOX_AUTOCLOSE
msgbox Route10_Combate_Andra_Texto_12 MSGBOX_AUTOCLOSE
release
end

Route10_Combate_Andra_Texto_1:
.string "ANDRA: ¡Hey {PLAYER}!\n"
	.string "¿Aprovechando tu merecido tiempo\l"
	.string "libre después de un buen trabajo?$"

Route10_Combate_Andra_Texto_2:
.string "Al parecer más al sur de esta\n"
	.string "ruta, cruzando el TÚNEL ROCA, se\l"
	.string "halla PUEBLO LAVANDA, conocido por\l"
	.string "su enorme cementerio y sus\l"
	.string "supuestos espíritus malignos,\l"
	.string "¿será cierta la leyenda?$"

Route10_Combate_Andra_Texto_3:
.string "La verdad que KANTO es más\n"
	.string "interesante de lo que pensaba, sin\l"
	.string "ir más lejos, mira ese lugar.$"

Route10_Combate_Andra_Texto_4:
.string "ANDRA: Se hace llamar CENTRAL\n"
	.string "ENERGÍA, está repleta de POKÉMON\l"
	.string "ELÉCTRICOS, yo misma he estado\l"
	.string "entrenando un buen rato allí hasta\l"
	.string "hace poco, es un lugar\l"
	.string "completamente abandonado, con\l"
	.string "VOLTORBS que explotan en tu cara,\l"
	.string "recipientes de acero con toda la\l"
	.string "pinta de ser radiactivos,\l"
	.string "MAGNEMITES y MAGNETON pululando\l"
	.string "alrededor de ellos...todo indica a\l"
	.string "que ciertas prácticas poco éticas\l"
	.string "se llevaron a cabo en este lugar\l"
	.string "en tiempos pretéritos, a saber con\l"
	.string "qué fin, sea como sea no he podido\l"
	.string "averiguar más, la policía llegó\l"
	.string "hace poco con una orden oficial de\l"
	.string "protección, guarda y custodia de\l"
	.string "la CENTRAL firmada por el COMITÉ\l"
	.string "DE LA LIGA, según ellos -con el\l"
	.string "fin de proteger los lugares más\l"
	.string "icónicos y la diversidad de\l"
	.string "especies de la región-, tiene\l"
	.string "gracia, seguro que después dejan\l"
	.string "campar a sus anchas por el lugar a\l"
	.string "cualquier crío de 10 años.$"

Route10_Combate_Andra_Texto_5:
.string "... ...$"

Route10_Combate_Andra_Texto_6:
.string "ANDRA: El caso es que ese lugar\n"
	.string "esconde algo, he notado una\l"
	.string "presencia muy potente en su\l"
	.string "interior, un ser capaz de generar\l"
	.string "energía casi infinita, ¿existirá\l"
	.string "un POKÉMON ELÉCTRICO de esas\l"
	.string "características?\l"
	.string "Si tan solo hubiera podido\l"
	.string "adentrarme un poco más...$"

Route10_Combate_Andra_Texto_7:
.string "Podríamos proponerle a GIOVANNI un\n"
	.string "asalto a la CENTRAL, a su debido\l"
	.string "tiempo claro, primero deberemos de\l"
	.string "demostrarle lo que valemos, pero\l"
	.string "un POKÉMON con esa presencia debe\l"
	.string "de ser muy fuerte, quizás nuestros\l"
	.string "superiores de KANTO sepan algo\l"
	.string "más.$"

Route10_Combate_Andra_Texto_8:
.string "Ahora que lo pienso, ya ha pasado\n"
	.string "bastante desde la última vez que\l"
	.string "combatimos, no hay duda de que has\l"
	.string "sobrepasado expectativas\l"
	.string "derrotando a nuestro entonces\l"
	.string "superior en el MT.MOON, también a\l"
	.string "BILL y después a un CAPITÁN con\l"
	.string "experiencia como el del SS.ANNE,\l"
	.string "pero...¿sabes qué?\l"
	.string "Yo no me he quedado atrás {PLAYER},\l"
	.string "te dije que sería la RECLUTA más\l"
	.string "fuerte de toda la organización y\l"
	.string "lo mantengo, ya somos RECLUTAS DE\l"
	.string "ALTO RANGO, la cuestión es, ¿¡qué\l"
	.string "RECLUTA DE ALTO RANGO es mejor\l"
	.string "ENTRENADOR?!$"

Route10_Combate_Andra_Texto_9:
.string "Entonces sigue sin ser suficiente,\n"
	.string "jejeje, gracias por elevar más el\l"
	.string "nivel.$"

Route10_Combate_Andra_Texto_10:
.string "ANDRA: No me gustaría tenerte como\n"
	.string "enemigo {PLAYER}, sigo sin entender\l"
	.string "como ese misterioso entrenador\l"
	.string "vestido de rojo pudo derrotarte en\l"
	.string "el MT.MOON, debe de ser un\l"
	.string "auténtico superdotado del combate.$"

Route10_Combate_Andra_Texto_11:
.string "Sea como sea, no importa, ese tipo\n"
	.string "no sabe con quién se mete, ahora\l"
	.string "que nos trasladan a AZULONA, el\l"
	.string "centro de operaciones del TEAM\l"
	.string "ROCKET, vamos a hacernos un lugar\l"
	.string "entre la élite del TEAM ROCKET.\l"
	.string "¡Ese pobre chico deseará no\l"
	.string "haberse metido con nosotros en el\l"
	.string "MT.MOON!$"

Route10_Combate_Andra_Texto_12:
.string "ANDRA: Bah, me vuelvo al cuartel\n"
	.string "{PLAYER}, la máquina\l"
	.string "teletransportadora debe de estar\l"
	.string "casi lista, ultima tus\l"
	.string "preparativos y no tardes:\l"
	.string "¡CIUDAD AZULONA ESPERA!$"

Route10_Combate_Andra_move_1:
walk_in_place_left
step_end

Route10_Combate_Andra_move_2:
emote_exclamation_mark
step_end

Route10_Combate_Andra_move_3:
walk_in_place_right
step_end

Route10_Combate_Andra_move_4:
walk_in_place_down
step_end

Route10_Combate_Andra_move_5:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
step_end

Route10_Combate_Andra_move_6:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
step_end

Route10_Combate_Andra_move_7:
walk_in_place_up
walk_in_place_right
step_end

Route10_Combate_Andra_move_8:
walk_up
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end
