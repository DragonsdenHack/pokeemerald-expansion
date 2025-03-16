SsAnne_6F_MapScripts::
	.byte 0

SsAnne6F_1::
lock         
msgbox SsAnne6F_Text_1, MSGBOX_SIGN
release     
end

SsAnne6F_Text_1:
.string "I'm the coolest guy around\n"
	.string "here… and you know it.$"



SsAnne6F_2::
lock         
msgbox SsAnne6F_Text_2, MSGBOX_SIGN
release     
end

SsAnne6F_Text_2:
.string "Oh… what a COOL TRAINER so… cool!$"



SsAnne6F_3::
end



SsAnne6F_4::
end



SsAnne6F_5::
lock     
faceplayer     
msgbox SsAnne6F_Text_5, MSGBOX_DEFAULT
release     
end

SsAnne6F_Text_5:
	.string "I'm the type who prefers to observe at\n"
	.string "events like these. You learn more about\l"
	.string "someone by watching them at a party\l"
	.string "like this one than by talking to them\l"
	.string "for hours.$"



SsAnne6F_6::
lock     
faceplayer     
msgbox SsAnne6F_Text_6, MSGBOX_DEFAULT
release     
end

SsAnne6F_Text_6:
.string "HAHAHA!\n"
.string "Waiter!\l"
.string "Get me another SHUCKLE brandy!$"



SsAnne6F_7::
lock     
faceplayer     
msgbox SsAnne6F_Text_7, MSGBOX_DEFAULT
release     
end

SsAnne6F_Text_7:
	.string "HA, HA! Y'know why… people love to party\n"
	.string "so much? … … ‘Cause for a few hours… it\l"
	.string "lets ‘em escape all the problems… and\l"
	.string "shortcomings of their miserable lives!\p"
	.string "HA! Waiter! Get me another CACTURNE\n"
	.string "tequila!$"



SsAnne6F_8::
lock     
faceplayer     
msgbox SsAnne6F_Text_8, MSGBOX_DEFAULT
release     
end

SsAnne6F_Text_8:
	.string "So after all that effort and discipline,\n"
	.string "this was supposed to be the grand\l"
	.string "prize. Funny enough, I found more joy in\l"
	.string "the journey than in finally getting here.\p"
	.string "The finish line is always a let\n"
	.string "down, kid!$"



SsAnne6F_9::
lock     
faceplayer     
msgbox SsAnne6F_Text_9, MSGBOX_DEFAULT
release     
end

SsAnne6F_Text_9:
	.string "Ugh, I was having a lovely time until\n"
	.string "that lovey-dovey couple showed up\l"
	.string "being all sappy and gross. Get a room!$"



SsAnne6F_10::
lock     
faceplayer     
msgbox SsAnne6F_Text_10, MSGBOX_DEFAULT
release     
end

SsAnne6F_Text_10:
	.string "Ugh… Don't even think about trying any\n"
	.string "of that weird drink the waiter over\l"
	.string "there is serving. I think I'm gonna\l"
	.string "throw up…$"



SsAnne6F_11::
lock     
faceplayer     
msgbox SsAnne6F_Text_11, MSGBOX_NPC
delay 10
msgbox SsAnne6F_Text_11.1, MSGBOX_NPC
delay 10
msgbox SsAnne6F_Text_11.2, MSGBOX_NPC
release     
end

SsAnne6F_Text_11:
.string "La incertidumbre del momento, el\n"
.string "dejarse llevar por la intuición{PAUSE 15}…{PAUSE 15}$"

SsAnne6F_Text_11.1:
.string "El suceso de una fiesta, la embriaguez\n"
	.string "de la comunidad en ella, el secreto de la\l"
	.string "pérdida de la personalidad entre la\l"
	.string "multitud{PAUSE 15}…{PAUSE 15}$"

SsAnne6F_Text_11.2:
.string "Aún no logro comprender cuál es la\n"
.string "esencia última capaz de proporcionar\l"
.string "la fórmula exacta que me haga al fin\l"
.string "poder disfrutar de estos eventos{PAUSE 15}…{PAUSE 15}$"



