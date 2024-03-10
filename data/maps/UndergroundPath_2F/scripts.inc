UndergroundPath_2F_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, UndergroundPath_2F_OnResume
	.byte 0

UndergroundPath_2F_OnResume:
	call UndergroundPath_2F_SetupEscapeWarp
	end

UndergroundPath_2F_SetupEscapeWarp::
	setescapewarp MAP_ROUTE6, 19, 14
	return

UndergroundPath2F_2::
end



UndergroundPath2F_3::
lock
msgbox UndergroundPath2F_3_Texto_1 MSGBOX_DEFAULT
release
end

UndergroundPath2F_3_Texto_1:
.string "Jojojo… Verás cuando todos vean mi\n"
	.string "reluciente FLAREON.$"



UndergroundPath2F_4::
lock
msgbox UndergroundPath2F_4_Texto_1 MSGBOX_DEFAULT
release
end

UndergroundPath2F_4_Texto_1:
.string "La especulación con EEVEE está en\n"
	.string "auge, si compro 5 y los mantengo varios\l"
	.string "años, puedo ganar el doble de lo\l"
	.string "invertido.$"



UndergroundPath2F_5::
lock
msgbox UndergroundPath2F_5_Texto_1 MSGBOX_DEFAULT
release
end

UndergroundPath2F_5_Texto_1:
.string "Un VAPOREON es lo que necesito para\n"
	.string "completar mi espectáculo, cuando use\l"
	.string "ARMADURA ÁCIDA bajo el agua, todos\l"
	.string "quedarán impresionados.$"

UndergroundPath2F_Andra::
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath2F_Andra_move_1
waitmovement 0x0
playse SE_PIN
applymovement 1, UndergroundPath2F_Andra_move_2
waitmovement 0x0
playse 559
msgbox UndergroundPath2F_Andra_Text_1, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_2, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_3, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_4, MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_2, UndergroundPath2F_Andra_Text_5
msgbox UndergroundPath2F_Andra_Text_6, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_7, MSGBOX_AUTOCLOSE
applymovement 1, UndergroundPath2F_Andra_move_5
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
removeobject 1
setvar VAR_UNUSED_0x40F7, 8
release
end

UndergroundPath2F_Andra_Text_1:
.string "ANDRA: ¡{PLAYER}!\n"
	.string "Perdón por haberme adelantado,\l"
	.string "pero quería eclosionar cuanto\l"
	.string "antes el HUEVO que ATLAS nos dio\l"
	.string "al acabar nuestra misión en ISLA\l"
	.string "INTA, y así comenzar ya a\l"
	.string "entrenarlo.$"

UndergroundPath2F_Andra_Text_2:
    .string "Con las prisas se me olvidó\n"
	.string "informarte acerca del lugar que se\l"
	.string "nos ha asignado para las próximas\l"
	.string "misiones, hay varios temas que al\l"
	.string "parecer requieren de nuestra\l"
	.string "intervención.$"

UndergroundPath2F_Andra_Text_3:
    .string "Entretanto, ¿qué opinas de los\n"
	.string "ciudadanos de KANTO?\l"
	.string "Parece que no les agradamos en lo\l"
	.string "más mínimo, ¿eh?\l"
	.string "Al parecer la ÉLITE 4 inició hace\l"
	.string "ya tiempo una campaña de\l"
	.string "desprestigio contra la\l"
	.string "organización, poco después de\l"
	.string "acabar la guerra.$"

UndergroundPath2F_Andra_Text_4:
    .string "He tenido tiempo desde mi derrota\n"
	.string "ante la CÓNSUL de mejorar a mi\l"
	.string "EQUIPO POKÉMON, dudo mucho que\l"
	.string "ahora pueda vencerme, sin embargo,\l"
	.string "quiero probar si el desenlace de\l"
	.string "nuestro primer combate en\l"
	.string "presencia de ATLAS fue casualidad\l"
	.string "o no, ¡prepárate, iré con todo!$"

UndergroundPath2F_Andra_Text_5:
    .string "De modo que no era casualidad,\n"
	.string "realmente eres un ENTRENADOR\l"
	.string "notable.$"

UndergroundPath2F_Andra_Text_6:
    .string "Así que vas en serio, debería de\n"
	.string "alegrarme, prefiero tener a mi\l"
	.string "lado en futuras misiones a alguien\l"
	.string "de mi nivel que a alguien\l"
	.string "mediocre, pero no te confíes, en\l"
	.string "cualquier momento voy a superar tu\l"
	.string "nivel. Me convertiré en la RECLUTA\l"
	.string "más fuerte y eficiente de toda la\l"
	.string "organización.$"

