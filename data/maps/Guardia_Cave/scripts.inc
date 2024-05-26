Guardia_Cave_MapScripts::
	.byte 0

Guardia_Cave_Fuji::
lock
faceplayer
applymovement OBJ_EVENT_ID_PLAYER, Guardia_Cave_Fuji_Move_1
waitmovement 0x0
delay 15
msgbox Guardia_Cave_Fuji_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Guardia_Cave_Fuji_Move_2
waitmovement 0x0
delay 10
applymovement 13, Guardia_Cave_Fuji_Move_1
waitmovement 0x0
msgbox Guardia_Cave_Fuji_Texto_2 MSGBOX_AUTOCLOSE
applymovement 13, Guardia_Cave_Fuji_Move_3
waitmovement 0x0
msgbox Guardia_Cave_Fuji_Texto_3 MSGBOX_AUTOCLOSE
applymovement 13, Guardia_Cave_Fuji_Move_4
waitmovement 0x0
msgbox Guardia_Cave_Fuji_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_Fuji_Texto_5 MSGBOX_AUTOCLOSE
applymovement 13, Guardia_Cave_Fuji_Move_5
waitmovement 0x0
setflag FLAG_HOENN_40
removeobject 13
setvar VAR_ROUTE120_STATE, 6
release
end

Guardia_Cave_Fuji_Move_5:
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

Guardia_Cave_Fuji_Move_4:
face_down
step_end

Guardia_Cave_Fuji_Move_3:
face_left
step_end

Guardia_Cave_Fuji_Move_2:
walk_slow_down
walk_slow_down
step_end

Guardia_Cave_Fuji_Move_1:
walk_in_place_down
step_end

Guardia_Cave_Fuji_Texto_1:
	.string "Es asombroso, ¿has visto {PLAYER}?$"

Guardia_Cave_Fuji_Texto_2:
	.string "CUBONE, MAROWAK y KANGASKHAN se han\n"
	.string "puesto de acuerdo en trabajar para\l"
	.string "construir este enorme túnel.$"

Guardia_Cave_Fuji_Texto_3:
	.string "Es como si hubieran aprendido del\n"
	.string "pasado. Quieren construir un lugar\l"
	.string "alejados de los humanos, dónde poder\l"
	.string "vivir en paz.$"

Guardia_Cave_Fuji_Texto_4:
	.string "Pero este túnel se extiende hasta\n"
	.string "mucho más al sur… estoy intrigado.$"

Guardia_Cave_Fuji_Texto_5:
	.string "¿Por qué hacerlo tan grande?$"

Guardia_Cave_Sachiko_Move_1:
emote_exclamation_mark
step_end

Guardia_Cave_Sachiko_Move_2:
delay_16
face_up
step_end

Guardia_Cave_Sachiko_Move_3:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
face_down
step_end

Guardia_Cave_Sachiko_Move_4:
face_left
step_end

Guardia_Cave_Sachiko_Move_5:
face_up
step_end

Guardia_Cave_Sachiko_Move_6:
walk_in_place_up
step_end

Guardia_Cave_Sachiko_Move_7:
face_right
step_end

Guardia_Cave_Sachiko_Move_8:
walk_in_place_right
step_end

Guardia_Cave_Sachiko_Move_9:
face_down
step_end

Guardia_Cave_Sachiko_Move_10:
walk_slow_down
step_end



