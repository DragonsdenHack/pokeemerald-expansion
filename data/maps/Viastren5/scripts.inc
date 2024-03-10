Viastren5_MapScripts::
	.byte 0

ViasTren5_2::
lock     
faceplayer     
msgbox ViasTren5_Text_2, MSGBOX_DEFAULT
release     
end

ViasTren5_Text_2:
.string "Los poderes eléctricos de ese POKÉMON\n"
.string "eran incomparables, creo que se siente\l"
.string "atraído por el magnetismo de estas\l"
.string "vías.$"



ViasTren5_6::
lock     
faceplayer     
msgbox ViasTren5_Text_6, MSGBOX_DEFAULT
release     
end

ViasTren5_Text_6:
.string "Hemos pasado AZULONA. ¡AZAFRÁN está al\n"
.string "lado!$"



ViasTren5_EventScript_Obrero::
	trainerbattle_single TRAINER_THALIA_2, ViasTren5_Text_ObreroIntro, ViasTren5_Text_ObreroDefeated
	msgbox ViasTren5_Text_ObreroPostBattle, MSGBOX_AUTOCLOSE
	end



ViasTren5_EventScript_Obrero2::
	trainerbattle_single TRAINER_THALIA_3, ViasTren5_Text_Obrero2Intro, ViasTren5_Text_Obrero2Defeated
	msgbox ViasTren5_Text_Obrero2PostBattle, MSGBOX_AUTOCLOSE
	end

ViasTren5_Combate_Atlas_Abajo::
lock
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
waitmoncry
applymovement OBJ_EVENT_ID_PLAYER, ViasTren5_Combate_Atlas_Move_1
waitmovement 0x0
goto ViasTren5_Combate_Atlas

ViasTren5_Combate_Atlas_Arriba::
lock
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
waitmoncry
applymovement OBJ_EVENT_ID_PLAYER, ViasTren5_Combate_Atlas_Move_1.1
waitmovement 0x0
goto ViasTren5_Combate_Atlas


