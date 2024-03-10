Route2_Path3_MapScripts::
	.byte 0

Route2Path3_1::
lock     
faceplayer     
msgbox Route2_Path3_Text_1, MSGBOX_DEFAULT
release     
end

Route2_Path3_Text_1:
.string "A mí no me hables ROCKET, o\n"
.string "pensarán que tengo algo que ver\l"
.string "con vosotros.$"



Route2Path3_2::
end

Route2_Path3_Combate_Ayudante_Oak::
lock
faceplayer
compare VAR_UNUSED_0x40B8, 0
goto_if_gt Route2_Path3_Combate_Ayudante_Oak_2
msgbox Route2_Path3_Combate_Ayudante_Oak_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox Route2_Path3_Combate_Ayudante_Oak_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox Route2_Path3_Combate_Ayudante_Oak_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route2_Path3_Combate_Ayudante_Oak_3
msgbox Route2_Path3_Combate_Ayudante_Oak_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_AYUDANTE_2, Route2_Path3_Combate_Ayudante_Oak_Texto_6
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_TM15
waitfanfare
msgbox Route2_Path3_Combate_Ayudante_Oak_Texto_7 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 2, Route2_Path3_Combate_Ayudante_Oak_Move_1
waitmovement 0x0
msgbox Route2_Path3_Combate_Ayudante_Oak_Texto_8 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40B8, 1
release
end

Route2_Path3_Combate_Ayudante_Oak_2::
lock
faceplayer
msgbox Route2_Path3_Combate_Ayudante_Oak_Texto_4 MSGBOX_AUTOCLOSE
release
end

Route2_Path3_Combate_Ayudante_Oak_3::
lock
faceplayer
msgbox Route2_Path3_Combate_Ayudante_Oak_Texto_9 MSGBOX_AUTOCLOSE
release
end

Route2_Path3_Combate_Ayudante_Oak_Texto_1:
.string "La gente como vosotros que solo\n"
	.string "entorpece el cauce de las cosas y\l"
	.string "el progreso no debería siquiera\l"
	.string "existir, fuera de mi vista antes\l"
	.string "de que tenga que repetírtelo.$"

Route2_Path3_Combate_Ayudante_Oak_Texto_2:
.string "…\n"
	.string "…$"

Route2_Path3_Combate_Ayudante_Oak_Texto_3:
.string "¿Osas cruzar tu mirada con un\n"
	.string "AYUDANTE DE OAK?$"

Route2_Path3_Combate_Ayudante_Oak_Texto_4:
.string "El pupilo de OAK va a triturar a\n"
	.string "todos vuestros POKÉMON como si\l"
	.string "fueran finas hojas de papel.$"

Route2_Path3_Combate_Ayudante_Oak_Texto_5:
.string "Será lo último que hagas.$"

Route2_Path3_Combate_Ayudante_Oak_Texto_6:
.string "¡Imposible!$"

Route2_Path3_Combate_Ayudante_Oak_Texto_7:
.string "({PLAYER} robó la MT15 HYPERRAYO de\n"
	.string "AYUDANTE DE OAK).$"

Route2_Path3_Combate_Ayudante_Oak_Texto_8:
.string "Esto vas a pagármelo ROCKET, voy a\n"
	.string "hacer arder a toda tu organización\l"
	.string "por lo ocurrido aquí.$"

Route2_Path3_Combate_Ayudante_Oak_Texto_9:
.string "Aún estás a tiempo de desaparecer\n"
	.string "antes de que me arrepienta.$"

Route2_Path3_Combate_Ayudante_Oak_Move_1:
emote_exclamation_mark
step_end
