LavenderRadioP8_MapScripts::
	.byte 0

LavenderRadioP8_EventScript_Policia::
	trainerbattle_single TRAINER_TRAINER_183, LavenderRadioP8_Text_PoliciaIntro, LavenderRadioP8_Text_PoliciaDefeated
	msgbox LavenderRadioP8_Text_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end

LavenderRadioP8_Primer_Cientifico::
lock
faceplayer
msgbox LavenderRadioP8_Primer_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP8_Primer_Cientifico_Texto_1:
	.string "The 8th floor will be higher than the old\n"
	.string "tower's. Right now, we're seeing LAVENDER\l"
	.string "from where none of its inhabitants have\l"
	.string "seen it.$"

LavenderRadioP8_Segundo_Cientifico::
lock
faceplayer
msgbox LavenderRadioP8_Segundo_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP8_Segundo_Cientifico_Texto_1:
	.string "If you don't know the reasons for your\n"
	.string "success, it's just a matter of time that\l"
	.string "mathematics and statistics undo what\l"
	.string "was done as a result of coincidence.$"

LavenderRadioP8Documento_100::
msgbox LavenderRadioP8Documento_Text_100, MSGBOX_SIGN   
end

LavenderRadioP8Documento_Text_100:
.string "8th Base Stats$"

LavenderRadioP8Documento_101::
msgbox LavenderRadioP8Documento_Text_101, MSGBOX_SIGN   
end

LavenderRadioP8Documento_Text_101:
	.string "-Possibility generates more and more\n"
	.string "possibility-.$"

LavenderRadioP8_Tercer_Cientifico::
lock
faceplayer
msgbox LavenderRadioP8_Tercer_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP8_Tercer_Cientifico_Texto_1:
	.string "Here on this floor we manage serious\n"
	.string "stuff, I've worked on them by myself.\l"
	.string "However, it is not happiness nor\l"
	.string "satisfaction what I felt as I saw the\l"
	.string "results. It was fear… fear of what that\l"
	.string "may mean.$"

LavenderRadioP8_Cuarto_Cientifico::
lock
faceplayer
msgbox LavenderRadioP8_Cuarto_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP8_Cuarto_Cientifico_Texto_1:
	.string "Outside these facilities, they still\n"
	.string "mainly use KANTO POKÉMON, and now a few\l"
	.string "more from JOHTO as well. But here, it's\l"
	.string "common to see people with POKÉMON from\l"
	.string "exotic regions; the internal market\l"
	.string "we've created is incredible.$"

LavenderRadioP8_Encuentro_Devon::
lock
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP8_Encuentro_Devon_Move_1
waitmovement 0x0
msgbox LavenderRadioP8_Encuentro_Devon_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, LavenderRadioP8_Encuentro_Devon_Move_2
waitmovement 0x0
delay 15
msgbox LavenderRadioP8_Encuentro_Devon_Texto_2 MSGBOX_AUTOCLOSE
applymovement 6, LavenderRadioP8_Encuentro_Devon_Move_3
waitmovement 0x0
msgbox LavenderRadioP8_Encuentro_Devon_Texto_3 MSGBOX_AUTOCLOSE
applymovement 6, LavenderRadioP8_Encuentro_Devon_Move_4
waitmovement 0x0
msgbox LavenderRadioP8_Encuentro_Devon_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderRadioP8_Encuentro_Devon_Texto_5 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, LavenderRadioP8_Encuentro_Devon_Move_2
waitmovement 0x0
msgbox LavenderRadioP8_Encuentro_Devon_Texto_6 MSGBOX_AUTOCLOSE
setflag FLAG_NUEVA_838
fadescreen 1
delay 20
removeobject 6
fadescreen 0
setvar VAR_MAUVILLE_CITY_STATE, 9
release
end

LavenderRadioP8_Encuentro_Devon_Move_4:
face_down
step_end

LavenderRadioP8_Encuentro_Devon_Move_3:
walk_in_place_right
step_end

LavenderRadioP8_Encuentro_Devon_Move_2:
face_right
step_end

LavenderRadioP8_Encuentro_Devon_Move_1:
delay_8
face_left
delay_8
step_end

LavenderRadioP8_Encuentro_Devon_Texto_1:
	.string "????: Curious technology, everything\n"
	.string "points to it being one of the main\l"
	.string "drivers of change in the coming years.$"

LavenderRadioP8_Encuentro_Devon_Texto_2:
.string "A shame, isn't it?$"

LavenderRadioP8_Encuentro_Devon_Texto_3:
	.string "Back in the day, trainers would develop\n"
	.string "talent, ability and a bond with their\l"
	.string "POKÉMON so they could achieve victory.\l"
	.string "Old champions were what they were\l"
	.string "because pursuing this virtudes until\l"
	.string "the extreme.$"

LavenderRadioP8_Encuentro_Devon_Texto_4:
	.string "Now, we have many variables to modify\n"
	.string "POKÉMON's performance, and turn them\l"
	.string "into something that time ago would have\l"
	.string "been impossible.$"

LavenderRadioP8_Encuentro_Devon_Texto_5:
	.string "Even the toughest of the old-school\n"
	.string "champions would bow to the standard\l"
	.string "trainer of these days, just if the sheer\l"
	.string "force of their POKÉMON were enough.$"

LavenderRadioP8_Encuentro_Devon_Texto_6:
	.string "Nowadays, those who doesn't add this\n"
	.string "new variable to their team's equation\l"
	.string "are doomed, no matter how hard they try\l"
	.string "to perfect the classic virtudes.$"
