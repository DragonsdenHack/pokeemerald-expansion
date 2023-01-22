SsAnne_6F_MapScripts::
	.byte 0

SsAnne6F_1::
end



SsAnne6F_2::
end



SsAnne6F_3::
end



SsAnne6F_4::
end



SsAnne6F_5::
lock     
faceplayer     
msgbox SsAnne5F_Text_5, MSGBOX_DEFAULT
release     
end

SsAnne5F_Text_5:
.string "Soy de los que les gusta\n"
.string "presenciar esta clase de eventos\l"
.string "como un mero observador, puedes\l"
.string "saber más de una persona\l"
.string "observando su actitud en fiestas\l"
.string "así que hablando horas con ella.$"



SsAnne6F_6::
lock     
faceplayer     
msgbox SsAnne5F_Text_6, MSGBOX_DEFAULT
release     
end

SsAnne5F_Text_6:
.string "¡JAJAJA!\n"
.string "¡Camarero!\l"
.string "¡Otro licor de SHUCKLE!$"



SsAnne6F_7::
lock     
faceplayer     
msgbox SsAnne5F_Text_7, MSGBOX_DEFAULT
release     
end

SsAnne5F_Text_7:
.string "¡JA, JA!\n"
.string "¿Sabías por qué a la gente le\l"
.string "gusta tanto la fiesta?\l"
.string "…\l"
.string "¡Porque por unas horas les\l"
.string "evade de todos los problemas y\l"
.string "carencias que sus míseras vidas\l"
.string "tienen!\l"
.string "¡JA!\l"
.string "¡Camarero, otro licor de SHUCKLE!$"



SsAnne6F_8::
lock     
faceplayer     
msgbox SsAnne5F_Text_8, MSGBOX_DEFAULT
release     
end

SsAnne5F_Text_8:
.string "Entonces después de tanto esfuerzo\n"
.string "y disciplina se suponía que este\l"
.string "era el premio final, irónicamente\l"
.string "he sido más dichoso entrenando\l"
.string "para llegar aquí que una vez\l"
.string "llegado aquí.\l"
.string "¡Los viernes siempre decepcionan\l"
.string "chico!$"



SsAnne6F_9::
lock     
faceplayer     
msgbox SsAnne5F_Text_9, MSGBOX_DEFAULT
release     
end

SsAnne5F_Text_9:
.string "Todo iba perfecto hasta que\n"
.string "apareció esa parejita con sus\l"
.string "ñoñerías, ¡me han estropeado el\l"
.string "paisaje!$"



SsAnne6F_10::
lock     
faceplayer     
msgbox SsAnne5F_Text_10, MSGBOX_DEFAULT
release     
end

SsAnne5F_Text_10:
.string "Puafff…\n"
.string "Ni se te ocurra aceptar el licor\l"
.string "extraño que sirve ese camarero de\l"
.string "ahí, creo que voy a vomitar…$"



SsAnne6F_11::
lock     
faceplayer     
msgbox SsAnne5F_Text_11, MSGBOX_DEFAULT
release     
end

SsAnne5F_Text_11:
.string "La incertidumbre del momento,\n"
.string "dejarse llevar por la intuición…\l"
.string "Aún no logro comprender cuál es la\l"
.string "esencia última que me proporcione\l"
.string "la fórmula exacta para exprimir al\l"
.string "máximo eventos así…$"



SsAnne6F_12::
end



SsAnne6F_13::
end

SsAnne6F_EventScript_Marinero::
	trainerbattle_single TRAINER_JESSICA_5, SsAnne6F_Text_MarineroIntro, SsAnne6F_Text_MarineroDefeated
	msgbox SsAnne6F_Text_MarineroPostBattle, MSGBOX_AUTOCLOSE
	end



SsAnne6F_EventScript_Marinero2::
	trainerbattle_single TRAINER_WINSTON_1, SsAnne6F_Text_Marinero2Intro, SsAnne6F_Text_Marinero2Defeated
	msgbox SsAnne6F_Text_Marinero2PostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne6F_Lance_Surge::
