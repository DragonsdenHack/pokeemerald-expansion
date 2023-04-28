CianwoodEusineHouse_MapScripts::
	.byte 0

CianwoodEusineHouse_Combate::
lock
compare VAR_VERDANTURF_TOWN_STATE, 10
goto_if_gt CianwoodEusineHouse_Dialogo_Post_Mision
delay 20
msgbox CianwoodEusineHouse_Combate_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox CianwoodEusineHouse_Combate_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, CianwoodEusineHouse_Combate_Move_1
waitmovement 0x0
msgbox CianwoodEusineHouse_Combate_Texto_3 MSGBOX_AUTOCLOSE
delay 30
playse SE_PIN
applymovement 1, CianwoodEusineHouse_Combate_Move_2
waitmovement 0x0
msgbox CianwoodEusineHouse_Combate_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, CianwoodEusineHouse_Combate_Move_3
waitmovement 0x0
msgbox CianwoodEusineHouse_Combate_Texto_5 MSGBOX_AUTOCLOSE
msgbox CianwoodEusineHouse_Combate_Texto_6 MSGBOX_AUTOCLOSE
delay 20
msgbox CianwoodEusineHouse_Combate_Texto_1.1 MSGBOX_AUTOCLOSE
delay 20
playse MUS_RG_ENCOUNTER_GYM_LEADER
applymovement 1, CianwoodEusineHouse_Combate_Move_1
waitmovement 0x0
msgbox CianwoodEusineHouse_Combate_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_1, CianwoodEusineHouse_Combate_Texto_1.1
msgbox CianwoodEusineHouse_Combate_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox CianwoodEusineHouse_Combate_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, CianwoodEusineHouse_Combate_Move_4
waitmovement 0x0
msgbox CianwoodEusineHouse_Combate_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, CianwoodEusineHouse_Combate_Move_1
waitmovement 0x0
msgbox CianwoodEusineHouse_Combate_Texto_12 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_2
setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
fadescreen 1
delay 20
removeobject 1
fadescreen 0
setvar VAR_VERDANTURF_TOWN_STATE, 3
release
end

CianwoodEusineHouse_Combate_Move_4:
face_up
step_end

CianwoodEusineHouse_Combate_Move_3:
walk_in_place_right
step_end

CianwoodEusineHouse_Combate_Move_1:
face_player
step_end

CianwoodEusineHouse_Combate_Move_2:
emote_exclamation_mark
step_end

CianwoodEusineHouse_Combate_Texto_1:
.string "????: … …$"

CianwoodEusineHouse_Combate_Texto_1.1:
.string "… …$"

CianwoodEusineHouse_Combate_Texto_2:
.string "Parece que han dado con una respuesta,\n"
	.string "debo volver cuanto antes, tengo\l"
	.string "curiosidad por saber a qué se debe…$"

CianwoodEusineHouse_Combate_Texto_3:
.string "Perdona, ¿quieres algo?$"

CianwoodEusineHouse_Combate_Texto_4:
.string "No sé cómo ha llegado hasta ti esa\n"
	.string "información, pero tienes razón, existe\l"
	.string "una gran extensión de tierra al oeste\l"
	.string "de aquí, pero la pregunta es…$"

CianwoodEusineHouse_Combate_Texto_5:
.string "¿Merece alguien como tú visitarla? Un\n"
	.string "lugar virgen, puro y alejado de todos\l"
	.string "esos EJECUTIVOS de TRIGAL, que\l"
	.string "parecen haber olvidado quienes somos,\l"
	.string "y de dónde venimos.$"

CianwoodEusineHouse_Combate_Texto_6:
.string "Dices haber visitado TORRE CAMPANA, y\n"
	.string "tener la bendición de los 2 GRANDES\l"
	.string "MAESTROS de JOHTO. Yo solo veo a\l"
	.string "alguien que intenta colgarse medallas,\l"
	.string "como todos hoy en día, expondrias\l"
	.string "dichas experiencias en un museo si\l"
	.string "pudieras, ¿o no?$"

CianwoodEusineHouse_Combate_Texto_7:
.string "Permíteme dudar, ¿{PLAYER}? Tendrás\n"
	.string "que demostrar eso que acabas de decir.$"

CianwoodEusineHouse_Combate_Texto_8:
.string "????: Vaya… parece que te he juzgado\n"
	.string "mal, a pesar de tu corta edad y alta\l"
	.string "posición, tus POKÉMON luchan en total\l"
	.string "armonía, tal y como lo haría el más\l"
	.string "sabio de los monjes.$"

CianwoodEusineHouse_Combate_Texto_9:
.string "Me presentaré, mi nombre es EUSINE, he\n"
	.string "dedicado mi vida a estudiar los\l"
	.string "llamados PERROS LEGENDARIOS, aquellos\l"
	.string "que surgieron tras el famoso incendio\l"
	.string "que acabó con TORRE LATÓN, hace casi\l"
	.string "150 años.$"

CianwoodEusineHouse_Combate_Texto_10:
.string "EUSINE: Eres un caso curioso, creí que\n"
	.string "no quedaban jovenes como tú en JOHTO,\l"
	.string "sin duda mereces la oportunidad de\l"
	.string "visitar tan extraordinario lugar.$"

CianwoodEusineHouse_Combate_Texto_12:
.string "Nos vemos fuera, prepárate para\n"
	.string "expandir el mundo que conoces.$"

