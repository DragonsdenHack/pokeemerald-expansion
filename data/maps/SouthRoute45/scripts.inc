SouthRoute45_MapScripts::
	.byte 0

SouthRoute45_1::
end



SouthRoute45_2::
end



SouthRoute45_3::
end



SouthRoute45_4::
end



SouthRoute45_5::
end



SouthRoute45_6::
end



SouthRoute45_7::
end



SouthRoute45_8::
end



SouthRoute45_9::
lock     
faceplayer     
msgbox SouthRoute45_Text_9, MSGBOX_DEFAULT
release     
end

SouthRoute45_Text_9:
.string "My mission is to make sure no one\n"
.string "passes this point by chance, In case a\l"
.string "lost hiker shows up, the ROAR of my\l"
.string "GRANBULL will quickly put an end to\l"
.string "that chance encounter and make them\l"
.string "turn the other way!$"



SouthRoute45_10::
lock     
faceplayer     
msgbox SouthRoute45_Text_10, MSGBOX_DEFAULT
release     
end

SouthRoute45_Text_10:
	.string "Is everything okay, sir? We wish you\n"
.string "luck in your journey through JOHTO!$"



SouthRoute45_11::
lock     
faceplayer     
msgbox SouthRoute45_Text_11, MSGBOX_DEFAULT
release     
end

SouthRoute45_Text_11:
.string "At your service for everything you\n"
.string "need, CHIEF ADMIN. {PLAYER}!$"



SouthRoute45_12::
lock     
faceplayer     
msgbox SouthRoute45_Text_12, MSGBOX_DEFAULT
release     
end

SouthRoute45_Text_12:
.string "To the north of here is BLACKTHORN\n"
.string "CITY, famous for its great devotion to\l"
.string "the DRAGON TYPE. The only way to get\l"
.string "there is by passing through the ICE\l"
.string "PATH.$"



SouthRoute45_13::
lock     
faceplayer     
msgbox SouthRoute45_Text_13, MSGBOX_DEFAULT
release     
end

SouthRoute45_Text_13:
.string "It's impossible for anyone to discover\n"
.string "the base, the mountains around here\l"
.string "cover it completely. Only BELL TOWER is\l"
.string "high enough to be seen over them!$"



SouthRoute45_14::
lock     
faceplayer     
msgbox SouthRoute45_Text_14, MSGBOX_DEFAULT
release     
end

SouthRoute45_Text_14:
.string "We're south from ROUTE 45, so far south\n"
.string "that this area is not registered on\l"
.string "conventional maps. But not enough to\l"
.string "be considered part of ROUTE 29,\l"
.string "between NEW BARK TOWN and CHERRYGROVE\l"
.string "CITY.$"



SouthRoute45_15::
end



SouthRoute45_16::
end



SouthRoute45_EventScript_Karateka::
	trainerbattle_single TRAINER_VICKY, SouthRoute45_Text_KaratekaIntro, SouthRoute45_Text_KaratekaDefeated
	msgbox SouthRoute45_Text_KaratekaPostBattle, MSGBOX_AUTOCLOSE
	end



SouthRoute45_EventScript_Chico::
	trainerbattle_single TRAINER_WALLACE, SouthRoute45_Text_ChicoIntro, SouthRoute45_Text_ChicoDefeated
	msgbox SouthRoute45_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



SouthRoute45_EventScript_Montanero::
	trainerbattle_single TRAINER_SHELBY_1, SouthRoute45_Text_MontaneroIntro, SouthRoute45_Text_MontaneroDefeated
	msgbox SouthRoute45_Text_MontaneroPostBattle, MSGBOX_AUTOCLOSE
	end



SouthRoute45Documento_100::
msgbox SouthRoute45Documento_Text_100, MSGBOX_SIGN   
end

SouthRoute45Documento_Text_100:
	.string "ROUTE 45\n"
	.string "MOUNTAIN PATH$"


SouthRoute45_SudowoodoRest::
msgbox SouthRoute45_SudowoodoRest_Text, MSGBOX_NPC   
end

SouthRoute45_SudowoodoRest_Text:
	.string "...\n"
	.string "...\l"
	.string "(It's a POKÉMON, it seems\l"
	.string "to be resting)$"
