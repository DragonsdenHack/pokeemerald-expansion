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
	.string "Das Leben verändert sich an all jenen\n"
	.string "Tagen, an denen alles gleich zu bleiben\l"
	.string "scheint.$"

CeladonCity_Karateka::
lock
faceplayer
msgbox CeladonCity_Karateka_Texto_1 MSGBOX_NPC
release
end

CeladonCity_Karateka_Texto_1:
	.string "Ich weiß alles über POKéMON. Unter\n"
	.string "anderem auch, dass dein BOSS GIOVANNI\l"
	.string "ein RIHORN benutzt. Ein RIHORN als sein\l"
	.string "Ass zu verwenden …\p"
	.string "Was für ein Schwächling!$"

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
	.string "Ist das dein Ernst, ROCKET?! Nimm deine\n"
	.string "dreckigen Hände von diesem POKÉBALL\l"
	.string "weg, bevor ich sie dir breche! Für einen\l"
	.string "Gauner wie dich ist EVOLI eine Nummer\l"
	.string "zu groß!$"