ViasTren5_Combate_Atlas::
playse SE_PIN
applymovement 11, ViasTren5_Combate_Atlas_Move_2
waitmovement 0x0
applymovement 11, ViasTren5_Combate_Atlas_Move_3
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_1 MSGBOX_AUTOCLOSE
applymovement 11, ViasTren5_Combate_Atlas_Move_4
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_2 MSGBOX_AUTOCLOSE
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
waitmoncry
msgbox ViasTren5_Combate_Atlas_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, ViasTren5_Combate_Atlas_Move_5
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_4 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 11, ViasTren5_Combate_Atlas_Move_2
applymovement OBJ_EVENT_ID_PLAYER, ViasTren5_Combate_Atlas_Move_2
waitmovement 0x0
applymovement 11, ViasTren5_Combate_Atlas_Move_3
applymovement OBJ_EVENT_ID_PLAYER, ViasTren5_Combate_Atlas_Move_3
waitmovement 0x0
clearflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_ARCHIE
addobject 9
applymovement 9, ViasTren5_Combate_Atlas_Move_6
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_5 MSGBOX_AUTOCLOSE
applymovement 11, ViasTren5_Combate_Atlas_Move_12
applymovement 9, ViasTren5_Combate_Atlas_Move_7
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_6 MSGBOX_AUTOCLOSE
applymovement 9, ViasTren5_Combate_Atlas_Move_8
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_7 MSGBOX_AUTOCLOSE
applymovement 9, ViasTren5_Combate_Atlas_Move_9
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_8 MSGBOX_AUTOCLOSE
msgbox ViasTren5_Combate_Atlas_Texto_9 MSGBOX_AUTOCLOSE
applymovement 9, ViasTren5_Combate_Atlas_Move_10
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_10 MSGBOX_AUTOCLOSE
msgbox ViasTren5_Combate_Atlas_Texto_11 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ATLAS_2, ViasTren5_Combate_Atlas_Texto_12
delay 15
applymovement 9, ViasTren5_Combate_Atlas_Move_3
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_13 MSGBOX_AUTOCLOSE
applymovement 9, ViasTren5_Combate_Atlas_Move_10
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_14 MSGBOX_AUTOCLOSE
delay 15
applymovement 9, ViasTren5_Combate_Atlas_Move_10.1
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_14.1 MSGBOX_AUTOCLOSE
applymovement 9, ViasTren5_Combate_Atlas_Move_10.3
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_14.2 MSGBOX_AUTOCLOSE
applymovement 9, ViasTren5_Combate_Atlas_Move_10.2
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_14.3 MSGBOX_AUTOCLOSE
msgbox ViasTren5_Combate_Atlas_Texto_15 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_ARCHIE
fadescreen 1
delay 20
removeobject 9
fadescreen 0
delay 20
msgbox ViasTren5_Combate_Atlas_Texto_16 MSGBOX_AUTOCLOSE
delay 20
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
waitmoncry
delay 20
setflag FLAG_HIDE_ROUTE_119_TEAM_AQUA
removeobject 10
playse SE_M_FLY
msgbox ViasTren5_Combate_Atlas_Texto_17 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, ViasTren5_Combate_Atlas_Move_9
applymovement 11, ViasTren5_Combate_Atlas_Move_2
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_18 MSGBOX_AUTOCLOSE
msgbox ViasTren5_Combate_Atlas_Texto_19 MSGBOX_AUTOCLOSE
msgbox ViasTren5_Combate_Atlas_Texto_20 MSGBOX_AUTOCLOSE
msgbox ViasTren5_Combate_Atlas_Texto_21 MSGBOX_AUTOCLOSE
delay 30
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
applymovement 11, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
delay 20
msgbox ViasTren5_Combate_Atlas_Texto_22 MSGBOX_AUTOCLOSE
delay 20
msgbox ViasTren5_Combate_Atlas_Texto_23 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
applymovement 11, ViasTren5_Combate_Atlas_Move_11
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_24 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
msgbox ViasTren5_Combate_Atlas_Texto_25 MSGBOX_AUTOCLOSE
delay 15
msgbox ViasTren5_Combate_Atlas_Texto_26 MSGBOX_AUTOCLOSE
setflag FLAG_RECEIVED_SHOAL_SHELL_3
setvar VAR_UNUSED_0x40F7, 203
release
end

ViasTren5_Combate_Atlas_Move_12:
face_down
step_end

ViasTren5_Combate_Atlas_Move_11:
walk_down
face_right
step_end

ViasTren5_Combate_Atlas_Move_10:
walk_in_place_right
step_end

ViasTren5_Combate_Atlas_Move_10.1:
delay_8
face_up
delay_8
step_end

ViasTren5_Combate_Atlas_Move_10.2:
delay_8
walk_slow_left
delay_8
step_end

ViasTren5_Combate_Atlas_Move_10.3:
delay_8
face_left
delay_8
step_end

ViasTren5_Combate_Atlas_Move_8:
face_up
step_end

ViasTren5_Combate_Atlas_Move_9:
face_right
step_end

ViasTren5_Combate_Atlas_Move_7:
walk_slow_right
step_end

ViasTren5_Combate_Atlas_Move_6:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

ViasTren5_Combate_Atlas_Move_5:
walk_slow_right
walk_slow_right
step_end

ViasTren5_Combate_Atlas_Move_4:
walk_up
walk_left
walk_in_place_down
step_end

ViasTren5_Combate_Atlas_Move_3:
face_left
step_end

ViasTren5_Combate_Atlas_Move_2:
emote_exclamation_mark
step_end

ViasTren5_Combate_Atlas_Move_1:
walk_right
step_end

ViasTren5_Combate_Atlas_Move_1.1:
walk_down
walk_right
step_end

