Silph_7F_MapScripts::
map_script MAP_SCRIPT_ON_LOAD, SilphCo_7F_OnLoad
	.byte 0

SilphCo_7F_OnLoad::
	call_if_unset FLAG_UNUSED_0x032, EventScript_Close7FDoor1
	call_if_unset FLAG_UNUSED_0x033, EventScript_Close7FDoor2
	call_if_unset FLAG_UNUSED_0x034, EventScript_Close7FDoor3
	end

Silph7F_2::
end



Silph7F_3::
end



Silph7F_4::
end



Silph7F_5::
end



Silph7F_6::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 74
goto_if_gt Silph7F_6_Despues_Invasion
msgbox Silph7F_6_Texto_1 MSGBOX_AUTOCLOSE
release
end

Silph7F_6_Despues_Invasion::
msgbox Silph7F_6_Texto_2 MSGBOX_AUTOCLOSE
release
end

Silph7F_6_Texto_1:
.string "¡No por favor!\n"
	.string "¡Que alguien venga a salvarme!$"

Silph7F_6_Texto_2:
.string "¡Ya no eres tan valiente ahora que\n"
	.string "habéis caído miserablemente, eh!$"



Silph7F_7::
end



Silph7F_8::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 74
goto_if_gt Silph7F_8_Despues_Invasion
msgbox Silph7F_8_Texto_1 MSGBOX_AUTOCLOSE
release
end

Silph7F_8_Despues_Invasion::
msgbox Silph7F_8_Texto_2 MSGBOX_AUTOCLOSE
release
end

Silph7F_8_Texto_1:
.string "La MASTER BALL será un bien de\n"
	.string "lujo solo accesible a los\l"
	.string "entrenadores más destacados que\l"
	.string "puedan comprarla, ¡esa BALL queda\l"
	.string "muy grande para vosotros!$"

Silph7F_8_Texto_2:
.string "¡Mirad lo que habéis logrado!\n"
	.string "¡Por vuestra culpa el PRESIDENTE\l"
	.string "ha decidido cancelar el proyecto\l"
	.string "MASTER BALL!$"



Silph7F_9::
end



Silph7F_10::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 74
goto_if_gt Silph7F_10_Despues_Invasion
msgbox Silph7F_10_Texto_1 MSGBOX_AUTOCLOSE
release
end

Silph7F_10_Despues_Invasion::
msgbox Silph7F_10_Texto_2 MSGBOX_AUTOCLOSE
release
end

Silph7F_10_Texto_1:
.string "¡Jamás os haréis con el control de\n"
	.string "esta compañía, nuestro PRESIDENTE\l"
	.string "sabe como lidiar con gente de\l"
	.string "vuestra calaña!$"

Silph7F_10_Texto_2:
.string "Obtuvisteis lo que merecíais\n"
	.string "ROCKET, ahora solo queda\l"
	.string "esperar a vuestro juicio.$"



Silph7F_11::
end



Silph7F_12::
lock
faceplayer 
msgbox Silph7F_12_Texto_1 MSGBOX_NPC
release
end



Silph7F_EventScript_Policia::
	trainerbattle_single TRAINER_TALIA, Silph7F_Text_PoliciaIntro, Silph7F_Text_PoliciaDefeated
	msgbox Silph7F_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



Silph7F_EventScript_Policia2::
	trainerbattle_single TRAINER_DONNY, Silph7F_Text_Policia2Intro, Silph7F_Text_Policia2Defeated
	msgbox Silph7F_Policia2PostBattle, MSGBOX_AUTOCLOSE
	end



Silph7F_EventScript_Policia3::
	trainerbattle_single TRAINER_KATELYN_1, Silph7F_Text_Policia3Intro, Silph7F_Text_Policia3Defeated
	msgbox Silph7F_Policia3PostBattle, MSGBOX_AUTOCLOSE
	end



Silph7F_EventScript_Cientifico::
	trainerbattle_single TRAINER_BARNY, Silph7F_Text_CientificoIntro, Silph7F_Text_CientificoDefeated
	msgbox Silph7F_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



Silph7FDocumento_100::
msgbox Silph7FDocumento_Text_100, MSGBOX_SIGN   
end

Silph7FDocumento_Text_100:
.string "OFICINA CENTRAL DE SILPH S.A.\n"
	.string "P6$"

Silph_7F_Combate_Empleado::
lock
faceplayer
compare VAR_ROUTE131_STATE, 0
goto_if_gt Silph_7F_Combate_Empleado_2
msgbox Silph_7F_Combate_Empleado_Texto_1 MSGBOX_NPC
delay 15
msgbox Silph_7F_Combate_Empleado_Texto_2 MSGBOX_NPC
delay 15
playse SE_PIN
applymovement 9, Silph_7F_Combate_Empleado_Move_1
waitmovement 0x0
msgbox Silph_7F_Combate_Empleado_Texto_3 MSGBOX_NPC
playse MUS_RG_ENCOUNTER_BOY
msgbox Silph_7F_Combate_Empleado_Texto_4 MSGBOX_NPC
trainerbattle_no_intro TRAINER_SILPH, Silph_7F_Combate_Empleado_Texto_5
msgbox Silph_7F_Combate_Empleado_Texto_6 MSGBOX_NPC
setvar VAR_ROUTE131_STATE, 1
release
end

