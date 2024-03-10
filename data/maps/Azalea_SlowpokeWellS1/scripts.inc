Azalea_SlowpokeWellS1_MapScripts::
	.byte 0

SlowpokeWellS1_1::
end



SlowpokeWellS1_2::
end

SlowpokeWellS1_Combate::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 129
goto_if_gt SlowpokeWellS1_Combate_2
msgbox SlowpokeWellS1_Combate_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x40F7, 128
goto_if_gt SlowpokeWellS1_Combate_3
release
end

SlowpokeWellS1_Combate_3::
delay 20
msgbox SlowpokeWellS1_Combate_Texto_3 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 2, SlowpokeWellS1_Combate_3_Move_1
waitmovement 0x0
msgbox SlowpokeWellS1_Combate_Texto_4 MSGBOX_AUTOCLOSE
msgbox SlowpokeWellS1_Combate_Texto_5 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq SlowpokeWellS1_Combate_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox SlowpokeWellS1_Combate_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_SLOWBRO, SlowpokeWellS1_Combate_Texto_7
msgbox SlowpokeWellS1_Combate_Texto_8 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_SLOWBRONITE
msgbox SlowpokeWellS1_Combate_Texto_8.1 MSGBOX_DEFAULT
waitfanfare
setvar VAR_UNUSED_0x40F7, 130
release
end

SlowpokeWellS1_Combate_Texto_8.1:
.string "¡Obtuviste una SLOWBRONITA\n"
	.string "de manos de ENTRENADOR!$"


SlowpokeWellS1_Combate_No::
msgbox SlowpokeWellS1_Combate_Texto_9 MSGBOX_AUTOCLOSE
release
end


SlowpokeWellS1_Combate_2::
msgbox SlowpokeWellS1_Combate_Texto_2 MSGBOX_AUTOCLOSE
release
end


SlowpokeWellS1_Combate_3_Move_1:
emote_exclamation_mark
step_end

SlowpokeWellS1_Combate_Texto_1:
.string "SLOWBRO es un POKÉMON increíble,\n"
	.string "su DEFENSA FÍSICA es buena, ¿pero\l"
	.string "sabías que puede llegar a igualar\l"
	.string "al mismísimo CLOYSTER en ese\l"
	.string "apartado?\l"
	.string "Pocos lo saben porque casi nadie\l"
	.string "es capaz de llevar a un SLOWBRO\l"
	.string "hasta ese punto.$"

SlowpokeWellS1_Combate_Texto_2:
.string "Es una SLOWBRONITA, son\n"
	.string "extremadamente raras de ver. Si\l"
	.string "tienes un SLOWBRO, este objeto\l"
	.string "sacará todo su potencial, ¡e\l"
	.string "igualará a CLOYSTER en DEFENSA\l"
	.string "FÍSICA!$"

SlowpokeWellS1_Combate_Texto_3:
.string "…\n"
	.string "…$"

SlowpokeWellS1_Combate_Texto_4:
.string "¿Te envía CÉSAR para combatir\n"
	.string "conmigo?\l"
	.string "¿Si me ganas podrás enfrentarte a\l"
	.string "él?\l"
	.string "Qué raro, CÉSAR pasa cada vez más\l"
	.string "del combate POKÉMON. Algo ha\l"
	.string "debido de ver en ti. En cualquier\l"
	.string "caso lo comprobaremos. Mi equipo\l"
	.string "POKÉMON es simple, pero muy\l"
	.string "sólido.$"

SlowpokeWellS1_Combate_Texto_5:
.string "Entonces, ¿estás preparado?$"

SlowpokeWellS1_Combate_Texto_6:
.string "¡Bien!\n"
	.string "¡Vas a necesitar algo más que\l"
	.string "pegar duro para romper la coraza\l"
	.string "de mis POKÉMON!$"

SlowpokeWellS1_Combate_Texto_7:
.string "CÉSAR no ha tenido mal ojo\n"
	.string "contigo, desde luego.$"

SlowpokeWellS1_Combate_Texto_8:
.string "Impresionante, la verdad que se\n"
	.string "agradece que de vez en cuando\l"
	.string "aparezca gente como tú, quitando a\l"
	.string "CÉSAR había olvidado lo que era un\l"
	.string "combate POKÉMON de verdad.\l"
	.string "Quiero que tengas esta piedra,\l"
	.string "espero que sepas valorarla.\l"
	.string "¡Es la tercera que logro encontrar\l"
	.string "en el POZO SLOWPOKE en más de 10\l"
	.string "años!$"

SlowpokeWellS1_Combate_Texto_9:
.string "Ya veo, no te preocupes. Yo\n"
	.string "seguiré aquí, contemplando a los\l"
	.string "SLOWPOKE.$"