Guardia_Cave_Sachiko::
lock
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 14
applymovement OBJ_EVENT_ID_PLAYER, Guardia_Cave_Fuji_Move_1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Guardia_Cave_Sachiko_Move_1
waitmovement 0x0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, Guardia_Cave_Sachiko_Move_2
applymovement 14, Guardia_Cave_Sachiko_Move_3
waitmovement 0x0
delay 10
playse SE_PIN
applymovement 14, Guardia_Cave_Sachiko_Move_1
waitmovement 0x0
msgbox Guardia_Cave_Sachiko_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, Guardia_Cave_Fuji_Move_1
waitmovement 0x0
msgbox Guardia_Cave_Sachiko_Texto_2 MSGBOX_AUTOCLOSE
applymovement 14, Guardia_Cave_Sachiko_Move_4
waitmovement 0x0
msgbox Guardia_Cave_Sachiko_Texto_3 MSGBOX_AUTOCLOSE
applymovement 14, Guardia_Cave_Fuji_Move_1
waitmovement 0x0
msgbox Guardia_Cave_Sachiko_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_Sachiko_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_Sachiko_Texto_6 MSGBOX_AUTOCLOSE
applymovement 14, Guardia_Cave_Fuji_Move_1
waitmovement 0x0
msgbox Guardia_Cave_Sachiko_Texto_7 MSGBOX_AUTOCLOSE
applymovement 14, Guardia_Cave_Sachiko_Move_5
waitmovement 0x0
msgbox Guardia_Cave_Sachiko_Texto_8 MSGBOX_AUTOCLOSE
applymovement 14, Guardia_Cave_Sachiko_Move_6
waitmovement 0x0
msgbox Guardia_Cave_Sachiko_Texto_9 MSGBOX_AUTOCLOSE
applymovement 14, Guardia_Cave_Sachiko_Move_7
waitmovement 0x0
msgbox Guardia_Cave_Sachiko_Texto_10 MSGBOX_AUTOCLOSE
applymovement 14, Guardia_Cave_Sachiko_Move_8
waitmovement 0x0
msgbox Guardia_Cave_Sachiko_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_Sachiko_Texto_12 MSGBOX_AUTOCLOSE
applymovement 14, Guardia_Cave_Sachiko_Move_9
waitmovement 0x0
msgbox Guardia_Cave_Sachiko_Texto_13 MSGBOX_AUTOCLOSE
delay 25
msgbox Guardia_Cave_Sachiko_Texto_14.1 MSGBOX_AUTOCLOSE
delay 25
applymovement 14, Guardia_Cave_Sachiko_Move_10
waitmovement 0x0
msgbox Guardia_Cave_Sachiko_Texto_14 MSGBOX_AUTOCLOSE
delay 25
msgbox Guardia_Cave_Sachiko_Texto_14.1 MSGBOX_AUTOCLOSE
delay 25
applymovement OBJ_EVENT_ID_PLAYER, Guardia_Cave_Sachiko_Move_11
waitmovement 0x0
msgbox Guardia_Cave_Sachiko_Texto_15 MSGBOX_AUTOCLOSE
delay 15
applymovement 14, Guardia_Cave_Sachiko_Move_7
waitmovement 0x0
msgbox Guardia_Cave_Sachiko_Texto_16 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_Sachiko_Texto_17 MSGBOX_AUTOCLOSE
applymovement 14, Guardia_Cave_Sachiko_Move_8
waitmovement 0x0
msgbox Guardia_Cave_Sachiko_Texto_18 MSGBOX_AUTOCLOSE
applymovement 14, Guardia_Cave_Sachiko_Move_9
waitmovement 0x0
msgbox Guardia_Cave_Sachiko_Texto_19 MSGBOX_AUTOCLOSE
applymovement 14, Guardia_Cave_Sachiko_Move_10
waitmovement 0x0
msgbox Guardia_Cave_Sachiko_Texto_20 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_Sachiko_Texto_21 MSGBOX_AUTOCLOSE
applymovement 14, Guardia_Cave_Sachiko_Move_4
waitmovement 0x0
msgbox Guardia_Cave_Sachiko_Texto_22 MSGBOX_AUTOCLOSE
applymovement 14, Guardia_Cave_Fuji_Move_1
waitmovement 0x0
msgbox Guardia_Cave_Sachiko_Texto_23 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Guardia_Cave_Sachiko_Move_12
applymovement 14, Guardia_Cave_Sachiko_Move_13
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
removeobject 14
setvar VAR_ROUTE120_STATE, 8
release
end

Guardia_Cave_Sachiko_Move_13:
delay_16
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

Guardia_Cave_Sachiko_Move_12:
walk_left
face_right
delay_16
face_down
step_end

Guardia_Cave_Sachiko_Move_11:
delay_16
face_right
delay_16
delay_8
walk_in_place_right
delay_16
face_up
delay_16
walk_in_place_up
delay_16
step_end

Guardia_Cave_Sachiko_Texto_14.1:
	.string "… … … …$"

Guardia_Cave_Sachiko_Texto_1:
	.string "????: ¿Eh? ¿Cómo puede haber alguien\n"
	.string "aquí?$"

Guardia_Cave_Sachiko_Texto_2:
	.string "Soy SACHIKO, hija de KOGA, el antiguo\n"
	.string "LÍDER de CIUDAD FUCSIA y futuro\l"
	.string "miembro del ALTO MANDO.$"

Guardia_Cave_Sachiko_Texto_3:
	.string "Cuando reabran el GIMNASIO de CIUDAD\n"
	.string "FUCSIA, yo ocuparé su lugar. Llevo años\l"
	.string "preparándome para ese momento.$"

Guardia_Cave_Sachiko_Texto_4:
	.string "Dime, ¿quién eres tú?$"

Guardia_Cave_Sachiko_Texto_5:
	.string "… …$"

Guardia_Cave_Sachiko_Texto_6:
	.string "¿TEAM ROCKET? Llevo años sin escuchar\n"
	.string "ese nombre.$"

Guardia_Cave_Sachiko_Texto_7:
	.string "Mi KANGASKHAN es quién me ha traído\n"
	.string "hasta aquí.$"

Guardia_Cave_Sachiko_Texto_8:
	.string "Mi padre me contó que antes era un\n"
	.string "POKÉMON único de ZONA SAFARI, pero que\l"
	.string "ahora también aparece en el TÚNEL ROCA.$"

