Ecruteak_TinTowerP6_MapScripts::
	.byte 0

TinTowerP6_1::
end



TinTowerP6_2::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp6_Text_2, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp6_Text_2:
	.string "Knowing things others don't know is\n"
	.string "more effective when others aren't\l"
	.string "aware that you know things they don't\l"
	.string "know.$"



TinTowerP6_3::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp6_Text_3, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp6_Text_3:
	.string "The two GRAND MASTERS of JOHTO have\n"
	.string "seen something in you. Otherwise, your\l"
	.string "presence here wouldn't be possible.$"



TinTowerP6_4::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp6_Text_4, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp6_Text_4:
	.string "From our GRAND MASTER's EEVEE, all\n"
	.string "other EEVEE descend. That EEVEE\l"
	.string "masters all TYPEs and is as ancient as\l"
	.string "ECRUTEAK CITY itself.$"



TinTowerP6_5::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp6_Text_5, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp6_Text_5:
	.string "The biggest obstacle in life is waiting\n"
	.string "for tomorrow and losing today.$"



TinTowerP6_6::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp6_Text_6, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp6_Text_6:
	.string "So{PAUSE 15}…{PAUSE 15} GASTLY, HAUNTER, and GENGAR aren't\n"
	.string "the only GHOSTS reflected by the\l"
	.string "afterlife{PAUSE 15}…{PAUSE 15} They represent only the\l"
	.string "surface, but it's also unwise to expose\l"
	.string "the depths to those unprepared to\l"
	.string "confront them…$"



TinTowerP6_EventScript_Monje::
	trainerbattle_single TRAINER_AISHA, TinTowerP6_Text_MonjeIntro, TinTowerP6_Text_MonjeDefeated
	msgbox TinTowerP6_Text_MonjePostBattle, MSGBOX_AUTOCLOSE
	end
