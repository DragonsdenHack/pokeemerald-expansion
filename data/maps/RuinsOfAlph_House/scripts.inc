RuinsOfAlph_House_MapScripts::
	.byte 0

RuinsOfAlphHouse1::
lock     
faceplayer     
msgbox RuinsOfAlph_House1_Text_1, MSGBOX_DEFAULT
release     
end

RuinsOfAlph_House1_Text_1:
	.string "In my opinion, those NATU and XATU\n"
	.string "inhabiting the RUINS are crucial to\l"
	.string "solving its mystery.$"



RuinsOfAlphHouse2::
lock     
faceplayer     
msgbox RuinsOfAlph_House1_Text_2, MSGBOX_DEFAULT
release     
end

RuinsOfAlph_House1_Text_2:
	.string "I really distrust those individuals in\n"
	.string "black who arrived shortly after the\l"
	.string "earthquake. … … What? You are their\l"
	.string "boss?!$"



RuinsOfAlphHouse3::
lock     
faceplayer     
msgbox RuinsOfAlph_House1_Text_3, MSGBOX_DEFAULT
release     
end

RuinsOfAlph_House1_Text_3:
	.string "The ruins are approximately 1500 years\n"
	.string "old. Yet, we have no clue as to why or by\l"
	.string "whom they were constructed.$"

RuinsOfAlph_House_Mision_Secundaria::
lock
faceplayer
compare VAR_ROUTE102_STATE, 3
goto_if_gt RuinsOfAlph_House_Mision_Secundaria_4
compare VAR_ROUTE102_STATE, 2
goto_if_gt RuinsOfAlph_House_Mision_Secundaria_3
compare VAR_ROUTE102_STATE, 0
goto_if_gt RuinsOfAlph_House_Mision_Secundaria_2
msgbox RuinsOfAlph_House_Mision_Secundaria_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox RuinsOfAlph_House_Mision_Secundaria_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 4, RuinsOfAlph_House_Mision_Secundaria_Move_1
waitmovement 0x0
msgbox RuinsOfAlph_House_Mision_Secundaria_Texto_3 MSGBOX_AUTOCLOSE
applymovement 4, RuinsOfAlph_House_Mision_Secundaria_Move_2
waitmovement 0x0
msgbox RuinsOfAlph_House_Mision_Secundaria_Texto_4 MSGBOX_AUTOCLOSE
applymovement 4, RuinsOfAlph_House_Mision_Secundaria_Move_3
waitmovement 0x0
msgbox RuinsOfAlph_House_Mision_Secundaria_Texto_5 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
setvar VAR_ROUTE102_STATE, 1
release
end

RuinsOfAlph_House_Mision_Secundaria_2::
msgbox RuinsOfAlph_House_Mision_Secundaria_Texto_6 MSGBOX_AUTOCLOSE
release
end

RuinsOfAlph_House_Mision_Secundaria_3::
delay 20
msgbox RuinsOfAlph_House_Mision_Secundaria_Texto_7 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 4, RuinsOfAlph_House_Mision_Secundaria_Move_1
waitmovement 0x0
msgbox RuinsOfAlph_House_Mision_Secundaria_Texto_8 MSGBOX_AUTOCLOSE
applymovement 4, RuinsOfAlph_House_Mision_Secundaria_Move_1
waitmovement 0x0
applymovement 4, RuinsOfAlph_House_Mision_Secundaria_Move_3
waitmovement 0x0
msgbox RuinsOfAlph_House_Mision_Secundaria_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox RuinsOfAlph_House_Mision_Secundaria_Texto_10 MSGBOX_DEFAULT
givemon SPECIES_ARCHEN, 35, ITEM_FLYING_GEM
waitfanfare
setvar VAR_ROUTE102_STATE, 4
release
end

RuinsOfAlph_House_Mision_Secundaria_4::
msgbox RuinsOfAlph_House_Mision_Secundaria_Texto_11 MSGBOX_AUTOCLOSE
release
end

RuinsOfAlph_House_Mision_Secundaria_Move_1:
emote_exclamation_mark
step_end

RuinsOfAlph_House_Mision_Secundaria_Move_2:
face_up
step_end

RuinsOfAlph_House_Mision_Secundaria_Move_3:
face_player
step_end

RuinsOfAlph_House_Mision_Secundaria_Texto_1:
	.string "Those SCIENTISTS{PAUSE 15}…{PAUSE 15} they came from a\n"
	.string "different region, promising to only\l"
	.string "research our FOSSILS, but they've\l"
	.string "disappeared without a trace…$"


RuinsOfAlph_House_Mision_Secundaria_Texto_2:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

RuinsOfAlph_House_Mision_Secundaria_Texto_3:
.string "Do you wanna help me?$"

RuinsOfAlph_House_Mision_Secundaria_Texto_4:
	.string "You seem like someone prepared. If you\n"
	.string "want to try it at your own risk, I won't\l"
	.string "object.$"

RuinsOfAlph_House_Mision_Secundaria_Texto_5:
	.string "We know they have a small LABORATORY in\n"
	.string "some city in JOHTO, I think they meant\l"
	.string "ECRUTEAK CITY. That's where they must\l"
	.string "have our FOSSILS. If you bring them\l"
	.string "back, I'll reward you properly.$"

RuinsOfAlph_House_Mision_Secundaria_Texto_6:
	.string "Any new? Remember, they should have\n"
	.string "their LABORATORY in ECRUTEAK CITY.$"

RuinsOfAlph_House_Mision_Secundaria_Texto_7:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

RuinsOfAlph_House_Mision_Secundaria_Texto_8:
	.string "Wow! You took them down all by yourself!\n"
	.string "You must be someone of great power, no\l"
	.string "doubt.$"

RuinsOfAlph_House_Mision_Secundaria_Texto_9:
	.string "You deserve to be properly rewarded for\n"
	.string "your efforts. Look, we discovered this\l"
	.string "specimen of FOSSIL, it comes from a\l"
	.string "distant region. Our studies indicate\l"
	.string "that it is a distant relative of\l"
	.string "AERODACTYL, possibly with greater\l"
	.string "potential. Take it, it's yours.$"

RuinsOfAlph_House_Mision_Secundaria_Texto_10:
.string "YOU OBTAINED A LV.35 ARCHEN!!$"

RuinsOfAlph_House_Mision_Secundaria_Texto_11:
	.string "If you need something someday, do not\n"
	.string "hesitate to contact us. Here you have\l"
	.string "allies.$"
