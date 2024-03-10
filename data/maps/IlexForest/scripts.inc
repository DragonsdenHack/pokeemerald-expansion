IlexForest_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, IlexForest_OnResume
	.byte 0

IlexForest_OnResume:
	call IlexForest_SetupEscapeWarp
	end

IlexForest_SetupEscapeWarp::
	setescapewarp MAP_AZALEA_TOWN, 7, 11
	return

IlexForest1::
lock     
faceplayer     
msgbox IllexForest_Text_1, MSGBOX_DEFAULT
release     
end

IllexForest_Text_1:
.string "PUEBLO AZALEA siempre ha obtenido\n"
.string "la madera con la que fabricamos\l"
.string "carbón de este bosque. Le estamos\l"
.string "muy agradecidos.$"



IlexForest2::
end



IlexForest3::
lock     
faceplayer     
msgbox IllexForest_Text_3, MSGBOX_DEFAULT
release     
end

IllexForest_Text_3:
.string "Malditos arbustos…\n"
.string "¿Por qué se regeneran si acabo de\l"
.string "cortarlos hace nada?\l"
.string "¿En serio tengo que volver a\l"
.string "AZALEA a por CORTE?$"



IlexForest4::
end



IlexForest5::
end



IlexForest6::
end



IlexForest7::
end



IlexForest8::
end



IlexForest9::
lock     
faceplayer     
msgbox IllexForest_Text_9, MSGBOX_DEFAULT
release     
end

IllexForest_Text_9:
.string "Entonces, FARFETCH es débil, pero\n"
.string "nadie corta la madera como ese\l"
.string "POKÉMON…$"



IlexForest10::
end



IlexForest11::
end



IlexForest_EventScript_Cazabichos::
	trainerbattle_single TRAINER_WALLY_VR_4, IlexForest_Text_CazabichosIntro, IlexForest_Text_CazabichosDefeated
	msgbox IlexForest_Text_CazabichosPostBattle, MSGBOX_AUTOCLOSE
	end



IlexForest_EventScript_Chico::
	trainerbattle_single TRAINER_BRENDAN_LILYCOVE_MUDKIP, IlexForest_Text_ChicoIntro, IlexForest_Text_ChicoDefeated
	msgbox IlexForest_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



IlexForest_EventScript_Chica::
	trainerbattle_single TRAINER_WALLY_VR_5, IlexForest_Text_ChicaIntro, IlexForest_Text_ChicaDefeated
	msgbox IlexForest_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end


IlexForest_Llamada_Giovanni::
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
msgbox IlexForest_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
msgbox IlexForest_Llamada_Giovanni_Texto_2 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
setvar VAR_UNUSED_0x40F7, 132
release
end

IlexForest_Llamada_Giovanni_Texto_1:
.string "GIOVANNI: ¿{PLAYER}?\n"
	.string "Se oye mal, debes de estar en el\l"
	.string "ENCINAR, ¿me equivoco?\l"
	.string "Grandes recuerdos me trae ese\l"
	.string "lugar, sí{PAUSE 25}…{PAUSE 25}\l"
	.string "Ya tenemos la información del\l"
	.string "BUTTERFREE FUERTE VÍNCULO de\l"
	.string "CÉSAR. Lo más extraordinario no\l"
	.string "son sus 505 STATS BASE, es\l"
	.string "su insuperable reparto de STATS\l"
	.string "útiles. Tiene{PAUSE 25}…{PAUSE 25} ¡solo 5 de BASE en\l"
	.string "ATAQUE!\l"
	.string "Entre esto y su HABILIDAD\l"
	.string "ADAPTABLE, en la práctica se\l"
	.string "vuelve un POKÉMON mucho más\l"
	.string "peligroso que la mayoría de\l"
	.string "PSEUDOLEGENDARIOS. Es increíble en\l"
	.string "lo que puede llegar a convertirse\l"
	.string "un POKÉMON como BUTTERFREE,\l"
	.string "a priori destinado a ser mediocre\l"
	.string "con sus 395 de BASE, ¿no crees?$"

IlexForest_Llamada_Giovanni_Texto_2:
.string "Por otro lado, he enviado a ATLAS\n"
	.string "a CIUDAD TRIGAL, quiero que te\l"
	.string "reúnas con él en la TORRE RADIO.\l"
	.string "ATLAS te explicará los detalles\l"
	.string "cuando lo veas, espero noticias\l"
	.string "tuyas de nuevo {PLAYER}.$"


IlexForestDocumento_100::
msgbox IlexForestDocumento_Text_100, MSGBOX_SIGN   
end

IlexForestDocumento_Text_100:
.string "Hay tantos árboles en el ENCINAR\n"
	.string "que no se ve ni el cielo.\l"
	.string "Por favor, busca objetos que\l"
	.string "puedan haber caído.$"

IlexForest_IdaVuelta::
lock     
faceplayer  
goto_if_set FLAG_NUEVA_808, IlexForest_Despues
msgbox IlexForest_Texto_1, MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM91
msgbox IlexForest_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
setflag FLAG_NUEVA_808
release     
end

IlexForest_Despues::
msgbox IlexForest_Texto_2, MSGBOX_NPC
release
end

IlexForest_Texto_1.1:
.string "¡{PLAYER} obtuvo la MT91 IDA Y\n"
	.string "VUELTA de manos de cazabichos!$"

IlexForest_Texto_1:
.string "Estoy aquí desarrollando\n"
	.string "en secreto el movimiento TIPO\l"
	.string "BICHO defintivo en cuanto\l"
	.string "estrategia. IDA Y VUELTA marcará\l"
	.string "un antes y un después en el ritmo\l"
	.string "de los combates. Mira.$"

IlexForest_Texto_2:
.string "¡Vas a tener a los POKÉMON más\n"
	.string "escurridizos e impredecibles\l"
	.string "gracias a IDA Y VUELTA, ya lo\l"
	.string "verás!$"