CianwoodEusineHouse_Dialogo_Post_Mision::
lock
faceplayer
compare VAR_VERDANTURF_TOWN_STATE, 11
goto_if_gt CianwoodEusineHouse_Dialogo_Post_Mision_2
msgbox CianwoodEusineHouse_Dialogo_Post_Mision_Texto_1 MSGBOX_AUTOCLOSE
msgbox CianwoodEusineHouse_Dialogo_Post_Mision_Texto_2 MSGBOX_AUTOCLOSE
msgbox CianwoodEusineHouse_Dialogo_Post_Mision_Texto_3 MSGBOX_AUTOCLOSE
msgbox CianwoodEusineHouse_Dialogo_Post_Mision_Texto_4 MSGBOX_AUTOCLOSE
delay 40
applymovement 1, CianwoodEusineHouse_Combate_Move_4
waitmovement 0x0
msgbox CianwoodEusineHouse_Dialogo_Post_Mision_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, CianwoodEusineHouse_Combate_Move_1
waitmovement 0x0
msgbox CianwoodEusineHouse_Dialogo_Post_Mision_Texto_6 MSGBOX_AUTOCLOSE
msgbox CianwoodEusineHouse_Dialogo_Post_Mision_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox CianwoodEusineHouse_Dialogo_Post_Mision_Texto_8 MSGBOX_AUTOCLOSE
setvar VAR_VERDANTURF_TOWN_STATE, 12
addvar VAR_UNUSED_0x40F7, 1
compare VAR_UNUSED_0x40F7, 183
goto_if_eq Misiones_DLC_Fin_Llamada_Giovanni_Eusine
release
end

Misiones_DLC_Fin_Llamada_Giovanni_Eusine::
delay 30
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
applymovement OBJ_EVENT_ID_PLAYER, Misiones_DLC_Fin_Llamada_Giovanni_Eusine_Move_1
waitmovement 0x0
msgbox Misiones_DLC_Fin_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
delay 20
msgbox IcePath_Llamada_Giovanni_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq IcePath_Llamada_Giovanni_No
warpsilent MAP_ROCKET_HIDEOUT_5F, 69, 4
release
end

Misiones_DLC_Fin_Llamada_Giovanni_Eusine_Move_1:
walk_fast_left
walk_fast_left
step_end

Misiones_DLC_Fin_Llamada_Giovanni_Texto_1:
.string "GIOVANNI: ¿{PLAYER}? Según los\n"
	.string "datos recopilados, acabas de completar\l"
	.string "todas las misiones asignadas. ¿No es\l"
	.string "así? En ese caso, nos vemos en mi\l"
	.string "despacho.$"

CianwoodEusineHouse_Dialogo_Post_Mision_2::
msgbox CianwoodEusineHouse_Dialogo_Post_Mision_Texto_9 MSGBOX_AUTOCLOSE
release
end

CianwoodEusineHouse_Dialogo_Post_Mision_Texto_1:
.string "Ah, {PLAYER}, gracias por venir.$"

CianwoodEusineHouse_Dialogo_Post_Mision_Texto_2:
.string "Las sospechas que tenía sobre\n"
	.string "vosotros se confirmaron justo al irme.$"

CianwoodEusineHouse_Dialogo_Post_Mision_Texto_3:
.string "Oí a tu amiga hablar sobre los POKÉMON\n"
	.string "del maestro como información, de un tal\l"
	.string "GIOVANNI…$"

CianwoodEusineHouse_Dialogo_Post_Mision_Texto_4:
.string "¿Pertenecéis a algún tipo de\n"
	.string "organización, verdad?$"

CianwoodEusineHouse_Dialogo_Post_Mision_Texto_5:
.string "Ya veo. Buscáis expandir el poder de\n"
	.string "ciertos POKÉMON. Verás…$"

CianwoodEusineHouse_Dialogo_Post_Mision_Texto_6:
.string "Mis conocimientos sobre los PERROS\n"
	.string "LEGENDARIOS pueden seros de gran\l"
	.string "ayuda. Tengo la firme creencia de que,\l"
	.string "aunque son inferiores en poder a EN,\l"
	.string "RAI y SUI, son mucho más moldeables.\l"
	.string "Ahí está la trampa de que la\l"
	.string "intervención divina sea superada por\l"
	.string "el vínculo.$"

CianwoodEusineHouse_Dialogo_Post_Mision_Texto_7:
.string "Me gustaría ser capaz de demostrar\n"
	.string "esto, y sacar a relucir el poder latente\l"
	.string "de estas bestias, de tal forma que\l"
	.string "contengan la misma esencia de EN, RAI y\l"
	.string "SUI. ¿Qué me dices?$"

CianwoodEusineHouse_Dialogo_Post_Mision_Texto_8:
.string "¡Sabía que aceptarías! Entonces…\n"
	.string "disponéis de un enorme equipo de\l"
	.string "CIENTÍFICOS que estarán muy\l"
	.string "interesados en oír todo esto… bien, yo\l"
	.string "no me moveré de aquí, en cuanto les\l"
	.string "confirmes mi incorporación, me pondré a\l"
	.string "trabajar con ellos.$"

CianwoodEusineHouse_Dialogo_Post_Mision_Texto_9:
.string "Yo no me moveré de aquí, en cuanto les\n"
	.string "confirmes mi incorporación, me pondré a\l"
	.string "trabajar con ellos.$"


