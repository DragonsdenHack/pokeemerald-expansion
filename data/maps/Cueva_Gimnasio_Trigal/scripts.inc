Cueva_Gimnasio_Trigal_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, Cueva_Gimnasio_Trigal_OnResume
	.byte 0

Cueva_Gimnasio_Trigal_OnResume:
	call Cueva_Gimnasio_Trigal_SetupEscapeWarp
	end

Cueva_Gimnasio_Trigal_SetupEscapeWarp::
	setescapewarp MAP_ROUTE53, 23, 1
	return


Cueva_Gimnasio_Trigal_Combate::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 136
goto_if_gt Cueva_Gimnasio_Trigal_Combate_2
playse SE_PIN
applymovement 2, Cueva_Gimnasio_Trigal_Combate_Move_1
waitmovement 0x0
delay 15
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_1 MSGBOX_AUTOCLOSE
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_2 MSGBOX_AUTOCLOSE
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_4 MSGBOX_AUTOCLOSE
playse 414
delay 40
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_VALERIA, Cueva_Gimnasio_Trigal_Combate_Texto_7
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_8 MSGBOX_AUTOCLOSE
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_9 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_OBTAIN_BADGE
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_9.1 MSGBOX_DEFAULT
waitfanfare
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_9.2 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_10 MSGBOX_DEFAULT
givemon SPECIES_VULLABY, 25, ITEM_NONE
waitfanfare
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_11 MSGBOX_AUTOCLOSE
delay 10
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_11.1 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem 641
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_11.2 MSGBOX_DEFAULT
waitfanfare
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_11.3 MSGBOX_NPC
setflag FLAG_BADGE11_GET
setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
setvar VAR_UNUSED_0x40F7, 137
release
end

Cueva_Gimnasio_Trigal_Combate_Texto_11.1:
.string "Y por cierto, toma esto también.$"

Cueva_Gimnasio_Trigal_Combate_Texto_11.2:
.string "¡¡{PLAYER} obtuvo la MT59 AFILARGARRAS\n"
	.string "de manos de VALERIA!!$"

Cueva_Gimnasio_Trigal_Combate_Texto_11.3:
.string "Con AFILARGARRAS no solo aumentarás el\n"
	.string "ATAQUE del POKÉMON, también su\l"
	.string "PRECISION. ¡Va genial si llevas\l"
	.string "movimientos como ROCA AFILADA, COLA\l"
	.string "FÉRREA O CARGA DRAGÓN!$"



Cueva_Gimnasio_Trigal_Combate_2::
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_12 MSGBOX_AUTOCLOSE
release
end

Cueva_Gimnasio_Trigal_Combate_Move_1:
emote_exclamation_mark
step_end

Cueva_Gimnasio_Trigal_Combate_Texto_1:
.string "VALERIA: Oh, vaya, me has\n"
	.string "sorprendido. No esperaba para nada\l"
	.string "que estuvieras dispuesto a venir\l"
	.string "hasta aquí solo por un combate.$"

Cueva_Gimnasio_Trigal_Combate_Texto_2:
.string "Supongo que me he acostumbrado a\n"
	.string "estar rodeada de gente a la que le\l"
	.string "preocupa más el look de su POKÉMON\l"
	.string "que el propio arte de combatir.\l"
	.string "Ahora que lo veo en perspectiva,\l"
	.string "demasiado he aguantado en TRIGAL.$"

Cueva_Gimnasio_Trigal_Combate_Texto_3:
.string "Me alegra saber que aún existen\n"
	.string "ENTRENADORES jóvenes con\l"
	.string "inquietudes, como tú. Cuanto más\l"
	.string "entreno, y más viajo, más me doy\l"
	.string "cuenta de lo poco que sé, y de\l"
	.string "todo el margen de mejora que\l"
	.string "ofrece este vasto mundo.$"

Cueva_Gimnasio_Trigal_Combate_Texto_4:
.string "{PAUSE 15}…{PAUSE 15}$"

Cueva_Gimnasio_Trigal_Combate_Texto_5:
.string "Has venido por un combate\n"
	.string "POKÉMON y es lo que tendrás.$"

Cueva_Gimnasio_Trigal_Combate_Texto_6:
.string "Daré todo lo que tengo junto con\n"
	.string "los compañeros que me han ido\l"
	.string "acompañando con cada nuevo viaje.\l"
	.string "¡{PLAYER}!\l"
	.string "¡Espero que estés a la altura!$"

Cueva_Gimnasio_Trigal_Combate_Texto_7:
.string "¿Mi fiel KINGDRA fue derrotado?$"

Cueva_Gimnasio_Trigal_Combate_Texto_8:
.string "Oh…\n"
	.string "Me has dejado en shock, creí que\l"
	.string "nadie podía igualar la potencia y\l"
	.string "explosividad de mi KINGDRA. Cuando\l"
	.string "se transformó una última vez\l"
	.string "después de toda una vida junto a\l"
	.string "él y vi la tremenda energía que\l"
	.string "desplegaba, pensé que era\l"
	.string "insuperable. Me has mostrado que\l"
	.string "no.$"

Cueva_Gimnasio_Trigal_Combate_Texto_9:
.string "Incluso ese gran maestro de CIUDAD\n"
	.string "ENDRINO quedó impresionado, aunque\l"
	.string "decepcionado al ver que perdía el\l"
	.string "DRAGÓN por el SINIESTRO. Su nieta\l"
	.string "parecía muy celosa por mi POKÉMON.\l"
	.string "DÉBORA creo que se llamaba.\l"
	.string "He aprendido mucho con\l"
	.string "este combate.$"

Cueva_Gimnasio_Trigal_Combate_Texto_9.1:
	.string "Toma, aquí tienes la\n"
	.string "MEDALLA PLANICIE.$"
	
Cueva_Gimnasio_Trigal_Combate_Texto_9.2:
	.string "Quiero darte las gracias, no recuerdo\n"
	.string "la última vez que tuve enfrente a\l"
	.string "un rival como tú.\l"
	.string "Este POKÉMON es para ti.$"

Cueva_Gimnasio_Trigal_Combate_Texto_10:
.string "¡¡OBTUVISTE UN VULLABY AL NV:25!!$"

Cueva_Gimnasio_Trigal_Combate_Texto_11:
.string "Olvídate del estereotipo de TIPO\n"
	.string "VOLADOR frágil y vulnerable,\l"
	.string "VULLABY tiene el potencial de ser\l"
	.string "un muro defensivo extraordinario.\l"
	.string "Lo mejor es que puede aprender\l"
	.string "JUEGO SUCIO para usar el ATAQUE\l"
	.string "FÍSICO rival sin tener que mirar\l"
	.string "el suyo.\l"
	.string "¿No es genial?$"

Cueva_Gimnasio_Trigal_Combate_Texto_12:
.string "Me gusta este lugar, por el\n"
	.string "momento me da la paz que\l"
	.string "necesito. Recargaré energías aquí\l"
	.string "antes de emprender un nuevo viaje.\l"
	.string "¡Encantada de haberte conocido,\l"
	.string "{PLAYER}!$"

