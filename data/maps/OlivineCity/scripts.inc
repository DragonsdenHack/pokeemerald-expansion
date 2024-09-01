OlivineCity_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, OlivineCity_OnTransition
	.byte 0

OlivineCity_OnTransition::
setflag FLAG_VISITED_OLIVINE_CITY
end

OlivineCity1::
end



OlivineCity2::
lock     
faceplayer     
msgbox OlivineCity_Text_2, MSGBOX_DEFAULT
release     
end

OlivineCity_Text_2:
	.string "The OLIVINE maritime tradition is the\n"
	.string "oldest one in KANTO-JOHTO. The\l"
	.string "LIGHTHOUSE was built a long time ago\l"
	.string "due to multiple rocks in these seas.\l"
	.string "Now, it has been expanded and will also\l"
	.string "serve as a guide for ships from other\l"
	.string "regions.$"


OlivineCity3::
lock     
faceplayer     
msgbox OlivineCity_Text_3, MSGBOX_DEFAULT
release     
end

OlivineCity_Text_3:
.string "Everything is ready.\n"
	.string "The opening of the OLIVINE PORT will\l"
	.string "connect JOHTO with the rest of the\l"
	.string "world!$"



OlivineCity4::
lock     
faceplayer     
msgbox OlivineCity_Text_4, MSGBOX_DEFAULT
release     
end

OlivineCity_Text_4:
	.string "Tourism is increasingly present in\n"
	.string "OLIVINE CITY, even in CIANWOOD. Now,\l"
	.string "with the expansion of the PORT, it will\l"
	.string "be even more so.$"



OlivineCity5::
lock     
faceplayer     
msgbox OlivineCity_Text_5, MSGBOX_DEFAULT
release     
end

OlivineCity_Text_5:
	.string "There's nothing more treacherous than\n"
	.string "the sea on a pitch-black night! Without\l"
	.string "this LIGHTHOUSE's light, the ships\l"
	.string "around here wouldn't be able to\l"
	.string "navigate.$"



OlivineCity6::
lock     
faceplayer     
msgbox OlivineCity_Text_6, MSGBOX_DEFAULT
release     
end

OlivineCity_Text_6:
	.string "Do you already hear the roar of the\n"
	.string "waves crashing against our PORT?\l"
	.string "OLIVINE CITY can't be compared to any\l"
	.string "other coastal city. VERMILION CITY?\l"
	.string "Don't make me laugh!$"



OlivineCityDocumento_100::
msgbox OlivineCityDocumento_Text_100, MSGBOX_SIGN   
end

OlivineCityDocumento_Text_100:
.string "OLIVINE CITY GYM\n"
	.string "LEADER: CROM\l"
	.string "The TRAINER who uncovered the\l"
	.string "STEEL TYPE secrets.$"



OlivineCityDocumento_101::
msgbox OlivineCityDocumento_Text_101, MSGBOX_SIGN   
end

OlivineCityDocumento_Text_101:
	.string "OLIVINE CITY\n"
	.string "The port to foreign lands.$"



OlivineCityDocumento_102::
msgbox OlivineCityDocumento_Text_102, MSGBOX_SIGN   
end

OlivineCityDocumento_Text_102:
	.string "OLIVINE PORT\n"
	.string "FAST SHIP PIER.$"



OlivineCityDocumento_103::
msgbox OlivineCityDocumento_Text_103, MSGBOX_SIGN   
end

OlivineCityDocumento_Text_103:
	.string "NORMAN'S HOUSE$"



OlivineCityDocumento_104::
msgbox OlivineCityDocumento_Text_104, MSGBOX_SIGN   
end

OlivineCityDocumento_Text_104:
	.string "OLIVINE LIGHTHOUSE\n"
	.string "Also known as the\l"
	.string "GLITTER LIGHTHOUSE.$"
