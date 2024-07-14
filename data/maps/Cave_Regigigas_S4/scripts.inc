Cave_Regigigas_S4_MapScripts::
	.byte 0


Cave_Regigigas_S4_Valente::
lock
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S4_Valente_Move_1
waitmovement 0x0
playse SE_PIN
applymovement 3, Cave_Regigigas_S4_Valente_Move_2
waitmovement 0x0
delay 10
msgbox Cave_Regigigas_S4_Valente_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S4_Valente_Move_3
waitmovement 0x0
applymovement 3, Cave_Regigigas_S4_Valente_Move_4
waitmovement 0x0
msgbox Cave_Regigigas_S4_Valente_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S4_Valente_Move_5
waitmovement 0x0
msgbox Cave_Regigigas_S4_Valente_Texto_3 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_4 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_5 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_6 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_7 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_8 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_9 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_10 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_11 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_12 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_13 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_14 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_15 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_16 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_17 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_18 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_19 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_20 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_21 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_22 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_23 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_24 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_25 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_26 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_27 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_28 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_29 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_30 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_31 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_32 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S4_Valente_Texto_33 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F8, 18
release
end

Cave_Regigigas_S4_Valente_Move_5:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

Cave_Regigigas_S4_Valente_Move_4:
walk_in_place_down
step_end

Cave_Regigigas_S4_Valente_Move_3:
walk_slow_up
step_end

Cave_Regigigas_S4_Valente_Move_2:
emote_exclamation_mark
step_end

Cave_Regigigas_S4_Valente_Move_1:
walk_in_place_up
step_end

Cave_Regigigas_S4_Valente_Texto_1:
	.string "ANDRA: ¡{PLAYER}!$"

Cave_Regigigas_S4_Valente_Texto_2:
	.string "Adelántate, esto no es nada para mí.$"

Cave_Regigigas_S4_Valente_Texto_3:
	.string "????: Parece que esta expedición\n"
	.string "trae sorpresas inesperadas.$"

Cave_Regigigas_S4_Valente_Texto_4:
	.string "VALENTE: ¡Ja, ja, ja, ja! ¡Esto promete!$"

Cave_Regigigas_S4_Valente_Texto_5:
	.string "De verdad, aprecio la valentía que te ha\n"
	.string "llevado hasta este lugar desconocido.$"

Cave_Regigigas_S4_Valente_Texto_6:
	.string "Lamentablemente, no puedo dejar que\n"
	.string "sigas avanzando.$"

Cave_Regigigas_S4_Valente_Texto_7:
	.string "La vida es grandiosa, ¿no?$"

Cave_Regigigas_S4_Valente_Texto_8:
	.string "Grandiosa, sí. Aunque a veces, por\n"
	.string "desgracia, más compleja de lo que a uno\l"
	.string "le gustaría.$"

Cave_Regigigas_S4_Valente_Texto_9:
	.string "Dudo que sepas apreciar la diferencia,\n"
	.string "pero… ¡déjame comprobar si tienes la\l"
	.string "suficiente valentía!$"

Cave_Regigigas_S4_Valente_Texto_10:
	.string "VALENTE: Tu equipo… ha vivido\n"
	.string "innumerables aventuras, ¿verdad?$"

Cave_Regigigas_S4_Valente_Texto_11:
	.string "ANDRA: Tú…$"

Cave_Regigigas_S4_Valente_Texto_12:
	.string "Ahora te reconozco… conocías este\n"
	.string "lugar mejor que nadie, gracias a ti pude\l"
	.string "descubrirlo.$"

Cave_Regigigas_S4_Valente_Texto_13:
	.string "VALENTE: Ah, esa chica tan inquieta.\n"
	.string "Veía potencial en ti, tu presencia aquí\l"
	.string "lo confirma.$"

Cave_Regigigas_S4_Valente_Texto_14:
	.string "ANDRA: ¿Cómo has permitido que acaben\n"
	.string "profanando este lugar?$"