UndergroundPath2F_Andra_Text_7:
	.string "Un mensajero me dijo que el\n"
	.string "ADMINISTRADOR ROCKET de esta zona,\l"
	.string "PETREL, nos ha citado en la\l"
	.string "GUARDERÍA POKÉMON que hay al\l"
	.string "atravesar este subterráneo, dijo\l"
	.string "que entráramos al lugar\l"
	.string "disimuladamente y sin ser vistos,\l"
	.string "eso es todo. De modo que ahí nos\l"
	.string "vemos.\l"
	.string "¡No tardes, eh!$"

UndergroundPath2F_Andra_move_1:
walk_in_place_up
step_end

UndergroundPath2F_Andra_move_2:
emote_exclamation_mark
walk_slow_left
walk_down
walk_down
step_end

UndergroundPath2F_Andra_move_2.1:
emote_exclamation_mark
walk_down
walk_down
step_end

UndergroundPath2F_Andra_move_2.2:
emote_exclamation_mark
walk_slow_right
walk_down
walk_down
step_end

UndergroundPath2F_Andra_move_2.3:
emote_exclamation_mark
walk_slow_right
walk_down
walk_slow_right
walk_down
step_end

UndergroundPath2F_Andra_move_3:
walk_in_place_right
walk_in_place_down
step_end

UndergroundPath2F_Andra_move_4:
face_up
step_end

UndergroundPath2F_Andra_move_5:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

UndergroundPath2F_Andra2::
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath2F_Andra_move_1
waitmovement 0x0
playse SE_PIN
applymovement 1, UndergroundPath2F_Andra_move_2.1
waitmovement 0x0
fadeoutbgm 0
playse 559
msgbox UndergroundPath2F_Andra_Text_1, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_2, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_3, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_4, MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_2, UndergroundPath2F_Andra_Text_5
msgbox UndergroundPath2F_Andra_Text_6, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_7, MSGBOX_AUTOCLOSE
applymovement 1, UndergroundPath2F_Andra_move_5
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
removeobject 1
setvar VAR_UNUSED_0x40F7, 8
release
end


UndergroundPath2F_Andra3::
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath2F_Andra_move_1
waitmovement 0x0
playse SE_PIN
applymovement 1, UndergroundPath2F_Andra_move_2.2
waitmovement 0x0
fadeoutbgm 0
playse 559
msgbox UndergroundPath2F_Andra_Text_1, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_2, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_3, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_4, MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_2, UndergroundPath2F_Andra_Text_5
msgbox UndergroundPath2F_Andra_Text_6, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_7, MSGBOX_AUTOCLOSE
applymovement 1, UndergroundPath2F_Andra_move_5
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
removeobject 1
setvar VAR_UNUSED_0x40F7, 8
release
end


UndergroundPath2F_Andra4::
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath2F_Andra_move_1
waitmovement 0x0
playse SE_PIN
applymovement 1, UndergroundPath2F_Andra_move_2.3
waitmovement 0x0
fadeoutbgm 0
playse 559
msgbox UndergroundPath2F_Andra_Text_1, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_2, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_3, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_4, MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_2, UndergroundPath2F_Andra_Text_5
msgbox UndergroundPath2F_Andra_Text_6, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_7, MSGBOX_AUTOCLOSE
applymovement 1, UndergroundPath2F_Andra_move_5
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
removeobject 1
setvar VAR_UNUSED_0x40F7, 8
release
end

UndergroundPath2F_Secundaria_Eevees::
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_1
waitmovement 0x0
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_1 MSGBOX_DEFAULT
delay 20
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_3 MSGBOX_DEFAULT
delay 20
playse SE_PIN
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_2
waitmovement 0x0
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_3
waitmovement 0x0
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_4 MSGBOX_NPC
delay 20
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_3 MSGBOX_NPC
delay 20
playse SE_PIN
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_2
waitmovement 0x0
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_5 MSGBOX_NPC
playse MUS_RG_ENCOUNTER_ROCKET
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_6 MSGBOX_NPC
trainerbattle_no_intro TRAINER_PETE, UndergroundPath2F_Secundaria_Eevees_Texto_7
delay 15
playse SE_PIN
applymovement 3, UndergroundPath2F_Secundaria_Eevees_Move_2
waitmovement 0x0
applymovement 3, UndergroundPath2F_Secundaria_Eevees_Move_1
waitmovement 0x0
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_8 MSGBOX_NPC
setflag FLAG_HIDE_UNION_ROOM_PLAYER_4
fadescreen 1
delay 20
removeobject 3
removeobject 4
removeobject 5
fadescreen 0
delay 20
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_1
waitmovement 0x0
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_2
waitmovement 0x0
delay 15
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_3
waitmovement 0x0
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_9 MSGBOX_NPC
delay 20
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_3 MSGBOX_NPC
delay 20
playse MUS_RG_OBTAIN_KEY_ITEM
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_10 MSGBOX_DEFAULT
waitse
playse SE_PIN
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_2
waitmovement 0x0
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_11 MSGBOX_NPC
delay 15
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_1
waitmovement 0x0
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_3
waitmovement 0x0
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_12 MSGBOX_NPC
fadescreen 1
delay 20
removeobject 2
fadescreen 0
setvar VAR_ROUTE127_STATE, 2
release
end