Guardia_Cave_Sachiko_Texto_9:
	.string "Sentí curiosidad. Después de todo, ya\n"
	.string "no quedan muchos lugares interesantes\l"
	.string "que visitar en KANTO, ¿sabes?$"

Guardia_Cave_Sachiko_Texto_10:
	.string "Así que decidí explorar la cueva.$"

Guardia_Cave_Sachiko_Texto_11:
	.string "Desde que llegué volando a PUEBLO\n"
	.string "LAVANDA, mi KANGASKHAN se ha\l"
	.string "comportado de una forma extraña.$"

Guardia_Cave_Sachiko_Texto_12:
	.string "En cuanto entré al TÚNEL ROCA, salió de\n"
	.string "su POKÉ BALL y acabó guiándome hasta\l"
	.string "este estrecho túnel.$"

Guardia_Cave_Sachiko_Texto_13:
	.string "Si te soy honesta, tengo un poco de\n"
	.string "miedo. Pero también estoy emocionada.$"

Guardia_Cave_Sachiko_Texto_14:
	.string "Dime una cosa, ¿prefieres la KANTO de\n"
	.string "ahora o la de hace 3 años?$"

Guardia_Cave_Sachiko_Texto_15:
	.string "Mmm… Puedo entenderte. Valoras la\n"
	.string "nostalgia, pero no la idealizas, ni dejas\l"
	.string "que nuble tu presente.$"

Guardia_Cave_Sachiko_Texto_16:
	.string "Yo sin embargo… yo extraño mucho la\n"
	.string "KANTO de antes.$"

Guardia_Cave_Sachiko_Texto_17:
	.string "Cuando la ZONA SAFARI estaba en todo\n"
	.string "su esplendor.$"

Guardia_Cave_Sachiko_Texto_18:
	.string "En esa época, las calles se llenaban de\n"
	.string "turistas, el gimnasio estaba repleto de\l"
	.string "aspirantes, hacíamos barbacoas en la\l"
	.string "playa y maldecíamos las picaduras de\l"
	.string "TENTACOOL.$"

Guardia_Cave_Sachiko_Texto_19:
	.string "Incluso los MOTORISTAS contribuían a\n"
	.string "llenar de vida y color la ciudad.\l"
	.string "Formaban parte de su ambiente e\l"
	.string "identidad.$"

Guardia_Cave_Sachiko_Texto_20:
	.string "Ahora…no hay nada… es un lugar\n"
	.string "desierto… sin expectativas… sin\l"
	.string "esperanzas ni eventos por los que\l"
	.string "merezca la pena ilusionarse.$"

Guardia_Cave_Sachiko_Texto_21:
	.string "Dicen que es el GUARDA que se ha ido de\n"
	.string "vacaciones, pero yo sé que, al igual que\l"
	.string "esa KANTO que aún recuerdo bien, no\l"
	.string "volverá.$"

Guardia_Cave_Sachiko_Texto_22:
	.string "Cuando sea LÍDER, haré todo lo posible\n"
	.string "por recuperar esa FUCSIA que mi padre\l"
	.string "construyó.$"

Guardia_Cave_Sachiko_Texto_23:
	.string "Pero mientras, señor ROCKET… más vale\n"
	.string "mantenernos alerta. ¡Los POKÉMON\l"
	.string "salvajes no parecen querer humanos\l"
	.string "aquí!$"

Guardia_Cave_Combate_Taaban::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S1_Combate_Kabutops_Move_1
delay 20
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_KANGASKHAN, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
playmoncry SPECIES_KANGASKHAN, CRY_MODE_ENCOUNTER
msgbox Guardia_Cave_Combate_Taaban_Texto_1 MSGBOX_DEFAULT
waitmoncry
playse MUS_RG_ENCOUNTER_GYM_LEADER
trainerbattle_no_intro TRAINER_TRAINER_653, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_KANGASKHAN, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox Guardia_Cave_Combate_Taaban_Texto_3 MSGBOX_AUTOCLOSE
playse SE_FAINT
setvar VAR_ROUTE120_STATE, 7
release
end

Guardia_Cave_Combate_Taaban_Texto_1:
.string "¡Wak!$"

Guardia_Cave_Combate_Taaban_Texto_3:
.string "Khan{PAUSE 5}…{PAUSE 5}$"

Guardia_Cave_Combate_Marowak::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S1_Combate_Kabutops_Move_1
delay 20
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_KANGASKHAN, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
playmoncry SPECIES_KANGASKHAN, CRY_MODE_ENCOUNTER
msgbox Guardia_Cave_Combate_Taaban_Texto_1 MSGBOX_DEFAULT
waitmoncry
playse MUS_RG_ENCOUNTER_GYM_LEADER
trainerbattle_no_intro TRAINER_TRAINER_653, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_KANGASKHAN, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox Guardia_Cave_Combate_Taaban_Texto_3 MSGBOX_AUTOCLOSE
playse SE_FAINT
setvar VAR_ROUTE120_STATE, 9
release
end