ViasTren5_Combate_Atlas_Texto_1:
.string "¿{PLAYER}? Al fin, debes atraparlo,\n"
	.string "{PLAYER}, ninguno de nosotros puede.$"

ViasTren5_Combate_Atlas_Texto_2:
.string "Ha desarrollado una sinergia con la\n"
	.string "tecnología empleada para construir las\l"
	.string "vías, es como si hubiera integrado todo\l"
	.string "ese magnetismo en su cuerpo, y ahora\l"
	.string "sus poderes se han amplificado.$"

ViasTren5_Combate_Atlas_Texto_3:
.string "Solo tú puedes detenerlo, y debes\n"
	.string "atraparlo. Estas vías seguirán en\l"
	.string "peligro mientras ese POKÉMON ande\l"
	.string "suelto.$"

ViasTren5_Combate_Atlas_Texto_4:
.string "????: ¡Un momento!$"

ViasTren5_Combate_Atlas_Texto_5:
.string "ATLAS: Me alegro de verte, {PLAYER}.\n"
	.string "Te preguntarás por qué estoy aquí.$"

ViasTren5_Combate_Atlas_Texto_6:
.string "La II reunión de TRIGAL es inminente,\n"
	.string "he venido a avisarte, pero también…$"

ViasTren5_Combate_Atlas_Texto_7:
.string "Oí rumores acerca de este POKÉMON, el\n"
	.string "último de los 3 PRIMIGENIOS sin un\l"
	.string "ENTRENADOR…$"

ViasTren5_Combate_Atlas_Texto_8:
.string "Un POKÉMON así encajaría a la\n"
	.string "perfección con mi equipo, la pareja\l"
	.string "perfecta para mi HOUNDOOM y\l"
	.string "FERALIGATR{PAUSE 25}…{PAUSE 25} Mi deber y ambición como\l"
	.string "ADMIN.JEFE, al igual que el tuyo, es\l"
	.string "formar un equipo lo más implacable\l"
	.string "posible.$"

ViasTren5_Combate_Atlas_Texto_9:
.string "Por ello te reto a un combate aquí\n"
	.string "mismo, {PLAYER}. Quien gane obtendrá\l"
	.string "el derecho de enfrentar a ZAPDOS-P, y\l"
	.string "hacerse con él.$"

ViasTren5_Combate_Atlas_Texto_10:
.string "No esperaba menos de ti. Al igual que\n"
	.string "ANDRA, tu código de honor te impide\l"
	.string "rehusar un gran combate cuando lo\l"
	.string "tienes delante.$"

ViasTren5_Combate_Atlas_Texto_11:
.string "El ganador podrá aunar tecnología y\n"
	.string "tradición como ningún otro ENTRENADOR\l"
	.string "haya logrado antes, ¡muéstrame que\l"
	.string "mereces ese gran poder!$"

ViasTren5_Combate_Atlas_Texto_12:
.string "Hemos alcanzado enormes cotas de\n"
	.string "poder aquí, ZAPDOS-P estará\l"
	.string "impresionado…$"

ViasTren5_Combate_Atlas_Texto_13:
.string "ATLAS: Bien{PAUSE 25}…{PAUSE 25} Así ha de ser{PAUSE 25}…{PAUSE 25} Ya me lo\n"
	.string "dijo ANDRA, mejorar tu equipo POKÉMON\l"
	.string "más y más no es suficiente contigo. Se\l"
	.string "necesita algo más para romper ese aura\l"
	.string "que has construido en torno a los\l"
	.string "tuyos.$"

ViasTren5_Combate_Atlas_Texto_14:
.string "Que este ZAPDOS-P colabore en tu\n"
	.string "eterno viaje, {PLAYER}, solo espero\l"
	.string "que no te acomodes al verte con\l"
	.string "tremendo POKÉMON bajo tu poder.$"