SsAnne6F_12::
lock         
msgbox SsAnne6F_Text_12, MSGBOX_SIGN
release     
end

SsAnne6F_Text_12:
	.string "Am I dreaming? I just had the incredible\n"
	.string "honor of seeing LANCE's majestic,\l"
	.string "legendary DRAGONITE flying over the\l"
	.string "SS. ANNE!$"



SsAnne6F_13::
lock         
msgbox SsAnne6F_Text_13, MSGBOX_SIGN
release     
end

SsAnne6F_Text_13:
	.string "That was LANCE himself, in the flesh!$"

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
delay 10
playmoncry SPECIES_DRAGONITE, CRY_MODE_ENCOUNTER
applymovement 13, SSAnne6F_Lance_Surge_move1.5
applymovement 12, SSAnne6F_Lance_Surge_move1.5
applymovement OBJ_EVENT_ID_PLAYER, SSAnne6F_Lance_Surge_move1.5
waitmoncry
delay 15
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
setfieldeffectargument 1, 1
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
addobject 15
waitfieldeffect FLDEFF_NPCFLY_OUT
delay 35
applymovement 14, SSAnne6F_Lance_Surge_move3
waitmovement 0x0
delay 15
msgbox SSAnne6F_Lance_Surge_Text_1 MSGBOX_AUTOCLOSE
delay 10
msgbox SSAnne6F_Lance_Surge_Text_2 MSGBOX_AUTOCLOSE
delay 10
msgbox SSAnne6F_Lance_Surge_Text_2.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 14, SSAnne6F_Lance_Surge_move3
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_3 MSGBOX_AUTOCLOSE
applymovement 15, SSAnne6F_Lance_Surge_move4
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_4 MSGBOX_AUTOCLOSE
delay 15
msgbox SSAnne6F_Lance_Surge_Text_4.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 15, SSAnne6F_Lance_Surge_move5
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_5 MSGBOX_AUTOCLOSE
msgbox SSAnne6F_Lance_Surge_Text_6 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 14, SSAnne6F_Lance_Surge_move3.2
waitmovement 0x0
waitse
delay 10
msgbox SSAnne6F_Lance_Surge_Text_6.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, SSAnne6F_Lance_Surge_move3
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_7 MSGBOX_AUTOCLOSE
msgbox SSAnne6F_Lance_Surge_Text_8 MSGBOX_AUTOCLOSE
msgbox SSAnne6F_Lance_Surge_Text_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, SSAnne6F_Lance_Surge_move3.1
waitmovement 0x0
delay 15
msgbox SSAnne6F_Lance_Surge_Text_9.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 15, SSAnne6F_Lance_Surge_move6
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_10 MSGBOX_AUTOCLOSE
delay 15
applymovement 15, SSAnne6F_Lance_Surge_move6.1
waitmovement 0x0
delay 10
msgbox SSAnne6F_Lance_Surge_Text_10.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, SSAnne6F_Lance_Surge_move6.2
waitmovement 0x0
delay 10
msgbox SSAnne6F_Lance_Surge_Text_10.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, SSAnne6F_Lance_Surge_move6.3
waitmovement 0x0
delay 10
msgbox SSAnne6F_Lance_Surge_Text_10.3 MSGBOX_AUTOCLOSE
delay 15
applymovement 14, SSAnne6F_Lance_Surge_move3
waitmovement 0x0
delay 15
msgbox SSAnne6F_Lance_Surge_Text_11 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, SSAnne6F_Lance_Surge_move7
waitmovement 0x0
delay 10
msgbox SSAnne6F_Lance_Surge_Text_12 MSGBOX_AUTOCLOSE
delay 20
playmoncry SPECIES_DRAGONITE, CRY_MODE_ENCOUNTER
waitmoncry
setfieldeffectargument 1, 0
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
removeobject 15
waitfieldeffect FLDEFF_NPCFLY_OUT
delay 20
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
delay 25
applymovement 14, SSAnne6F_Lance_Surge_move4
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_13 MSGBOX_AUTOCLOSE
playmoncry SPECIES_ELECTABUZZ, CRY_MODE_ENCOUNTER
delay 20
playse SE_M_TELEPORT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
removeobject 14
waitse
delay 25
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, SSAnne6F_Lance_Surge_move8
waitmovement 0x0
special RemoveCameraObject
setvar VAR_UNUSED_0x40F7, 26
release
end

