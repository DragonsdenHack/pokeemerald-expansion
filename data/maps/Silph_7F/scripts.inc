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
.string "{PAUSE 5}…{PAUSE 5} …{PAUSE 5}$"

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
delay 10
msgbox Silph_7F_Encuentro_Azul_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, Silph_7F_Encuentro_Azul_Move_4
waitmovement 0x0
msgbox Silph_7F_Encuentro_Azul_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, Silph_7F_Encuentro_Azul_Move_4
waitmovement 0x0
msgbox Silph_7F_Encuentro_Azul_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox Silph_7F_Encuentro_Azul_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Silph_7F_Encuentro_Azul_Move_5
waitmovement 0x0
playse MUS_RG_SILPH
msgbox Silph_7F_Encuentro_Azul_Texto_6 MSGBOX_AUTOCLOSE
delay 10
msgbox Silph_7F_Encuentro_Azul_Texto_6.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Silph_7F_Encuentro_Azul_Move_6
waitmovement 0x0
msgbox Silph_7F_Encuentro_Azul_Texto_7 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Silph_7F_Encuentro_Azul_Move_2.2
waitmovement 0x0
waitse
delay 10
msgbox Silph_7F_Encuentro_Azul_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Silph_7F_Encuentro_Azul_Move_6.1
waitmovement 0x0
delay 10
msgbox Silph_7F_Encuentro_Azul_Texto_9 MSGBOX_AUTOCLOSE
delay 10
msgbox Silph_7F_Encuentro_Azul_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, Silph_7F_Encuentro_Azul_Move_7
waitmovement 0x0
setflag FLAG_HIDE_FANCLUB_BOY
clearflag FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE
removeobject 1
addobject 12
setvar VAR_UNUSED_0x40F7, 74
release
end

Silph_7F_Encuentro_Azul_Move_6.1:
face_right
delay_16
delay_8
face_down
delay_16
delay_8
face_player
delay_8
step_end

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

Silph_7F_Encuentro_Azul_Move_2.2:
emote_exclamation_mark
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
.string "¡Así que estabas aquí, {PLAYER}!$"

Silph_7F_Encuentro_Azul_Texto_2:
.string "GIOVANNI me ha enviado también a SILPH,\n"
	.string "quiere que sobre todo le mantenga\l"
	.string "informado de la ubicación de ROJO.\l"
	.string "Vamos a tenderle una trampa, y\l"
	.string "seguro que caerá, creyendo que es\l"
	.string "el más listo de la clase, escucha.$"

Silph_7F_Encuentro_Azul_Texto_3:
.string "ANDRA y yo hemos logrado sacar 2\n"
	.string "LLAVES MAGNÉTICAS a los trabajadores\l"
	.string "de SILPH, sin estos objetos, ROJO no\l"
	.string "podrá acercarse a la reunión entre\l"
	.string "GIOVANNI y el PRESIDENTE, no hasta\l"
	.string "que nosotros queramos{PAUSE 15}…{PAUSE 15}$"

Silph_7F_Encuentro_Azul_Texto_4:
.string "El plan es mantener estas llaves a\n"
	.string "buen recaudo, al menos hasta que\l"
	.string "GIOVANNI ya le haya dicho todo lo que\l"
	.string "tenga que decirle al PRESIDENTE.$"

Silph_7F_Encuentro_Azul_Texto_5:
.string "Después, volveremos a cerrar las\n"
	.string "puertas y dejaremos una LLAVE\l"
	.string "MAGNÉTICA tirada por SILPH.$"

Silph_7F_Encuentro_Azul_Texto_6:
.string "Ese metomentodo de ROJO seguro que\n"
	.string "acabará encontrándola.\l"
	.string "Es especialista en recoger objetos\l"
	.string "ajenos y meterse donde no le llaman.\l"
	.string "Entonces, nos hará el favor de llegar\l"
	.string "hasta GIOVANNI, que fingirá su derrota.$"

Silph_7F_Encuentro_Azul_Texto_6.1:
	.string "El muy torpe pensará que ha vencido, y\n"
	.string "créeme que lo hará: está acostumbrado\l"
	.string "a pelear con adversarios mucho peores,\l"
	.string "GIOVANNI como mucho será un poco más\l"
	.string "fuerte de lo habitual.\l"
	.string "Dejaremos también a los ROCKET más\l"
	.string "débiles, y así aumentar el contraste\l"
	.string "de nivel.$"

Silph_7F_Encuentro_Azul_Texto_7:
.string "Después de esto, tendréis lo que\n"
	.string "queréis, y yo podré seguir con mis\l"
	.string "planes de ser el nuevo CAMPEÓN.$"

Silph_7F_Encuentro_Azul_Texto_8:
.string "No os preocupéis, ROCKET.\n"
	.string "Nada os vendría mejor que tener a un\l"
	.string "CAMPEÓN afín a vosotros, en lugar de\l"
	.string "tener a LANCE o ROJO, ¿no?$"

Silph_7F_Encuentro_Azul_Texto_9:
.string "Si todo sale bien, esta región puede\n"
	.string "dar muchos cambios, muy pronto.$"

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
	.string "AZUL: Date prisa, {PLAYER}, y\n"
	.string "derrota lo que queda de seguridad\l"
	.string "antes de que llegue GIOVANNI.$"
