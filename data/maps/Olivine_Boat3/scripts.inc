Olivine_Boat3_MapScripts::
	.byte 0

OlivineBoat3_1::
lock
msgbox OlivineBoat3_1_Texto_1 MSGBOX_AUTOCLOSE
release
end

OlivineBoat3_1_Texto_1:
	.string "Some people say that the CAPTAIN is\n"
	.string "the same that the S.S.ANNE, since that\l"
	.string "incident in VERMILLION I don't trust him\l"
	.string "at all.$"



OlivineBoat3_2::
lock
faceplayer
msgbox OlivineBoat3_2_Texto_1 MSGBOX_AUTOCLOSE
release
end

OlivineBoat3_2_Texto_1:
	.string "In 3 years, no one will remember what\n"
	.string "happened 5 years ago. For the future!$"



OlivineBoat3_3::
lock
msgbox OlivineBoat3_3_Texto_1 MSGBOX_AUTOCLOSE
release
end

OlivineBoat3_3_Texto_1:
	.string "It's said that, in a distant region,\n"
	.string "there's a bull even stronger and bulker\l"
	.string "that TAUROS, but slower.$"


OlivineBoat3_5::
lock     
faceplayer     
msgbox OlivineBoat3_Text_5, MSGBOX_DEFAULT
release     
end

OlivineBoat3_Text_5:
.string "Easy!\n"
.string "There's enough for everyone,\l"
.string "everything is under control!$"



OlivineBoat3_6::
lock         
msgbox OlivineBoat3_Text_6, MSGBOX_DEFAULT
release     
end

OlivineBoat3_Text_6:
.string "Vamos, nadie conoce los POKÉMON\n"
	.string "marinos y PSEUDOLEGENDARIOS\l"
	.string "como ese CAPITÁN. Aunque no logré\l"
	.string "identificar a uno de sus POKÉMON,\l"
	.string "parecía una enorme libélula con\l"
	.string "rasgos de dragón.$"

OlivineBoat3_7::
lock
msgbox OlivineBoat3_7_Texto_1 MSGBOX_AUTOCLOSE
release
end

OlivineBoat3_7_Texto_1:
.string "¿El PORYGON del CASINO de KANTO\n"
	.string "vale 9999 FICHAS?\l"
	.string "Compraremos 10 ejemplares, y de\l"
	.string "paso un par de BICIS de esas en\l"
	.string "CIUDAD CELESTE, he oído que son\l"
	.string "muy exclusivas.$"



OlivineBoat3_8::
lock     
faceplayer     
msgbox OlivineBoat3_Text_8, MSGBOX_DEFAULT
release     
end

OlivineBoat3_Text_8:
.string "Prefiero venir sin pareja, mi\n"
	.string "AZUMARILL ya me hace muy buena\l"
	.string "compañía. Al acabar la fiesta nos\l"
	.string "daremos un buen baño en la playa.$"



OlivineBoat3_9::
lock
msgbox OlivineBoat3_9_Texto_1 MSGBOX_AUTOCLOSE
release
end

OlivineBoat3_9_Texto_1:
.string "Te dije que probaras el filete de\n"
	.string "GYARADOS, el rabo de TAUROS lo\l"
	.string "puedes tomar en cualquier otro\l"
	.string "lugar.$"



OlivineBoat3_10::
lock
msgbox OlivineBoat3_10_Texto_1 MSGBOX_AUTOCLOSE
release
end

OlivineBoat3_10_Texto_1:
.string "¿Para qué quieres 10 PORYGON?\n"
	.string "Si después no vas a entrenar ni a\l"
	.string "uno, y tampoco sabes montar en\l"
	.string "BICI.$"



OlivineBoat3_12::
lock     
faceplayer     
msgbox OlivineBoat3_Text_12, MSGBOX_DEFAULT
release     
end

OlivineBoat3_Text_12:
.string "Ahora el FARO tendrá más trabajo\n"
	.string "que nunca, ¿podrá nuestro AMPHAROS\l"
	.string "aguantar tantas horas brillando?$"



OlivineBoat3_13::
end



OlivineBoat3_14::
lock     
faceplayer     
msgbox OlivineBoat3_Text_14, MSGBOX_DEFAULT
release     
end

OlivineBoat3_Text_14:
.string "¡Este acontecimiento quedará\n"
	.string "registrado en los libros de\l"
	.string "historia de JOHTO!$"



