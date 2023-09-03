PokemonMansion_4F_MapScripts::
	.byte 0

PokemonMansion4F_1::
end



PokemonMansion4F_2::
end



PokemonMansion4F_3::
end



PokemonMansion4F_4::
end



PokemonMansion4F_5::
end



PokemonMansion4F_6::
end



PokemonMansion4F_EventScript_Cientifico::
	trainerbattle_single TRAINER_ETHAN_3, PokemonMansion4F_Text_CientificoIntro, PokemonMansion4F_Text_CientificoDefeated
	msgbox PokemonMansion4F_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



PokemonMansion4F_EventScript_Cientifico2::
	trainerbattle_single TRAINER_ELLIOT_4, PokemonMansion4F_Text_Cientifico2Intro, PokemonMansion4F_Text_Cientifico2Defeated
	msgbox PokemonMansion4F_Cientifico2PostBattle, MSGBOX_AUTOCLOSE
	end


PokemonMansion4FDocumento_100::
lock     
msgbox PokemonMansion4FDocumento_Text_100, MSGBOX_DEFAULT
release     
end

PokemonMansion4FDocumento_Text_100:
	.string "Diario: 1 de Septiembre\n"
	.string "Mewtwo es demasiado poderoso, no\l"
	.string "hemos podido contener sus malos\l"
	.string "instintos...$"

PokemonMansion_4F_Blaine_Fuji::
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_4F_Blaine_Fuji_Move_1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_4F_Blaine_Fuji_Move_2
waitmovement 0x0
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_1 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonMansion_4F_Blaine_Fuji_Move_3
waitmovement 0x0
special RemoveCameraObject
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_2 MSGBOX_AUTOCLOSE
applymovement 7, PokemonMansion_4F_Blaine_Fuji_Move_1
waitmovement 0x0
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_3 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 8, PokemonMansion_4F_Blaine_Fuji_Move_4.1
waitmovement 0x0
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_4 MSGBOX_AUTOCLOSE
applymovement 8, PokemonMansion_4F_Blaine_Fuji_Move_5
waitmovement 0x0
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_5 MSGBOX_AUTOCLOSE
applymovement 7, PokemonMansion_4F_Blaine_Fuji_Move_1
waitmovement 0x0
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_6 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 8, PokemonMansion_4F_Blaine_Fuji_Move_6
waitmovement 0x0
delay 10
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_7 MSGBOX_AUTOCLOSE
applymovement 8, PokemonMansion_4F_Blaine_Fuji_Move_4
waitmovement 0x0
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_8 MSGBOX_AUTOCLOSE
applymovement 7, PokemonMansion_4F_Blaine_Fuji_Move_1
waitmovement 0x0
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_9 MSGBOX_AUTOCLOSE
applymovement 8, PokemonMansion_4F_Blaine_Fuji_Move_5
waitmovement 0x0
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_11 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
fadescreen 1
playmoncry SPECIES_MAGMAR, CRY_MODE_ENCOUNTER
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_12 MSGBOX_AUTOCLOSE
waitmoncry
delay 20
removeobject 8
playse SE_WARP_IN
waitse
fadescreen 0
delay 25
applymovement 7, PokemonMansion_4F_Blaine_Fuji_Move_5
waitmovement 0x0
delay 20
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_13 MSGBOX_AUTOCLOSE
delay 20
fadescreen 1
removeobject 7
playse SE_WARP_IN
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_14 MSGBOX_AUTOCLOSE
waitse
fadescreen 0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonMansion_4F_Blaine_Fuji_Move_7
waitmovement 0x0
special RemoveCameraObject
delay 30
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_15 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
playse SE_POKENAV_OFF
setvar VAR_UNUSED_0x40F7, 76
release
end

PokemonMansion_4F_Blaine_Fuji_Texto_1:
.string "????: Es nuestra única oportunidad\n"
	.string "BLAINE, tú sabes dónde se esconde,\l"
	.string "¡ahora que el TEAM ROCKET tiene la\l"
	.string "MASTER BALL solo nos queda\l"
	.string "capturarlo y pondremos fin a esto!$"