SSAnne6F_Lance_Surge_Text_1:
.string "????: Un placer volver a verle,\n"
	.string "SR.LANCE, CAMPEÓN de la nueva KANTO.\l"
	.string "¿Para qué me ha convocado aquí hoy,\l"
	.string "en un día tan especial como lo es\l"
	.string "el regreso anual del SS.ANNE?$"


SSAnne6F_Lance_Surge_Text_2:
.string "LANCE: Seré breve, SURGE.\p"
	.string "Las grandes ciudades están siendo\n"
	.string "sometidas a una rutina de\l"
	.string "inspección y control, para\l"
	.string "asegurarnos de que el engranaje\l"
	.string "que mueve esta región funciona\l"
	.string "correctamente.$"

SSAnne6F_Lance_Surge_Text_2.1:
	.string "¿Cómo va todo por CARMÍN, SURGE?$"

SSAnne6F_Lance_Surge_Text_3:
.string "LT.SURGE: Todo marcha\n"
	.string "perfectamente, SR.LANCE.\p"
	.string "El PUERTO amplificará poco a\n"
	.string "poco su red de contactos con\l"
	.string "otras regiones.\p"
	.string "Paralelamente, estamos valorando\n"
	.string "el construir un FARO, similar al\l"
	.string "de CIUDAD OLIVO.$"

SSAnne6F_Lance_Surge_Text_4:
.string "LANCE: Todo eso está genial, SURGE.\p"
	.string "La economía de KANTO está\n"
	.string "experimentando un repunte sin\l"
	.string "precedentes{PAUSE 5}…{PAUSE 5}$"

SSAnne6F_Lance_Surge_Text_4.1:
	.string "Eso era previsible: solo había que\n"
	.string "poner orden y decidir por los\l"
	.string "ciudadanos en qué encauzar sus propios\l"
	.string "esfuerzos.$"

SSAnne6F_Lance_Surge_Text_5:
.string "LANCE: Pero{PAUSE 15}…{PAUSE 15} esa no era la\n"
	.string "respuesta que estaba buscando,\l"
	.string "SURGE. Me preguntaba, más bien{PAUSE 5}…{PAUSE 5}$"

SSAnne6F_Lance_Surge_Text_6:
.string "LANCE: ¿Cómo lleva la gente el\n"
    .string "hecho de que sea uno de los\l"
	.string "oficiales al mando de la región\l"
	.string "enemiga, el ahora LÍDER DE GIMNASIO\l"
	.string "y principal icono de CARMÍN?$"

SSAnne6F_Lance_Surge_Text_6.1:
	.string "¿Ha aceptado la gente\n"
	.string "tu cambio de rol?$"

SSAnne6F_Lance_Surge_Text_7:
.string "LT.SURGE: Me temo que el tema de\n"
	.string "la guerra sigue siendo tabú\l"
	.string "por toda KANTO.\p"
	.string "Especialmente aquí, SR.LANCE, la\n"
	.string "gente prefiere no hablar de ello,\l"
	.string "dejarlo atrás y continuar con sus\l"
	.string "vidas como si nada hubiera pasado.\l"
	.string "Quizás{PAUSE 15}…{PAUSE 15} siga existiendo cierto\l"
	.string "recelo por parte de ciertos\l"
	.string "sectores de la población{PAUSE 5}…{PAUSE 5}$"

SSAnne6F_Lance_Surge_Text_8:
.string "LANCE: ¿Te refieres al\n"
	.string "TEAM ROCKET?$"