OlivineBoat3_15::
lock     
faceplayer     
msgbox OlivineBoat3_Text_15, MSGBOX_DEFAULT
release     
end

OlivineBoat3_Text_15:
.string "Que no te engañen, los únicos\n"
	.string "POKÉMON marinos dignos de un\l"
	.string "ENTRENADOR GUAY como yo son\l"
	.string "GYARADOS, KINGDRA, FERALIGATR y\l"
	.string "BLASTOISE. El resto, calderilla\l"
	.string "para el resto de ENTRENADORES de\l"
	.string "clases inferiores.\l"
	.string "...\l"
	.string "...\l"
	.string "¿WISHIWASHI, KYOGRE y SUICUNE?\l"
	.string "¿¡De qué me estás hablando!?$"



OlivineBoat3_16::
lock     
faceplayer     
msgbox OlivineBoat3_Text_16, MSGBOX_DEFAULT
release     
end

OlivineBoat3_Text_16:
.string "En el SS.ANNE servían unos\n"
	.string "bivalvos deliciosos, ¿cómo se\l"
	.string "llamaban?\l"
	.string "¡CLOYSTER!\l"
	.string "¿Aquí en JOHTO no hay?$"

Olivine_Boat_3_Ceremonia::
lock
applymovement OBJ_EVENT_ID_PLAYER, Olivine_Boat_3_Ceremonia_Move_1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Olivine_Boat_3_Ceremonia_Move_2
waitmovement 0x0
special RemoveCameraObject
applymovement 2, Olivine_Boat_3_Ceremonia_Move_3
waitmovement 0x0
applymovement 1, Olivine_Boat_3_Ceremonia_Move_4
applymovement 3, Olivine_Boat_3_Ceremonia_Move_4
applymovement 6, Olivine_Boat_3_Ceremonia_Move_4
applymovement 7, Olivine_Boat_3_Ceremonia_Move_4
applymovement 8, Olivine_Boat_3_Ceremonia_Move_4
applymovement 9, Olivine_Boat_3_Ceremonia_Move_4
applymovement 10, Olivine_Boat_3_Ceremonia_Move_4
applymovement 11, Olivine_Boat_3_Ceremonia_Move_4
applymovement 12, Olivine_Boat_3_Ceremonia_Move_4
applymovement 14, Olivine_Boat_3_Ceremonia_Move_4
applymovement 15, Olivine_Boat_3_Ceremonia_Move_4
waitmovement 0x0
msgbox Olivine_Boat_3_Ceremonia_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Olivine_Boat_3_Ceremonia_Move_1
applymovement 3, Olivine_Boat_3_Ceremonia_Move_1
applymovement 6, Olivine_Boat_3_Ceremonia_Move_1
applymovement 7, Olivine_Boat_3_Ceremonia_Move_1
applymovement 8, Olivine_Boat_3_Ceremonia_Move_1
applymovement 9, Olivine_Boat_3_Ceremonia_Move_1
applymovement 10, Olivine_Boat_3_Ceremonia_Move_1
applymovement 11, Olivine_Boat_3_Ceremonia_Move_1
applymovement 12, Olivine_Boat_3_Ceremonia_Move_1
applymovement 14, Olivine_Boat_3_Ceremonia_Move_1
applymovement 15, Olivine_Boat_3_Ceremonia_Move_1
waitmovement 0x0
msgbox Olivine_Boat_3_Ceremonia_Texto_2 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Olivine_Boat_3_Ceremonia_Move_5
applymovement 3, Olivine_Boat_3_Ceremonia_Move_6
applymovement 6, Olivine_Boat_3_Ceremonia_Move_6
applymovement 7, Olivine_Boat_3_Ceremonia_Move_5
applymovement 8, Olivine_Boat_3_Ceremonia_Move_5
applymovement 9, Olivine_Boat_3_Ceremonia_Move_5
applymovement 10, Olivine_Boat_3_Ceremonia_Move_6
applymovement 11, Olivine_Boat_3_Ceremonia_Move_5
applymovement 12, Olivine_Boat_3_Ceremonia_Move_6
applymovement 14, Olivine_Boat_3_Ceremonia_Move_6
applymovement 15, Olivine_Boat_3_Ceremonia_Move_5
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Olivine_Boat_3_Ceremonia_Move_7
waitmovement 0x0
special RemoveCameraObject
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 146
release
end

