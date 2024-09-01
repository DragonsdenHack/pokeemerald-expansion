Ecruteak_TinTowerP5_MapScripts::
	.byte 0

TinTowerP5_1::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp5_Text_1, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp5_Text_1:
	.string "The bond with your POKÉMON is the only\n"
	.string "reality in this world.$"



TinTowerP5_2::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp5_Text_2, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp5_Text_2:
	.string "Encase the bird's wings in gold, and it\n"
	.string "will never soar to the sky again.$"



TinTowerP5_3::
end



TinTowerP5_4::
end



TinTowerP5_5::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp5_Text_5, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp5_Text_5:
	.string "We accept the reality of the world that\n"
	.string "is shown for us.$"



TinTowerP5_6::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp5_Text_6, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp5_Text_6:
	.string "The plan we've set for a battle is rarely\n"
	.string "executed as intended; unexpected\l"
	.string "events always arise. And it is right\l"
	.string "there where the brilliance of a POKÉMON\l"
	.string "battle lies. It turns into something\l"
	.string "magical-into art.$"



TinTowerP5_EventScript_Monje::
	trainerbattle_single TRAINER_BRANDI, TinTowerP5_Text_MonjeIntro, TinTowerP5_Text_MonjeDefeated
	msgbox TinTowerP5_Text_MonjePostBattle, MSGBOX_AUTOCLOSE
	end

TinTowerP5_Foco::
lock     
faceplayer  
goto_if_set FLAG_NUEVA_816, TinTowerP5_Foco_Despues
msgbox TinTowerP5_Foco_Texto_1, MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM93
msgbox TinTowerP5_Foco_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
setflag FLAG_NUEVA_816
release     
end

TinTowerP5_Foco_Despues::
msgbox TinTowerP5_Foco_Texto_2, MSGBOX_NPC
release
end

TinTowerP5_Foco_Texto_1:
	.string "Body and mind work together. When they\n"
	.string "are balanced, everything will flow\l"
	.string "naturally.$"

TinTowerP5_Foco_Texto_1.1:
.string "{PLAYER} obtained the TM93\n"
	.string "FLASH CANNON from the SAGE!!$"

TinTowerP5_Foco_Texto_2:
	.string "FLASH CANNON brings out the SPECIAL\n"
	.string "side that even STEEL-TYPE POKÉMON\l"
	.string "possesses.$"



