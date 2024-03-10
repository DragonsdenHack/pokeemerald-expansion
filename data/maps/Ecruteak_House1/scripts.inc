Ecruteak_House1_MapScripts::
	.byte 0

EcruteakHouse1::
lock     
faceplayer     
msgbox Ecruteak_House1_Text_1, MSGBOX_DEFAULT
release     
end

Ecruteak_House1_Text_1:
	.string "The world has changed. Pragmatism has\n"
	.string "replaced value, but I still trust that\l"
	.string "there are honorable people in the\l"
	.string "offices of SILPH and RADIO TOWER.$"



EcruteakHouse2Documento_100::
lock     
msgbox EcruteakHouse2Documento_Text_100, MSGBOX_DEFAULT
msgbox EcruteakHouse2Documento_Text_100YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EcruteakHouse2Documento_100No
msgbox EcruteakHouse2Documento_Text_100Yes, MSGBOX_DEFAULT
msgbox EcruteakHouse2Documento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EcruteakHouse2Documento_100No
msgbox EcruteakHouse2Documento_Text_100Yes2, MSGBOX_DEFAULT
release
end



EcruteakHouse2Documento_Text_100:
    .string "ECRUTEAK CITY HISTORY$"

EcruteakHouse2Documento_Text_100YesNo:
.string "Do you want to read it?$"

EcruteakHouse2Documento_Text_100YesNo2:
.string "Keep reading?$"

EcruteakHouse2Documento_100No::
release
end

EcruteakHouse2Documento_Text_100Yes:
	.string "In ECRUTEAK CITY, there were two\n"
	.string "towers. Each one housed a strong\l"
	.string "FLYING-TYPE POKÉMON. But one of them\l"
	.string "burned down. And since then, neither of\l"
	.string "the two POKÉMON has been seen.$"



EcruteakHouse2Documento_Text_100Yes2:
	.string "In ECRUTEAK CITY, there were also three\n"
	.string "POKÉMON that roamed throughout the\l"
	.string "city. They say they were born from\l"
	.string "water, fire, and lightning. But because\l"
	.string "they couldn't contain their immense\l"
	.string "power… they fled to the grasslands.$"