Silph_7F_Combate_Empleado_2::
msgbox Silph_7F_Combate_Empleado_Texto_7 MSGBOX_NPC
release
end



Silph_7F_Combate_Empleado_Move_1:
emote_exclamation_mark
step_end

Silph_7F_Combate_Empleado_Texto_1:
.string "Sin la LLAVE MAGNÉTICA ninguno de\n"
	.string "vosotros llegará a ninguna parte,\l"
	.string "no podréis tocar a nuestro\l"
	.string "PRESIDENTE.$"

Silph_7F_Combate_Empleado_Texto_2:
.string "… …$"

Silph_7F_Combate_Empleado_Texto_3:
.string "¿Cómo?\n"
	.string "¿Que te diga dónde está?$"

Silph_7F_Combate_Empleado_Texto_4:
.string "Yo no soy como el resto de\n"
	.string "trabajadores de por aquí ROCKET,\l"
	.string "no voy a quedarme parado viendo\l"
	.string "cómo nos amenazáis, ¡prepárate a\l"
	.string "recibir un escarmiento!$"

Silph_7F_Combate_Empleado_Texto_5:
.string "¿De verdad me acaba de dar una\n"
	.string "lección un ROCKET?$"

Silph_7F_Combate_Empleado_Texto_6:
.string "Está bien, hablaré. Uno de\n"
	.string "nuestros empleados del P5 es el\l"
	.string "encargado de la seguridad, es un\l"
	.string "cobarde así que no tendrás\l"
	.string "problema en obtener la LLAVE\l"
	.string "MAGNÉTICA si le hablas de ella.$"

Silph_7F_Combate_Empleado_Texto_7:
.string "¿Y ahora qué? ¡Ya te he dicho lo que\n"
	.string "sé, déjame en paz!$"


Silph_7F_Encuentro_Azul_Arriba::
lockall
playse SE_WARP_OUT
clearflag FLAG_HIDE_FANCLUB_BOY
addobject 1
applymovement 1, Silph_7F_Encuentro_Azul_Move_1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Silph_7F_Encuentro_Azul_Move_2
waitmovement 0x0
goto Silph_7F_Encuentro_Azul

Silph_7F_Encuentro_Azul_Abajo::
lockall
playse SE_WARP_OUT
clearflag FLAG_HIDE_FANCLUB_BOY
addobject 1
applymovement 1, Silph_7F_Encuentro_Azul_Move_1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Silph_7F_Encuentro_Azul_Move_2.1
waitmovement 0x0
goto Silph_7F_Encuentro_Azul

Silph_7F_Encuentro_Azul::
playse MUS_RG_ENCOUNTER_RIVAL
applymovement 1, Silph_7F_Encuentro_Azul_Move_3
waitmovement 0x0
msgbox Silph_7F_Encuentro_Azul_Texto_1 MSGBOX_AUTOCLOSE
msgbox Silph_7F_Encuentro_Azul_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, Silph_7F_Encuentro_Azul_Move_4
waitmovement 0x0
msgbox Silph_7F_Encuentro_Azul_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, Silph_7F_Encuentro_Azul_Move_4
waitmovement 0x0
msgbox Silph_7F_Encuentro_Azul_Texto_4 MSGBOX_AUTOCLOSE
msgbox Silph_7F_Encuentro_Azul_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Silph_7F_Encuentro_Azul_Move_5
waitmovement 0x0
playse MUS_RG_SILPH
msgbox Silph_7F_Encuentro_Azul_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, Silph_7F_Encuentro_Azul_Move_6
waitmovement 0x0
msgbox Silph_7F_Encuentro_Azul_Texto_7 MSGBOX_AUTOCLOSE
msgbox Silph_7F_Encuentro_Azul_Texto_8 MSGBOX_AUTOCLOSE
msgbox Silph_7F_Encuentro_Azul_Texto_9 MSGBOX_AUTOCLOSE
msgbox Silph_7F_Encuentro_Azul_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, Silph_7F_Encuentro_Azul_Move_7
waitmovement 0x0
setflag FLAG_HIDE_FANCLUB_BOY
clearflag FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE
setvar VAR_UNUSED_0x40F7, 74
release
end

Silph_7F_Encuentro_Azul_Move_1:
face_down
face_right
face_up
face_left
face_down
face_right
face_up
face_left
face_down
face_right
face_up
face_left
face_down
face_right
face_up
face_left
face_down
face_right
face_up
face_left
face_down
face_right
face_up
face_left
face_down
face_right
face_up
face_left
face_down
face_right
face_up
face_left
step_end