PokemonMansion_4F_Blaine_Fuji_Texto_2:
.string "BLAINE: No es tan sencillo FUJI,\n"
	.string "OAK también sabe lo de MEWTWO,\l"
	.string "¿crees que no le dirá a LANCE que\l"
	.string "el TEAM ROCKET trama algo en\l"
	.string "cuanto presienta que va tras\l"
	.string "nuestra creación?\l"
	.string "Además, tenía entendido que la\l"
	.string "invasión a SILPH fue un fracaso.$"

PokemonMansion_4F_Blaine_Fuji_Texto_3:
.string "FUJI: Eso es lo que han hecho\n"
	.string "creer a los medios, uno de los\l"
	.string "EJECUTIVOS ROCKET, PROTÓN, me ha\l"
	.string "informado de lo que acaba de\l"
	.string "ocurrir allí, al parecer GIOVANNI\l"
	.string "ha convencido al PRESIDENTE de\l"
	.string "rebelarse contra LAN...$"

PokemonMansion_4F_Blaine_Fuji_Texto_4:
.string "BLAINE: ¡Ilusos!\n"
	.string "¿Creéis que un LEGENDARIO basta\l"
	.string "para detener a LANCE?\l"
	.string "¿Te tengo que recordar los\l"
	.string "destrozos que causó usando tres?\l"
	.string "¡TRES!\l"
	.string "Legendarios diferentes, MEWTWO por\l"
	.string "sí solo es el POKÉMON más poderoso\l"
	.string "jamás creado, hicimos un gran\l"
	.string "trabajo en este laboratorio en su\l"
	.string "día, pero LANCE tiene a toda la\l"
	.string "ÉLITE 4 protegiéndole, y esos\l"
	.string "dragones...\l"
	.string "¿Se te olvida que tiene no 1, si no\l"
	.string "3 de esos pseudolegendarios\l"
	.string "guardándole las espaldas?$"

PokemonMansion_4F_Blaine_Fuji_Texto_5:
.string "BLAINE: Todo el que quiera\n"
	.string "revelarse contra LANCE ahora mismo\l"
	.string "es un suicida, cuenta con\l"
	.string "demasiado poder a pesar de\l"
	.string "desconocer la existencia de\l"
	.string "MEWTWO, ha hecho honor a su fama\l"
	.string "de ENTRENADOR de POKÉMON SAGRADOS.$"

PokemonMansion_4F_Blaine_Fuji_Texto_6:
.string "FUJI: GIOVANNI cuenta con\n"
	.string "tecnología para clonar a las AVES\l"
	.string "de KANTO también BLAINE, puede que\l"
	.string "no tengamos una ocasión como esta\l"
	.string "en mucho tiempo, siempre has sido\l"
	.string "alguien con el que se puede\l"
	.string "razonar, ¿qué te frena a\l"
	.string "intentarlo?$"

PokemonMansion_4F_Blaine_Fuji_Texto_7:
.string "BLAINE: Así que las AVES\n"
	.string "LEGENDARIAS también...$"

PokemonMansion_4F_Blaine_Fuji_Texto_8:
.string "BLAINE: Veré qué puedo hacer FUJI,\n"
	.string "vuelve a PUEBLO LAVANDA, no es\l"
	.string "recomendable que te vean por aquí,\l"
	.string "podrían sospechar, dos\l"
	.string "ex-científicos como nosotros\l"
	.string "reunidos...$"

PokemonMansion_4F_Blaine_Fuji_Texto_9:
.string "FUJI: ¡Por fin has entrado en\n"
	.string "razón BLAINE, verás como GIOVANNI\l"
	.string "podrá poner fin a todo esto!$"

PokemonMansion_4F_Blaine_Fuji_Texto_10:
.string "BLAINE: Tendrás noticias mías en\n"
	.string "las próximas horas, hasta\l"
	.string "entonces...$"

PokemonMansion_4F_Blaine_Fuji_Texto_11:
.string "BLAINE: ¡MAGMAR, TELETRANSPORTE!$"

PokemonMansion_4F_Blaine_Fuji_Texto_12:
.string "¡Mag!$"