ViasTren5_Combate_Atlas_Texto_14.1:
.string "Porque{PAUSE 25}…{PAUSE 25} a diferencia de la justicia, a\n"
	.string "la fuerza se la reconoce bien y sin\l"
	.string "discusión. La búsqueda de sus frutos,\l"
	.string "así como el evitar que otros los\l"
	.string "obtengan, es lo que de verdad nos\l"
	.string "impulsa a mejorar.$"

ViasTren5_Combate_Atlas_Texto_14.2:
.string "Ya lo intuirás, pero ANDRA se niega\n"
	.string "a admitir esto. Su fuerza radica en\l"
	.string "un optimismo desbordante y gran\l"
	.string "espíritu de superación. Cree en ella y\l"
	.string "sus POKÉMON como nadie, y confía en el\l"
	.string "proceso. Pero todo eso tiene un límite\l"
	.string "{PAUSE 25}…{PAUSE 25} biológico.$"

ViasTren5_Combate_Atlas_Texto_14.3:
.string "Aunque suene duro, tú sabes que\n"
	.string "siempre fue así, {PLAYER}. Por eso\l"
	.string "vamos todos a reunirnos en TRIGAL. La\l"
	.string "debilidad no tiene lugar aquí, y por\l"
	.string "ello{PAUSE 25}…{PAUSE 25} no concibo una existencia\l"
	.string "distinta a la plena búsqueda de esa\l"
	.string "fuerza, aunque sea artificial.$"

ViasTren5_Combate_Atlas_Texto_15:
.string "Nos vemos en TORRE RADIO. Hay mucho de\n"
	.string "lo que hablar allí.$"

ViasTren5_Combate_Atlas_Texto_16:
.string "…$"

ViasTren5_Combate_Atlas_Texto_17:
.string "(El ZAPDOS-P voló a gran velocidad)$"

ViasTren5_Combate_Atlas_Texto_18:
.string "…$"

ViasTren5_Combate_Atlas_Texto_19:
.string "¡Este es un momento único en la \n"
	.string "historia!$"

ViasTren5_Combate_Atlas_Texto_20:
.string "Por primera vez y ya para siempre,\n"
	.string "TRIGAL y AZAFRÁN están unidas.$"

ViasTren5_Combate_Atlas_Texto_21:
.string "Esto estaba destinado a ocurrir, antes\n"
	.string "o después. Ni los MOTORISTAS, ni los\l"
	.string "subterráneos de KANTO, que serán\l"
	.string "cerrados en breve, ni ZAPD…$"

ViasTren5_Combate_Atlas_Texto_22:
.string "{PAUSE 25}…{PAUSE 25}$"

ViasTren5_Combate_Atlas_Texto_23:
.string "¿Si? {PAUSE 25}…{PAUSE 25} No{PAUSE 25}…{PAUSE 25} ¿Cómo es posible?{PAUSE 25} ¡Eso no\n"
	.string "puede estar pasado!{PAUSE 25} ¡Detenedlo ya!$"

ViasTren5_Combate_Atlas_Texto_24:
.string "{PLAYER}{PAUSE 25}…{PAUSE 25} parece que ZAPDOS-P ha\n"
	.string "volado hacia la renovada CENTRAL\l"
	.string "ENERGÍA, esta absorbiendo toda la\l"
	.string "electricidad del lugar, si sigue así,\l"
	.string "nos quedaremos sin energía para\l"
	.string "alimentar el MAGNETOTRÉN.$"

ViasTren5_Combate_Atlas_Texto_25:
.string "Debes pararle los pies de una vez por\n"
	.string "todas, hasta que no esté capturado, no\l"
	.string "podremos estar tranquilos.$"

ViasTren5_Combate_Atlas_Texto_26:
.string "Confío en ti.$"


ViasTren5_Presidente_Trenes::
lock
faceplayer
msgbox ViasTren5_Combate_Atlas_Texto_26 MSGBOX_AUTOCLOSE
release
end