Olivine_Boat_3_Ceremonia_Texto_1:
.string "Ya es un hecho: JOHTO acogerá\n"
	.string "barcos de KANTO en su PUERTO, y\l"
	.string "viceversa.\l"
	.string "¿Puede haber mayor motivo de\l"
	.string "celebración que la unión entre dos\l"
	.string "regiones hermanas como KANTO y\l"
	.string "JOHTO, que, por una desafortunada\l"
	.string "sucesión de malentendidos e\l"
	.string "iniciativas individuales que para\l"
	.string "nada representaban el interés\l"
	.string "global, acabaran en conflicto y\l"
	.string "ahora encuentran de nuevo la paz?\l"
	.string "¡Celebremos, pues este es solo el\l"
	.string "primer paso, dentro de 3 años,\l"
	.string "nadie se acordará de lo ocurrido\l"
	.string "hace 5!\l"
	.string "¡Viva CIUDAD OLIVO!\l"
	.string "¡Viva la unión KANTO-JOHTO!$"

Olivine_Boat_3_Ceremonia_Texto_2:
.string "¡VIVA!$"

Olivine_Boat_3_Ceremonia_Move_1:
walk_in_place_up
step_end

Olivine_Boat_3_Ceremonia_Move_2:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
step_end

Olivine_Boat_3_Ceremonia_Move_3:
walk_in_place_down
step_end

Olivine_Boat_3_Ceremonia_Move_4:
face_up
step_end

Olivine_Boat_3_Ceremonia_Move_5:
face_right
step_end

Olivine_Boat_3_Ceremonia_Move_6:
face_left
step_end

Olivine_Boat_3_Ceremonia_Move_7:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
walk_left
step_end

Olivine_Boat3_Capitan::
lock
delay 15
msgbox Olivine_Boat3_Capitan_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 13, Olivine_Boat3_Capitan_Move_1
waitmovement 0x0
applymovement 13, Olivine_Boat3_Capitan_Move_2
waitmovement 0x0
msgbox Olivine_Boat3_Capitan_Texto_2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 13, Olivine_Boat3_Capitan_Move_1
waitmovement 0x0
msgbox Olivine_Boat3_Capitan_Texto_3 MSGBOX_AUTOCLOSE
msgbox Olivine_Boat3_Capitan_Texto_4 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
setflag FLAG_RECEIVED_SHOAL_SALT_1                              
setflag FLAG_RECEIVED_SHOAL_SALT_2
setflag FLAG_RECEIVED_SHOAL_SALT_3
setflag FLAG_RECEIVED_SHOAL_SALT_4
setflag FLAG_RECEIVED_SHOAL_SHELL_1
setflag FLAG_RECEIVED_SHOAL_SHELL_2
setflag FLAG_RECEIVED_SHOAL_SHELL_3
setflag FLAG_RECEIVED_SHOAL_SHELL_4
fadescreen 1
delay 20
removeobject 13
fadescreen 0
release
end

Olivine_Boat3_Capitan_Texto_1:
.string "...\n"
	.string "...$"

Olivine_Boat3_Capitan_Texto_2:
.string "¿¡No puede uno dormir tranquilo ni\n"
	.string "en su propio barc...!?$"

Olivine_Boat3_Capitan_Texto_3:
.string "Pero...\n"
	.string "¿¡Qué ven mis ojos!?\l"
	.string "¡{PLAYER}!\l"
	.string "¡Eres tú, valiente osado!\l"
	.string "¿No me recuerdas?\l"
	.string "Soy el CAPITÁN del SS.ANNE, me han\l"
	.string "asignado ahora en este barco.$"

Olivine_Boat3_Capitan_Texto_4:
.string "¿Por qué no te pasas por mi\n"
	.string "camarote?\l"
	.string "Confío en que podamos tener una\l"
	.string "charla más amena que la última\l"
	.string "vez.$"

Olivine_Boat3_Capitan_Move_1:
emote_exclamation_mark
step_end

Olivine_Boat3_Capitan_Move_2:
walk_in_place_fast_down
walk_in_place_fast_right
walk_in_place_fast_up
walk_in_place_fast_left
face_player
step_end


Olivine_Boat3_EventScript_Cazabichos::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_11, Olivine_Boat3_Text_CazabichosIntro, Olivine_Boat3_Text_CazabichosDefeated
	msgbox Olivine_Boat3_Text_CazabichosPostBattle, MSGBOX_AUTOCLOSE
	end