UndergroundPath2F_Secundaria_Eevees_Move_1:
walk_in_place_up
step_end

UndergroundPath2F_Secundaria_Eevees_Move_2:
emote_exclamation_mark
step_end

UndergroundPath2F_Secundaria_Eevees_Move_3:
face_player
step_end

UndergroundPath2F_Secundaria_Eevees_Texto_1:
.string "Eso, eso…\n"
	.string "Todos a la cola…\l"
	.string "No os preocupéis…\l"
	.string "Habrá para todos…$"

UndergroundPath2F_Secundaria_Eevees_Texto_2:
.string "Tenlo en cuenta ROCKET, solo has\n"
	.string "logrado retrasar la fecha en la\l"
	.string "que esos subterráneos se cerrarán,\l"
	.string "dentro de 3 años no quedará ni\l"
	.string "rastro de ellos.$"

UndergroundPath2F_Secundaria_Eevees_Texto_3:
.string "…\n"
	.string "…$"

UndergroundPath2F_Secundaria_Eevees_Texto_4:
.string "¿Qué problema tienes ROCKET?\n"
	.string "¡Si quieres un EEVEE ponte a la\l"
	.string "cola como todos, espero que tengas\l"
	.string "el millón de POKÉS que cuesta.\l"
	.string "De lo contrario, no me hagas perder\l"
	.string "más el tiempo y regresa a tu…$"

UndergroundPath2F_Secundaria_Eevees_Texto_5:
.string "¿Te envía ese ingenuo CIENTÍFICO\n"
	.string "para recuperar estos EEVEES?\l"
	.string "No sé de que me hablas ROCKET, a\l"
	.string "nadie le importa aquí la\l"
	.string "procedencia de los EEVEES, lo\l"
	.string "único que importa es que están\l"
	.string "aquí y tienen un precio, bastante\l"
	.string "jugoso por cierto.$"

UndergroundPath2F_Secundaria_Eevees_Texto_6:
.string "¡Me has hecho perder la paciencia!\n"
	.string "¡Qué pena que lo único a lo que\l"
	.string "puede aspirar ese pobre iluso es a\l"
	.string "contratar los servicios de un\l"
	.string "mediocre RECLUTA ROCKET que nada\l"
	.string "puede hacer ante la categoría de\l"
	.string "POKÉMON que son las evoluciones de\l"
	.string "EEVEE!$"

UndergroundPath2F_Secundaria_Eevees_Texto_7:
.string "¿Pero quién eres tú?\n"
	.string "¡Espera!\l"
	.string "¡¿Tú no fuiste quien tumbó en\l"
	.string "solitario a toda la seguridad de\l"
	.string "SILPH?!$"

UndergroundPath2F_Secundaria_Eevees_Texto_8:
.string "¡Es {PLAYER}!\n"
	.string "¡Uno de los EJECUTIVOS ROCKET\l"
	.string "más poderosos!\l"
	.string "¡Larguémonos de aquí!$"

UndergroundPath2F_Secundaria_Eevees_Texto_9:
.string "¡¿Tienes idea de lo que acabas de\n"
	.string "hacer?!$"

UndergroundPath2F_Secundaria_Eevees_Texto_10:
.string "(¡{PLAYER} recuperó 60 de los 70\n"
	.string "EEVEES robados!).$"

UndergroundPath2F_Secundaria_Eevees_Texto_11:
.string "¡Estúpido ROCKET!\n"
	.string "¡Creía que esto del mercado negro\l"
	.string "era también lo vuestro!\l"
	.string "{PAUSE 15}…{PAUSE 15}\l"
	.string "{PAUSE 15}…{PAUSE 15}\l"
	.string "¿Ahora trabajáis junto con SILPH?\l"
	.string "¡Qué más da!\l"
	.string "De todos modos ya he logrado\l"
	.string "vender 7 EEVEES, con los 7\l"
	.string "millones que he recaudado lograré\l"
	.string "por fin huir de esta región\l"
	.string "abocada al desastre.$"

UndergroundPath2F_Secundaria_Eevees_Texto_12:
.string "¡Suerte para quienes os quedéis en\n"
	.string "KANTO!\l"
	.string "¡Os hará falta!$"