Silph_7F_Encuentro_Azul_Move_2:
emote_exclamation_mark
walk_in_place_right
step_end

Silph_7F_Encuentro_Azul_Move_2.1:
emote_exclamation_mark
walk_up
walk_in_place_right
step_end

Silph_7F_Encuentro_Azul_Move_3:
walk_left
walk_left
step_end

Silph_7F_Encuentro_Azul_Move_4:
walk_in_place_down
walk_in_place_left
step_end

Silph_7F_Encuentro_Azul_Move_5:
face_up
step_end

Silph_7F_Encuentro_Azul_Move_6:
face_left
step_end

Silph_7F_Encuentro_Azul_Move_7:
walk_down
walk_left
walk_down
walk_in_place_up
step_end

Silph_7F_Encuentro_Azul_Texto_1:
.string "AZUL: ¡Así que estabas aquí\n"
	.string "{PLAYER}!$"

Silph_7F_Encuentro_Azul_Texto_2:
.string "GIOVANNI me ha enviado también a\n"
	.string "AZAFRÁN, quiere que sobre todo le\l"
	.string "mantenga informado de la ubicación\l"
	.string "de ROJO, vamos a tenderle una\l"
	.string "trampa, seguro que el muy torpe\l"
	.string "picará creyendo que es el más\l"
	.string "listo de la clase, escucha.$"

Silph_7F_Encuentro_Azul_Texto_3:
.string "ANDRA y yo hemos podido sacarles 2\n"
	.string "LLAVES MAGNÉTICAS a los\l"
	.string "trabajadores de SILPH, sin estos\l"
	.string "objetos ROJO no podrá acercarse a\l"
	.string "la reunión entre GIOVANNI y el\l"
	.string "PRESIDENTE hasta que nosotros\l"
	.string "queramos…$"

Silph_7F_Encuentro_Azul_Texto_4:
.string "El plan es mantener estas llaves a\n"
	.string "buen recaudo hasta que me des la\l"
	.string "señal de que GIOVANNI ya le ha\l"
	.string "dicho todo lo que tenía que decir\l"
	.string "al PRESIDENTE.$"

Silph_7F_Encuentro_Azul_Texto_5:
.string "Después, volveremos a cerrar las\n"
	.string "puertas y dejaremos una de las\l"
	.string "LLAVES MAGNÉTICAS tiradas por\l"
	.string "SILPH.$"

Silph_7F_Encuentro_Azul_Texto_6:
.string "Ese metomentodo de ROJO seguro que\n"
	.string "acabará encontrándola, es\l"
	.string "especialista en recoger objetos\l"
	.string "ajenos y meterse donde no le\l"
	.string "llaman, entonces, nos hará el\l"
	.string "favor de llegar hasta GIOVANNI\l"
	.string "para este fingir su miserable\l"
	.string "derrota, el muy torpe pensará que\l"
	.string "ha vencido, y créeme que lo hará,\l"
	.string "está acostumbrado a pelear con\l"
	.string "adversarios mucho peores que el ya\l"
	.string "de por si mediocre equipo que\l"
	.string "traerá GIOVANNI aquí a SILPH,\l"
	.string "dejaremos también a los ROCKETS\l"
	.string "más débiles para aumentar el\l"
	.string "contraste de nivel.$"

Silph_7F_Encuentro_Azul_Texto_7:
.string "Después de esto, tendréis lo que\n"
	.string "queréis y yo podré seguir con mis\l"
	.string "planes de ser el nuevo CAMPEÓN.$"

Silph_7F_Encuentro_Azul_Texto_8:
.string "No os preocupéis ROCKETS, nada os\n"
	.string "vendría mejor que tener a un\l"
	.string "CAMPEÓN afín a vosotros en lugar\l"
	.string "de LANCE, ¿no?$"

Silph_7F_Encuentro_Azul_Texto_9:
.string "Si todo sale bien, esta región\n"
	.string "puede dar muchos cambios muy\l"
	.string "pronto.$"

Silph_7F_Encuentro_Azul_Texto_10:
.string "No te entretengo más {PLAYER},\n"
	.string "ANDRA ya ha avisado a GIOVANNI,\l"
	.string "debe de estar de camino, deberías\l"
	.string "seguir y derrotar a lo que queda\l"
	.string "de seguridad para que vuestro\l"
	.string "LÍDER tenga vía libre para hablar\l"
	.string "con el PRESIDENTE nada más llegar,\l"
	.string "yo estaré aquí, esperando a que me\l"
	.string "des la señal para soltar la LLAVE\l"
	.string "MAGNÉTICA una vez finalice la\l"
	.string "negociación.$"


Silph7F_12_Texto_1:
	.string "AZUL: Date prisa {PLAYER}, y\n"
	.string "derrota lo que queda de seguridad\l"
	.string "antes de que llegue GIOVANNI.$"