applymovement OBJ_EVENT_ID_PLAYER, SSAnne6F_Lance_Surge_move1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, SSAnne6F_Lance_Surge_move2
waitmovement 0x0
special RemoveCameraObject
delay 20
playmoncry SPECIES_DRAGONITE, CRY_MODE_ENCOUNTER
delay 20
fadescreen 1
playse SE_M_FLY
delay 25
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
addobject 15
fadescreen 0
applymovement 14, SSAnne6F_Lance_Surge_move3
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_1 MSGBOX_AUTOCLOSE
msgbox SSAnne6F_Lance_Surge_Text_2 MSGBOX_AUTOCLOSE
applymovement 14, SSAnne6F_Lance_Surge_move3
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_3 MSGBOX_AUTOCLOSE
applymovement 15, SSAnne6F_Lance_Surge_move4
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_4 MSGBOX_AUTOCLOSE
applymovement 15, SSAnne6F_Lance_Surge_move5
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_5 MSGBOX_AUTOCLOSE
msgbox SSAnne6F_Lance_Surge_Text_6 MSGBOX_AUTOCLOSE
applymovement 14, SSAnne6F_Lance_Surge_move3
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_7 MSGBOX_AUTOCLOSE
msgbox SSAnne6F_Lance_Surge_Text_8 MSGBOX_AUTOCLOSE
msgbox SSAnne6F_Lance_Surge_Text_9 MSGBOX_AUTOCLOSE
applymovement 15, SSAnne6F_Lance_Surge_move6
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_10 MSGBOX_AUTOCLOSE
applymovement 14, SSAnne6F_Lance_Surge_move3
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_11 MSGBOX_AUTOCLOSE
applymovement 15, SSAnne6F_Lance_Surge_move7
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_12 MSGBOX_AUTOCLOSE
delay 20
playmoncry SPECIES_DRAGONITE, CRY_MODE_ENCOUNTER
delay 20
fadescreen 1
playse SE_M_FLY
delay 25
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
removeobject 15
fadescreen 0
delay 15
applymovement 14, SSAnne6F_Lance_Surge_move4
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_13 MSGBOX_AUTOCLOSE
playmoncry SPECIES_ELECTABUZZ, CRY_MODE_ENCOUNTER
delay 20
fadescreen 1
playse SE_M_TELEPORT
delay 25
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
removeobject 14
fadescreen 0
delay 25
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, SSAnne6F_Lance_Surge_move8
waitmovement 0x0
special RemoveCameraObject
setvar VAR_UNUSED_0x40F7, 25
release
end

SSAnne6F_Lance_Surge_Text_1:
.string "???: Un placer volver a verle,\n"
	.string "LANCE, CAMPEÓN de la nueva KANTO.\l"
	.string "¿Para qué me ha convocado aquí hoy\l"
	.string "en un día tan especial como es el\l"
	.string "regreso anual del SS.ANNE?$"


SSAnne6F_Lance_Surge_Text_2:
.string "LANCE: Seré breve LT.SURGE, todas\n"
	.string "las grandes ciudades están siendo\l"
	.string "sometidas a una rutina de\l"
	.string "inspección y control, para\l"
	.string "garantizar la seguridad y el\l"
	.string "confort de nuestra ciudadanía y\l"
	.string "asegurarnos de que el engranaje\l"
	.string "que mueve esta región funciona\l"
	.string "correctamente.\l"
	.string "¿Cómo ve a la gente por CARMÍN,\l"
	.string "SURGE?$"

SSAnne6F_Lance_Surge_Text_3:
.string "LT.SURGE: Todo marcha\n"
	.string "perfectamente, SR.LANCE, el puerto\l"
	.string "de CARMÍN amplifica de forma\l"
	.string "exponencial su red de contactos\l"
	.string "con otras regiones, y tengo\l"
	.string "entendido que otras ciudades, como\l"
	.string "AZULONA con su gran CENTRO\l"
	.string "COMERCIAL, o FUCSIA con la ZONA\l"
	.string "SAFARI, hacen lo propio con sus\l"
	.string "respectivos activos.$"

SSAnne6F_Lance_Surge_Text_4:
.string "LANCE: Todo eso está genial SURGE,\n"
	.string "la economía de nuestra región está\l"
	.string "experimentando un repunte sin\l"
	.string "precedentes, y el nivel de vida\l"
	.string "aquí cada vez es más elevado...$"

SSAnne6F_Lance_Surge_Text_5:
.string "LANCE: Pero esa no era la\n"
	.string "respuesta que estaba buscando\l"
	.string "SURGE. Me preguntaba más bien...$"

