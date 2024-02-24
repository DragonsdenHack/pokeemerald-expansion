CeladonCity_School_MapScripts::
	.byte 0

CeladonCitySchool_1::
end



CeladonCitySchoolDocumento_100::
msgbox CeladonCitySchoolDocumento_Text_100, MSGBOX_SIGN   
end

CeladonCitySchoolDocumento_Text_100:
	.string "It's a report of TMs. {PAUSE 20}…{PAUSE 20} There are 50 TMs\n"
	.string "and 7 HM, that can be used over and over\l"
	.string "again. SILPH CO.$"



CeladonCitySchoolDocumento_101::
msgbox CeladonCitySchoolDocumento_Text_101, MSGBOX_SIGN   
end

CeladonCitySchoolDocumento_Text_101:
	.string "Life changes through all those days\n"
	.string "when everything seems to stay the\l"
	.string "same.$"

CeladonCity_Karateka::
lock
faceplayer
msgbox CeladonCity_Karateka_Texto_1 MSGBOX_NPC
release
end

CeladonCity_Karateka_Texto_1:
	.string "I know all about the POKEMON, also. I\n"
	.string "know that your LEADER GIOVANNI uses\l"
	.string "RHYHORN as a POKEMON. RHYHORN as a\l"
	.string "flagship POKÉMON. What a wimp!$"

CeladonCity_Eevee::
lock
faceplayer
playse 	SE_PIN
applymovement 1, CeladonCity_Eevee_Move_1
waitmovement 0x0
delay 10
applymovement 1, CeladonCity_Eevee_Move_2
applymovement OBJ_EVENT_ID_PLAYER, CeladonCity_Eevee_Move_3
waitmovement 0x0
msgbox CeladonCity_Eevee_Texto_1 MSGBOX_NPC
release
end

CeladonCity_Eevee_Move_1:
emote_exclamation_mark
step_end

CeladonCity_Eevee_Move_2:
walk_in_place_up
step_end

CeladonCity_Eevee_Move_3:
face_down
step_end

CeladonCity_Eevee_Texto_1:
	.string "Really, ROCKET!!! Get your grubby hands\n"
	.string "off that POKE BALL, a POKEMON of\l"
	.string "EEVEE's the size of EEVEE is too big for\l"
	.string "you thieves of your ilk.$"
