Lavender_Secta_Pasadizo_3_MapScripts::
	.byte 0

Lavender_Secta_Pasadizo_Lider_Move_1:
walk_in_place_right
step_end

Lavender_Secta_Pasadizo_Lider_Move_2:
face_left
step_end

Lavender_Secta_Pasadizo_Lider_Move_3:
walk_up
walk_right
face_down
step_end

Lavender_Secta_Pasadizo_Lider_Move_4:
walk_right
walk_up
walk_right
walk_up
walk_right
step_end

Lavender_Secta_Pasadizo_Lider_Move_5:
delay_16
face_left
delay_16
delay_8
face_up
delay_16
step_end

Lavender_Secta_Pasadizo_Lider_Move_6:
face_up
step_end

Lavender_Secta_Pasadizo_Lider_Move_7:
face_right
step_end

Lavender_Secta_Pasadizo_Lider_Move_8:
walk_in_place_up
step_end

Lavender_Secta_Pasadizo_Lider_Move_9:
emote_exclamation_mark
step_end

Lavender_Secta_Pasadizo_Lider_Move_10:
walk_in_place_left
step_end

Lavender_Secta_Pasadizo_Lider_Move_11:
walk_left
walk_down
walk_down
walk_left
walk_left
step_end

Lavender_Secta_Pasadizo_Lider_Move_12:
walk_right
walk_right
walk_right
walk_down
walk_down
walk_right
walk_down
walk_right
step_end

Lavender_Secta_Pasadizo_Lider::
lock
applymovement OBJ_EVENT_ID_PLAYER, Lavender_Secta_Pasadizo_Lider_Move_1
waitmovement 0x0
playse SE_EXIT
clearflag FLAG_HOENN_81
addobject 2
applymovement OBJ_EVENT_ID_PLAYER, Lavender_Secta_Pasadizo_Lider_Move_2
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Lavender_Secta_Pasadizo_Lider_Move_3
applymovement 2, Lavender_Secta_Pasadizo_Lider_Move_4
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_5
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_5
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_9 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, Lavender_Secta_Pasadizo_Lider_Move_6
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_11 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_2
waitmovement 0x0
delay 10
msgbox Lavender_Secta_Pasadizo_Lider_Texto_12 MSGBOX_AUTOCLOSE
applymovement 2, Lavender_Secta_Pasadizo_Lider_Move_7
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_13 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Lider_Move_1
waitmovement 0x0
delay 10
msgbox Lavender_Secta_Pasadizo_Lider_Texto_14 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Lider_Move_6
waitmovement 0x0
delay 10
msgbox Lavender_Secta_Pasadizo_Lider_Texto_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Lider_Move_7
waitmovement 0x0
delay 10
msgbox Lavender_Secta_Pasadizo_Lider_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_6
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_17 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_8
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_18 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_19 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_20 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_9
waitmovement 0x0
waitse
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_2
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_21 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_22 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_23 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_6
waitmovement 0x0
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_24 MSGBOX_AUTOCLOSE
applymovement 2, Lavender_Secta_Pasadizo_Lider_Move_1
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_25 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_5
waitmovement 0x0
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_26 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_10
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_27 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Lider_Move_1
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_28 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Lider_Move_11
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HOENN_81
removeobject 2
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_29 MSGBOX_AUTOCLOSE
delay 15
special SpawnCameraObject
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_12
applymovement OBJ_EVENT_ID_CAMERA, Lavender_Secta_Pasadizo_Lider_Move_12
waitmovement 0x0
special RemoveCameraObject
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_6
waitmovement 0x0
clearflag FLAG_HOENN_81
addobject 4
playse SE_BALL_THROW
waitse
delay 30
playse SE_BALL_TRADE
setflag FLAG_HOENN_81
removeobject 4
clearflag FLAG_HOENN_80
addobject 3
waitse
delay 10
playmoncry SPECIES_NINETALES, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_7
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_30 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_31 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_6
waitmovement 0x0
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_32 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_33 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_7
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_34 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_35 MSGBOX_AUTOCLOSE
delay 15
playse SE_LEDGE
applymovement 3, Lavender_Secta_Pasadizo_Lider_Move_13
waitmovement 0x0
waitse
playse SE_LEDGE
applymovement 3, Lavender_Secta_Pasadizo_Lider_Move_13
waitmovement 0x0
waitse
delay 10
playmoncry SPECIES_NINETALES, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_6
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_36 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_7
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_37 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_38 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_8
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_39 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_40 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_7
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_41 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_42 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_14
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_43 MSGBOX_AUTOCLOSE
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Lavender_Secta_Pasadizo_Lider_Move_15
waitmovement 0x0
special RemoveCameraObject
delay 10
setflag FLAG_HOENN_82
setflag FLAG_HOENN_81
setflag FLAG_HOENN_80
playse SE_M_DETECT
dofieldeffectsparkle 6, 4, 0
waitfieldeffect FLDEFF_SPARKLE
waitse
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Jirachi_Move_9
waitmovement 0x0
msgbox MossdeepCity_Jirachi_Texto_31 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Jirachi_Move_10
playse SE_ORB
special DoOrbEffect
delay 150
waitstate
delay 60
special FadeOutOrbEffect
warpsilent MAP_POKEMON_TOWER_S3, 11, 9
delay 150
release
end


