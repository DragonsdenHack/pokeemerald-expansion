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
	.string "Very few know this, but the oldest\n"
	.string "legends refer to HO-OH as a massive\l"
	.string "bird of pure gold, with such a mystical\l"
	.string "and sacred aura that all dragons would\l"
	.string "be frightened by its presence.$"



TinTowerP9_4::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp9_Text_4, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp9_Text_4:
	.string "Honor lies in beautifying that which\n"
	.string "one is obligated to perform.$"



TinTowerP9_5::
end



TinTowerP9_7::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp9_Text_7, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp9_Text_7:
	.string "The wonderful thing about fighting\n"
	.string "against an imaginary opponent is that\l"
	.string "it always proves skillful, yet easy to\l"
	.string "defeat. It's the pride of victory\l"
	.string "without the risk of defeat.$"



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
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
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
.string "AGATHA: {PLAYER}!\n"
	.string "You are tireless!$"

Ecruteak_TinTowerP9_Combate_Agatha_Texto_2:
	.string "The GRAND MASTER stands at the peak,\n"
	.string "overlooking JOHTO. He gave explicit\l"
	.string "instructions not to be disturbed\l"
	.string "except in cases of absolute necessity.$"

Ecruteak_TinTowerP9_Combate_Agatha_Texto_3:
	.string "Do you know what was the only supposed\n"
	.string "case of absolute necessity that was\l"
	.string "considered, {PLAYER}?$"

Ecruteak_TinTowerP9_Combate_Agatha_Texto_4:
	.string "You're right, that you were able to climb\n"
	.string "up here, and as proof of your skill, you\l"
	.string "succeeded in defeating a former member\l"
	.string "of the ELITE FOUR again.$"

Ecruteak_TinTowerP9_Combate_Agatha_Texto_5:
	.string "On guard. {PLAYER}! This time in BELL\n"
	.string "TOWER has allowed me to reconnect with\l"
	.string "my POKÉMON team!$"

Ecruteak_TinTowerP9_Combate_Agatha_Texto_6:
	.string "I've told you before, and I'll say it\n"
	.string "again, you are prodigious for battles.\l"
	.string "We'll see how far you go.$"

Ecruteak_TinTowerP9_Combate_Agatha_Texto_7:
	.string "You've explored and become familiar\n"
	.string "with every corner of KANTO. Now you're\l"
	.string "venturing into one of the most sacred\l"
	.string "places in JOHTO. How far will you go,\l"
	.string "{PLAYER}?$"

Ecruteak_TinTowerP9_Combate_Agatha_Texto_8:
	.string "The GRAND MASTER of BELL TOWER awaits\n"
	.string "you. Be careful, {PLAYER}, there are\l"
	.string "forces in this world that would make\l"
	.string "any TRAINER tremble, even someone like\l"
	.string "you. As challenges become increasingly\l"
	.string "difficult, how long can your POKÉMON\l"
	.string "withstand that pressure?$"

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