SSAnne6F_Lance_Surge_Text_6:
.string "LANCE: Cómo lleva la gente el\n"
	.string "hecho de que sea uno de los\l"
	.string "oficiales al mando de la región\l"
	.string "enemiga durante la GRAN GUERRA, el\l"
	.string "ahora LÍDER DE GIMNASIO y\l"
	.string "principal icono de CARMÍN.\l"
	.string "¿Ha aceptado la gente tu cambio de\l"
	.string "rol?$"

SSAnne6F_Lance_Surge_Text_7:
.string "LT.SURGE: Me temo que el tema de\n"
	.string "la guerra sigue siendo un tema\l"
	.string "tabú por toda KANTO y\l"
	.string "especialmente aquí SR.LANCE. La\l"
	.string "gente prefiere no hablar de ello,\l"
	.string "dejarlo atrás y continuar con sus\l"
	.string "vidas como si nada hubiera pasado.\l"
	.string "Tal vez siga existiendo cierto\l"
	.string "recelo por parte de ciertos\l"
	.string "sectores de la población...$"

SSAnne6F_Lance_Surge_Text_8:
.string "LANCE: ¿Te refieres al TEAM\n"
	.string "ROCKET?$"

SSAnne6F_Lance_Surge_Text_9:
.string "LT.SURGE: No hablaba de nadie en\n"
	.string "concreto, pero ellos podrían ser\l"
	.string "el mayor ejemplo. Nacieron como\l"
	.string "organización en protesta e\l"
	.string "inconformismo por el nuevo\l"
	.string "gobierno post-guerra, aunque\l"
	.string "debido a sus actos delictivos,\l"
	.string "radicalidad y una correcta campaña\l"
	.string "de desprestigio por parte de\l"
	.string "vuestro gobierno, han conseguido que\l"
	.string "la opinión pública acerca de los\l"
	.string "ROCKET es la que hoy en día es.\l"
	.string "Aún existen ciertos gremios que\l"
	.string "los apoyan y se sienten\l"
	.string "identificados con su sentimiento\l"
	.string "patriótico, por ejemplo los\l"
	.string "motoristas del CAMINO BICIS.$"

SSAnne6F_Lance_Surge_Text_10:
.string "LANCE: ...\n"
	.string "Ya veo, el COMITÉ DE LA LIGA\l"
	.string "POKÉMON tomará las medidas\l"
	.string "pertinentes respecto a esto,\l"
	.string "entretanto, tú sigue haciendo tu\l"
	.string "trabajo manteniendo el orden y la\l"
	.string "disciplina por CARMÍN. Si el\l"
	.string "pueblo sigue viendo avances, te\l"
	.string "aceptarán definitivamente como el\l"
	.string "SHERIFF del lugar. La gente tiene\l"
	.string "poca memoria SURGE, y las buenas\l"
	.string "acciones presentes pueden dejar\l"
	.string "opacadas esas malas(para\l"
	.string "ellos)acciones pasadas, y\l"
	.string "viceversa, de modo que paciencia,\l"
	.string "solo necesitamos tiempo. La\l"
	.string "estabilización y progresión\l"
	.string "adecuada...y KANTO aceptará el\l"
	.string "NUEVO ORDEN MUNDIAL casi sin darse\l"
	.string "cuenta.$"

SSAnne6F_Lance_Surge_Text_11:
.string "LT.SURGE: A la orden SR.LANCE.$"

SSAnne6F_Lance_Surge_Text_12:
	.string "LANCE: Eso es todo por ahora\n"
	.string "SURGE. Espero que tengan una gran\l"
	.string "fiesta aquí en el SS.ANNE, es uno\l"
	.string "de los mejores indicadores de\l"
	.string "progreso.$"

SSAnne6F_Lance_Surge_Text_13:
.string "LT.SURGE: Estas fiestas nunca\n"
	.string "fueron lo mío.\l"
	.string "¡ELECTABUZZ usa TELETRANSPORTE!$"

SSAnne6F_Lance_Surge_move1:
walk_in_place_left
step_end

SSAnne6F_Lance_Surge_move2:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

SSAnne6F_Lance_Surge_move3:
walk_in_place_down
step_end

SSAnne6F_Lance_Surge_move4:
face_left
step_end

SSAnne6F_Lance_Surge_move5:
walk_in_place_up
step_end

SSAnne6F_Lance_Surge_move6:
walk_up
walk_left
step_end

SSAnne6F_Lance_Surge_move7:
face_right
step_end

SSAnne6F_Lance_Surge_move8:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end