Lavender_Secta_Pasadizo_Lider_Move_15:
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_up
walk_fast_up
walk_fast_up
step_end

Lavender_Secta_Pasadizo_Lider_Move_14:
delay_16
delay_16
face_up
delay_16
delay_16
face_right
delay_16
delay_16
step_end


Lavender_Secta_Pasadizo_Lider_Move_13:
jump_in_place_down
step_end

Lavender_Secta_Pasadizo_Lider_Texto_1:
	.string "????: ¿Puedo?$"

Lavender_Secta_Pasadizo_Lider_Texto_2:
	.string "C. FRIDA: Claro, sigues siendo\n"
	.string "el LÍDER de GIMNASIO.$"

Lavender_Secta_Pasadizo_Lider_Texto_3:
	.string "????: De eso precisamente\n"
	.string "quería hablarte.$"

Lavender_Secta_Pasadizo_Lider_Texto_4:
	.string "C. FRIDA: Sí, me lo imagino.$"

Lavender_Secta_Pasadizo_Lider_Texto_5:
	.string "¿Cuánto tiempo le queda?$"

Lavender_Secta_Pasadizo_Lider_Texto_6:
	.string "????: 10 años. Tal vez 12.$"

Lavender_Secta_Pasadizo_Lider_Texto_7:
	.string "C. FRIDA: Bueno. El pequeño MORFEO\n"
	.string "podrá al menos cumplir su sueño.$"

Lavender_Secta_Pasadizo_Lider_Texto_8:
	.string "????: Lo hará.$"

Lavender_Secta_Pasadizo_Lider_Texto_9:
	.string "… …$"

Lavender_Secta_Pasadizo_Lider_Texto_10:
	.string "Parecía imposible, pero ni siquiera este\n"
	.string "GIMNASIO durará para siempre.$"

Lavender_Secta_Pasadizo_Lider_Texto_11:
	.string "C. FRIDA: Nada tangible lo hace.$"

Lavender_Secta_Pasadizo_Lider_Texto_12:
	.string "Dime, ¿qué destino le espera\n"
	.string "a este lugar?$"

Lavender_Secta_Pasadizo_Lider_Texto_13:
	.string "????: CIUDAD AZAFRÁN está\n"
	.string "creciendo cada vez más.$"

Lavender_Secta_Pasadizo_Lider_Texto_14:
	.string "La nueva empresa: SILPH, va a construir\n"
	.string "su sede allí. Dicen que el edificio será\l"
	.string "más alto que TORRE POKÉMON.$"

Lavender_Secta_Pasadizo_Lider_Texto_15:
	.string "Junto a eso, se espera que la ciudad\n"
	.string "estrene un nuevo GIMNASIO POKÉMON\l"
	.string "para cuando la SEDE SILPH esté\l"
	.string "terminada.$"

Lavender_Secta_Pasadizo_Lider_Texto_16:
	.string "Eso ayudará a impulsar la ciudad y sus…$"

Lavender_Secta_Pasadizo_Lider_Texto_17:
	.string "C. FRIDA: Intereses económicos,\n"
	.string "entiendo.$"

Lavender_Secta_Pasadizo_Lider_Texto_18:
	.string "¿Y PUEBLO LAVANDA?$"

