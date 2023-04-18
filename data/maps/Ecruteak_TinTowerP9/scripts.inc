Ecruteak_TinTowerP9_MapScripts::
	.byte 0

TinTowerP9_1::
end



TinTowerP9_2::
end



TinTowerP9_3::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp9_Text_3, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp9_Text_3:
.string "Muy pocos saben esto, pero las\n"
.string "leyendas más antiguas se refieren\l"
.string "a HO-OH como una enorme ave color\l"
.string "oro puro, de un aura tan mística y\l"
.string "sagrada que todos los dragones se\l"
.string "espantarían ante su presencia.$"



TinTowerP9_4::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp9_Text_4, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp9_Text_4:
.string "El honor consiste en hacer hermoso\n"
.string "aquello que uno está obligado a\l"
.string "realizar.$"



TinTowerP9_5::
end



TinTowerP9_7::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp9_Text_7, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp9_Text_7:
.string "Lo maravilloso de pelear contra un\n"
.string "rival imaginario es que siempre\l"
.string "resulta diestro, aunque fácil de\l"
.string "vencer. El orgullo de la victoria\l"
.string "sin el riesgo de la derrota.$"



TinTowerP9_8::
end



TinTowerP9_EventScript_Monje::
	trainerbattle_single TRAINER_RACHEL, TinTowerP9_Text_MonjeIntro, TinTowerP9_Text_MonjeDefeated
	msgbox TinTowerP9_Text_MonjePostBattle, MSGBOX_AUTOCLOSE
	end



TinTowerP9_EventScript_Monje2::
	trainerbattle_single TRAINER_LEONEL, TinTowerP9_Text_Monje2Intro, TinTowerP9_Text_Monje2Defeated
	msgbox TinTowerP9_Text_Monje2PostBattle, MSGBOX_AUTOCLOSE
	end

Ecruteak_TinTowerP9_Combate_Agatha::
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 6
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_TinTowerP9_Combate_Agatha_Move_1
waitmovement 0x0
playse SE_PIN
applymovement 6, Ecruteak_TinTowerP9_Combate_Agatha_Move_2
waitmovement 0x0
msgbox Ecruteak_TinTowerP9_Combate_Agatha_Texto_1 MSGBOX_AUTOCLOSE
applymovement 6, Ecruteak_TinTowerP9_Combate_Agatha_Move_3
waitmovement 0x0
msgbox Ecruteak_TinTowerP9_Combate_Agatha_Texto_2 MSGBOX_AUTOCLOSE
msgbox Ecruteak_TinTowerP9_Combate_Agatha_Texto_3 MSGBOX_AUTOCLOSE
delay 30
msgbox Ecruteak_TinTowerP9_Combate_Agatha_Texto_4 MSGBOX_AUTOCLOSE
applymovement 6, Ecruteak_TinTowerP9_Combate_Agatha_Move_4
waitmovement 0x0
msgbox Ecruteak_TinTowerP9_Combate_Agatha_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_AGATHA_2, Ecruteak_TinTowerP9_Combate_Agatha_Texto_6
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_TinTowerP9_Combate_Agatha_Move_5
waitmovement 0x0
msgbox Ecruteak_TinTowerP9_Combate_Agatha_Texto_7 MSGBOX_AUTOCLOSE
applymovement 6, Ecruteak_TinTowerP9_Combate_Agatha_Move_6
waitmovement 0x0
msgbox Ecruteak_TinTowerP9_Combate_Agatha_Texto_8 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
fadescreen 1
delay 20
removeobject 6
fadescreen 0
setvar VAR_UNUSED_0x40F7, 159
release
end

Ecruteak_TinTowerP9_Combate_Agatha_Texto_1:
.string "AGATHA: ¡{PLAYER}!\n"
	.string "¡Eres incansable!$"

Ecruteak_TinTowerP9_Combate_Agatha_Texto_2:
.string "El GRAN MAESTRO está en la cima,\n"
	.string "contemplando JOHTO. Dio claras\l"
	.string "indicaciones de no ser molestado\l"
	.string "salvo fuerza mayor.$"

Ecruteak_TinTowerP9_Combate_Agatha_Texto_3:
.string "¿Sabes cuál fue el único supuesto\n"
	.string "de fuerza mayor que contempló,\l"
	.string "{PLAYER}?$"

Ecruteak_TinTowerP9_Combate_Agatha_Texto_4:
.string "Así es, que tú lograses subir\n"
	.string "hasta aquí y, como prueba de tu\l"
	.string "habilidad, lograses derrotar una\l"
	.string "vez más a una exmiembro de la\l"
	.string "ÉLITE 4.$"

Ecruteak_TinTowerP9_Combate_Agatha_Texto_5:
.string "¡En guardia, {PLAYER}!\n"
	.string "¡Este período en TORRE CAMPANA me\l"
	.string "ha permitido volver a conectar con\l"
	.string "mi equipo POKÉMON!$"

Ecruteak_TinTowerP9_Combate_Agatha_Texto_6:
.string "Ya te lo dije y te lo vuelvo a\n"
	.string "decir, tienes un don para el\l"
	.string "combate. Veremos hasta donde\l"
	.string "llegas.$"

Ecruteak_TinTowerP9_Combate_Agatha_Texto_7:
.string "Llegaste a explorar y conocer cada\n"
	.string "rincón de KANTO. Ahora te estás\l"
	.string "adentrando en uno de los lugares\l"
	.string "más sagrados de JOHTO. ¿Hasta\l"
	.string "dónde vas a llegar, {PLAYER}?$"

Ecruteak_TinTowerP9_Combate_Agatha_Texto_8:
.string "El GRAN MAESTRO de TORRE CAMPANA\n"
	.string "te espera. Ándate con ojo, {PLAYER},\l"
	.string "hay fuerzas en este mundo que\l"
	.string "harían temblar a cualquier\l"
	.string "ENTRENADOR, incluso a alguien como\l"
	.string "tú. Cada vez más lejos, más\l"
	.string "difíciles los retos, pero, ¿hasta\l"
	.string "cuándo podrán tus POKÉMON soportar\l"
	.string "esa presión?$"

Ecruteak_TinTowerP9_Combate_Agatha_Move_1:
walk_up
walk_up
walk_right
walk_up
walk_up
step_end

Ecruteak_TinTowerP9_Combate_Agatha_Move_2:
emote_exclamation_mark
face_down
step_end

Ecruteak_TinTowerP9_Combate_Agatha_Move_3:
walk_in_place_down
step_end

Ecruteak_TinTowerP9_Combate_Agatha_Move_4:
walk_down
step_end

Ecruteak_TinTowerP9_Combate_Agatha_Move_5:
face_up
step_end

Ecruteak_TinTowerP9_Combate_Agatha_Move_6:
face_right
step_end