SSAnne6F_Lance_Surge_Text_9:
.string "LT.SURGE: Ellos podrían ser\n"
	.string "el mayor ejemplo.\p"
	.string "Se expandieron a raíz del\n"
	.string "inconformismo por el nuevo\l"
	.string "gobierno post-guerra, pero sus\l"
	.string "actos delictivos, unidos a una\l"
	.string "correcta campaña de desprestigio\l"
	.string "por vuestra parte, han logrado que\l"
	.string "la opinión pública acerca de los\l"
	.string "ROCKET sea la que a día de hoy es.$"

SSAnne6F_Lance_Surge_Text_9.1:
	.string "A pesar de ello, aún existen\n"
	.string "gremios que los apoyan, que se\l"
	.string "ven identificados con su causa.\p"
	.string "Los MOTORISTAS serían el\n"
	.string "mayor ejemplo de ello.$"

SSAnne6F_Lance_Surge_Text_10:
.string "LANCE: {PAUSE 25}…{PAUSE 25}\p"
	.string "Ya veo, el COMITÉ DE LA LIGA\n"
	.string "POKÉMON tomará las medidas\l"
	.string "pertinentes respecto a esto.$"

SSAnne6F_Lance_Surge_Text_10.1:
	.string "Entretanto, seguirás con tu\n"
	.string "labor manteniendo el orden y la\l"
	.string "disciplina por CARMÍN.\l"
	.string "Si el pueblo ve avances, te\l"
	.string "aceptarán definitivamente\l"
	.string "como el SHERIFF del lugar.$"
	
SSAnne6F_Lance_Surge_Text_10.2:
	.string "La gente tiene poca memoria,\n"
	.string "SURGE, y las buenas acciones\l"
	.string "presentes pueden hacer que se\l"
	.string "olvide el verdadero motivo por\l"
	.string "el que ocupas esa posición, de\l"
	.string "modo que paciencia.$"

SSAnne6F_Lance_Surge_Text_10.3:
	.string "Solo necesitamos tiempo.\p"
	.string "La estabilización y progresión\n"
	.string "adecuada{PAUSE 25}…{PAUSE 25}y KANTO aceptará el\l"
	.string "NUEVO ORDEN MUNDIAL casi sin darse\l"
	.string "cuenta.$"

SSAnne6F_Lance_Surge_Text_11:
.string "LT.SURGE: A la orden, SR.LANCE.$"

SSAnne6F_Lance_Surge_Text_12:
	.string "LANCE: Eso es todo, SURGE.\p"
	.string "Espero que la fiesta sea un\n"
	.string "éxito, los grandes eventos\l"
	.string "distraen y evaden a la plebe.$"

SSAnne6F_Lance_Surge_Text_13:
.string "LT.SURGE: Estas fiestas nunca\n"
	.string "fueron lo mío.\p"
	.string "¡ELECTABUZZ! ¡TELETRANSPORTE!$"

SSAnne6F_Lance_Surge_move1.5:
emote_exclamation_mark
delay_16
delay_8
face_right
delay_16
delay_16
face_left
step_end

SSAnne6F_Lance_Surge_move3.2:
emote_exclamation_mark
step_end

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

SSAnne6F_Lance_Surge_move3.1:
delay_8
face_left
delay_16
delay_8
face_down
delay_8
step_end

SSAnne6F_Lance_Surge_move4:
face_left
step_end

SSAnne6F_Lance_Surge_move5:
walk_in_place_up
step_end

SSAnne6F_Lance_Surge_move6:
walk_up
delay_16
delay_8
walk_left
delay_16
step_end

SSAnne6F_Lance_Surge_move6.1:
delay_8
face_right
delay_16
delay_8
face_left
delay_16
walk_in_place_left
delay_8
step_end

SSAnne6F_Lance_Surge_move6.2:
delay_16
face_right
delay_16
delay_8
face_left
delay_8
step_end

SSAnne6F_Lance_Surge_move6.3:
walk_in_place_left
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
