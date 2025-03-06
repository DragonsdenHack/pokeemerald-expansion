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
.string "You obtained a SLOWBRONITE\n"
	.string "from SUPERNERD!$"


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
	.string "apartado?\p"
	.string "Pocos lo saben porque casi nadie\n"
	.string "es capaz de llevar a un SLOWBRO\l"
	.string "hasta ese punto.$"

SlowpokeWellS1_Combate_Texto_2:
.string "Es una SLOWBRONITA, son\n"
	.string "extremadamente raras de ver.\l"
	.string "Si tienes un SLOWBRO, este objeto\l"
	.string "sacará todo su potencial, ¡y su\l"
	.string "coraza será tam dura como la de\l"
	.string "un CLOYSTER!$"

SlowpokeWellS1_Combate_Texto_3:
.string "…\n"
	.string "{PAUSE 5}…{PAUSE 5}$"

SlowpokeWellS1_Combate_Texto_4:
.string "¿Te envía CÉSAR para\n"
	.string "combatir conmigo?\p"
	.string "¿Si me ganas podrás\n"
	.string "enfrentarte a él?\p"
	.string "Qué raro, CÉSAR pasa cada vez más\n"
	.string "del combate POKÉMON. Algo ha\l"
	.string "debido de ver en ti. En cualquier\l"
	.string "caso, lo comprobaremos.\p"
	.string "Mi equipo POKÉMON es simple, pero\n"
	.string "muy sólido.$"

SlowpokeWellS1_Combate_Texto_5:
.string "So, are you ready?$"

SlowpokeWellS1_Combate_Texto_6:
	.string "All right! You'll need more than just\n"
	.string "brute STRENGTH to crack open my\l"
	.string "POKÉMON's shell!$"

SlowpokeWellS1_Combate_Texto_7:
	.string "KURT wasn't wrong with you, that's for\n"
	.string "sure.$"

SlowpokeWellS1_Combate_Texto_8:
.string "Impresionante. La verdad que se\n"
	.string "agradece que de vez en cuando\l"
	.string "aparezca gente como tú, quitando a\l"
	.string "CÉSAR había olvidado lo que era un\l"
	.string "combate POKÉMON de verdad.\p"
	.string "Quiero que tengas esta piedra,\n"
	.string "espero que sepas valorarla.\l"
	.string "¡Es la tercera que logro encontrar\l"
	.string "en el POZO SLOWPOKE en más de 10\l"
	.string "años!$"

SlowpokeWellS1_Combate_Texto_9:
.string "Ya veo, no te preocupes.\n"
	.string "Yo seguiré aquí, contemplando\l"
	.string "a los SLOWPOKE.$"