Lavender_Secta_Pasadizo_Lider_Texto_19:
	.string "????: Una vez construido el nuevo\n"
	.string "GIMNASIO, no habrá lugar en KANTO para\l"
	.string "este.$"

Lavender_Secta_Pasadizo_Lider_Texto_20:
	.string "Será transformado en un recinto donde\n"
	.string "ayudar a los entrenadores.$"

Lavender_Secta_Pasadizo_Lider_Texto_21:
	.string "C. FRIDA: ¿Ayudar?$"

Lavender_Secta_Pasadizo_Lider_Texto_22:
	.string "????: Con sus motes.$"

Lavender_Secta_Pasadizo_Lider_Texto_23:
	.string "C. FRIDA: Ja… No sé por qué me\n"
	.string "sorprende, estúpidas modas pasajeras.$"

Lavender_Secta_Pasadizo_Lider_Texto_24:
	.string "Y… ¿este pequeño CEMENTERIO?$"

Lavender_Secta_Pasadizo_Lider_Texto_25:
	.string "????: Quedará al cuidado del encargado\n"
	.string "de motes. Pero estas tumbas son\l"
	.string "antiguas, con el tiempo este lugar se\l"
	.string "perderá.$"

Lavender_Secta_Pasadizo_Lider_Texto_26:
	.string "C. FRIDA: Ya veo. Al menos… un poco de\n"
	.string "este GIMNASIO seguirá vivo, bajo los\l"
	.string "pies de nuevas generaciones.$"

Lavender_Secta_Pasadizo_Lider_Texto_27:
	.string "Gracias.$"

Lavender_Secta_Pasadizo_Lider_Texto_28:
	.string "????: Te dejo descansar,\n"
	.string "ha sido un día largo.$"

Lavender_Secta_Pasadizo_Lider_Texto_29:
	.string "C. FRIDA: … …$"

Lavender_Secta_Pasadizo_Lider_Texto_30:
	.string "Parece que fue ayer, ¿verdad\n"
	.string "NINETALES?$"

Lavender_Secta_Pasadizo_Lider_Texto_31:
	.string "Te revolvías aquí mismo, esperando\n"
	.string "a una muerte segura.$"

Lavender_Secta_Pasadizo_Lider_Texto_32:
	.string "Pero pude salvarte.$"

Lavender_Secta_Pasadizo_Lider_Texto_33:
	.string "En ese momento me pregunté cómo un\n"
	.string "VULPIX había llegado hasta aquí.$"

Lavender_Secta_Pasadizo_Lider_Texto_34:
	.string "Fue entonces… cuando me di cuenta.\n"
	.string "Esta tumba, olvidada y maltratada por\l"
	.string "el tiempo, escondía algo.$"

Lavender_Secta_Pasadizo_Lider_Texto_35:
	.string "Esas escaleras, tan antiguas como\n"
	.string "PUEBLO LAVANDA, llevan a un lugar aún\l"
	.string "más profundo.$"

Lavender_Secta_Pasadizo_Lider_Texto_36:
	.string "Pero, cada vez que nos hemos acercado,\n"
	.string "te has empeñado en que dé vuelta atrás.$"

Lavender_Secta_Pasadizo_Lider_Texto_37:
	.string "Eres el POKÉMON más noble y fuerte que\n"
	.string "conozco, pero por algún motivo, volver a\l"
	.string "ese lugar te da pavor.$"

Lavender_Secta_Pasadizo_Lider_Texto_38:
	.string "… …$"

Lavender_Secta_Pasadizo_Lider_Texto_39:
	.string "Mi curiosidad es grande, pero mi respeto\n"
	.string "por nuestro vínculo es mayor.$"

Lavender_Secta_Pasadizo_Lider_Texto_40:
	.string "Si es lo que deseas, podré vivir sin\n"
	.string "saber a dónde llevan esas escaleras.$"

Lavender_Secta_Pasadizo_Lider_Texto_41:
	.string "El paso del tiempo terminará de\n"
	.string "sepultar este sitio. Su destino está\l"
	.string "sellado.$"

Lavender_Secta_Pasadizo_Lider_Texto_42:
	.string "Una vez se instale el INSPECTOR de\n"
	.string "MOTES, nadie volverá a bajar aquí.$"

Lavender_Secta_Pasadizo_Lider_Texto_43:
	.string "El secreto quedará enterrado\n"
	.string "para toda la eternidad.$"