PokemonMansion_4F_Blaine_Fuji_Texto_13:
.string "FUJI: ...$"

PokemonMansion_4F_Blaine_Fuji_Texto_14:
.string "(FUJI USÓ CUERDA HUIDA)$"

PokemonMansion_4F_Blaine_Fuji_Texto_15:
.string "GIOVANNI: ¿{PLAYER}?\n"
	.string "El asalto a SILPH ha sido un éxito\l"
	.string "en todos los sentidos, ROJO ha\l"
	.string "picado el anzuelo, ya estamos\l"
	.string "todos de vuelta a la BASE,\l"
	.string "preséntate en mi despacho a la\l"
	.string "mayor brevedad posible.$"

PokemonMansion_4F_Blaine_Fuji_Move_1:
walk_in_place_left
step_end

PokemonMansion_4F_Blaine_Fuji_Move_2:
emote_exclamation_mark
step_end

PokemonMansion_4F_Blaine_Fuji_Move_3:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

PokemonMansion_4F_Blaine_Fuji_Move_4:
face_right
step_end

PokemonMansion_4F_Blaine_Fuji_Move_4.1:
walk_in_place_right
step_end

PokemonMansion_4F_Blaine_Fuji_Move_5:
face_up
step_end

PokemonMansion_4F_Blaine_Fuji_Move_6:
emote_exclamation_mark
face_down
step_end

PokemonMansion_4F_Blaine_Fuji_Move_7:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

PokemonMansion_4F_Entrada_Secreta::
lock
clearflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
addobject 9
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_4F_Entrada_Secreta_Move_1
waitmovement 0x0
msgbox PokemonMansion_4F_Entrada_Secreta_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_4F_Entrada_Secreta_Move_2
waitmovement 0x0
playse SE_PC_ON
delay 40
playse SE_PC_LOGIN
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 6, 3, 0x2D0, TRUE
setmetatile 6, 4, 0x2D8, TRUE
setmetatile 7, 3, 0x2D1, TRUE
setmetatile 7, 4, 0x2D9, TRUE
setmetatile 8, 3, 0x2D2, FALSE
setmetatile 8, 2, 0x2B2, TRUE
special DrawWholeMapView
delay 20
msgbox PokemonMansion_4F_Entrada_Secreta_Texto_2 MSGBOX_AUTOCLOSE
applymovement 9, PokemonMansion_4F_Entrada_Secreta_Move_3
waitmovement 0x0
setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
removeobject 9
playse SE_EXIT
setflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
setvar VAR_UNUSED_0x40F7, 114
delay 15
release
end

PokemonMansion_4F_Entrada_Secreta_Move_1:
walk_in_place_left
step_end

PokemonMansion_4F_Entrada_Secreta_Move_2:
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

PokemonMansion_4F_Entrada_Secreta_Move_3:
face_left
step_end

PokemonMansion_4F_Entrada_Secreta_Texto_1:
.string "Entonces decidiste venir.$"

PokemonMansion_4F_Entrada_Secreta_Texto_2:
.string "Que así sea, ante el poder que\n"
	.string "aquí hemos creado, no hay\l"
	.string "ENTRENADOR que pueda competir.$"


PokemonMansion_4F_PC::
compare VAR_UNUSED_0x40F7, 51
goto_if_gt PokemonMansion_4F_Warp
msgbox PokemonMansion_4F_PC_PC_Texto_1 MSGBOX_AUTOCLOSE
release
end

PokemonMansion_4F_Warp::
msgbox RocketHideout_4F_Warp_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
playse SE_PC_ON
delay 40
playse SE_PC_LOGIN
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 6, 3, 0x2D0, TRUE
setmetatile 6, 4, 0x2D8, TRUE
setmetatile 7, 3, 0x2D1, FALSE
setmetatile 7, 4, 0x2D9, TRUE
setmetatile 8, 3, 0x2D2, FALSE
setmetatile 8, 2, 0x2B2, TRUE
special DrawWholeMapView
delay 60
release
end

PokemonMansion_4F_PC_PC_Texto_1:
.string "No parece una máquina como las otras,\n"
	.string "parece que cumple una función más\l"
	.string "importante...$"