Cave_Regigigas_S4_Valente_Texto_15:
	.string "VALENTE: ¿Profanar? Cuida bien tus\n"
	.string "términos, chiquilla.$"

Cave_Regigigas_S4_Valente_Texto_16:
	.string "DEVON va a honrar este lugar\n"
	.string "despertando el verdadero poder de\l"
	.string "REGIGIGAS. ¿No hace el TEAM ROCKET lo\l"
	.string "mismo en KANTO?$"

Cave_Regigigas_S4_Valente_Texto_17:
	.string "ANDRA: Pero… creí que eras también un\n"
	.string "apasionado del misterio.$"

Cave_Regigigas_S4_Valente_Texto_18:
	.string "Cuando te vi en PUEBLO PARDAL, estabas\n"
	.string "eufórico ante la posibilidad de\l"
	.string "descubrir esos FÓSILES.$"

Cave_Regigigas_S4_Valente_Texto_19:
	.string "Ahí me hablaste de fuerza, valentía e\n"
	.string "inteligencia. De cómo ¿Dónde quedaron\l"
	.string "esas palabras?$"

Cave_Regigigas_S4_Valente_Texto_20:
	.string "VALENTE: Te mentí, ANDRA. Eso fue una\n"
	.string "frivolidad, el tipo de frase que un niño\l"
	.string "de 10 años querría escuchar para\l"
	.string "mantener vivas sus ilusiones.$"

Cave_Regigigas_S4_Valente_Texto_21:
	.string "ANDRA: No, no lo fue para nada.$"

Cave_Regigigas_S4_Valente_Texto_22:
	.string "VALENTE: ¡La realidad es bien distinta!$"

Cave_Regigigas_S4_Valente_Texto_23:
	.string "ANDRA: ¡Tú has renunciado a esa\n"
	.string "realidad! ¡Te has vendido a DEVON solo\l"
	.string "para completar una colección de REGIS\l"
	.string "artificiales!$"

Cave_Regigigas_S4_Valente_Texto_24:
	.string "VALENTE: No hay otro camino. Todo está\n"
	.string "dispuesto en HOENN, y mi lugar en el\l"
	.string "nuevo parque de atracciones para\l"
	.string "niños… garantizado.$"

Cave_Regigigas_S4_Valente_Texto_25:
	.string "ANDRA: En ese caso… jamás llegarás a\n"
	.string "ver los verdaderos misterios que la vida\l"
	.string "tenía reservados para ti.$"

Cave_Regigigas_S4_Valente_Texto_26:
	.string "VALENTE: No te preocupes,\n"
	.string "podré vivir con ello.$"

Cave_Regigigas_S4_Valente_Texto_27:
	.string "ANDRA: Es curioso, {PLAYER}. Pero…$"

Cave_Regigigas_S4_Valente_Texto_28:
	.string "Veo cada vez más similitudes entre\n"
	.string "el TEAM ROCKET y DEVON.$"

Cave_Regigigas_S4_Valente_Texto_29:
	.string "El cómo alguien a quién respetaba se\n"
	.string "acaba corrompiendo de tal modo… esto\l"
	.string "ya lo he vivido.$"

Cave_Regigigas_S4_Valente_Texto_30:
	.string "Cuando VALENTE hablaba, no le veía a él.$"

Cave_Regigigas_S4_Valente_Texto_31:
	.string "Era a EUSINE a quién estaba viendo:\n"
	.string "alguien cuyos ojos brillaban\l"
	.string "intensamente ante la posibilidad de\l"
	.string "poseer a los 3 PERROS LEGENDARIOS.$"

Cave_Regigigas_S4_Valente_Texto_32:
	.string "El mismo brillo en los ojos que VALENTE\n"
	.string "tenía hace un momento cuando usaba\l"
	.string "esos REGIS clonados.$"

Cave_Regigigas_S4_Valente_Texto_33:
	.string "¿Entiendes ahora el por qué me fui? Yo\n"
	.string "no seré ese tipo de ENTRENADORA.$"
