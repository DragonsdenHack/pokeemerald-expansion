Route29_MapScripts::
	.byte 0

Route29_1::
end



Route29_2::
end



Route29_3::
lock     
faceplayer     
msgbox Route29_Text_3, MSGBOX_DEFAULT
release     
end

Route29_Text_3:
	.string "There aren't many PIKACHU around here.\n"
	.string "I'll be the envy of everyone when I take\l"
	.string "it to GOLDENROD CITY!$"



Route29_4::
end



Route29_5::
end



Route29_6::
end



Route29_7::
end



Route29_8::
end



Route29_9::
lock     
faceplayer     
msgbox Route29_Text_9, MSGBOX_DEFAULT
release     
end

Route29_Text_9:
	.string "This area is under supervision of\n"
	.string "PROF.ELM and his assistants; they are\l"
	.string "doing tests here, no one can enter\l"
	.string "without their consent. Anyway, there is\l"
	.string "nothing to see here, kid. Further east\l"
	.string "is the border with KANTO, and no one can\l"
	.string "pass beyond there without consent, at\l"
	.string "least until the relationship between\l"
	.string "KANTO and JOHTO improves.$"



Route29_10::
lock     
faceplayer     
msgbox Route29_Text_10, MSGBOX_DEFAULT
release     
end

Route29_Text_10:
	.string "This route, along with the one north of\n"
	.string "CHERRYGROVE CITY, is famous for its\l"
	.string "unique POKÉMON that can only be found\l"
	.string "in JOHTO. That's why I came here!$"



Route29_11::
end



Route29_12::
end



Route29_13::
lock     
faceplayer     
msgbox Route29_Text_13, MSGBOX_DEFAULT
release     
end

Route29_Text_13:
.string "Ah!\n"
.string "It feels so good to go for a\l"
.string "walk with all this vegetation!\l"
.string "I feel young again!$"



Route29_14::
lock     
faceplayer     
msgbox Route29_Text_14, MSGBOX_DEFAULT
release     
end

Route29_Text_14:
	.string "The PROF.ELM is a renowned figure in the\n"
	.string "world of POKÉMON investigation. He's\l"
	.string "setting up his research laboratory to\l"
	.string "the east of here.$"



Route29_15::
lock     
faceplayer     
msgbox Route29_Text_15, MSGBOX_DEFAULT
release     
end

Route29_Text_15:
	.string "This area is under supervision of\n"
	.string "PROF.ELM and his assistants; they are\l"
	.string "doing tests here, no one can enter\l"
	.string "without their consent. Anyway, there is\l"
	.string "nothing to see here, kid. Further east\l"
	.string "is the border with KANTO, and no one can\l"
	.string "pass beyond there without consent, at\l"
	.string "least until the relationship between\l"
	.string "KANTO and JOHTO improves.$"



Route29_16::
lock     
faceplayer     
msgbox Route29_Text_16, MSGBOX_DEFAULT
release     
end

Route29_Text_16:
	.string "I'd love to visit the ROUTE 26. People\n"
	.string "say it's one of the most beautiful in the\l"
	.string "region. Let's hope they reopen it soon\l"
	.string "for the entire population…$"



Route29_EventScript_Chico::
	trainerbattle_single TRAINER_BRICE, Route29_Text_ChicoIntro, Route29_Text_ChicoDefeated
	msgbox Route29_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end


Route29_EventScript_Sabio::
	trainerbattle_single TRAINER_JAMES_5, Route29_Text_SabioIntro, Route29_Text_SabioDefeated
	msgbox Route29_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end



Route29Documento_100::
msgbox Route29Documento_Text_100, MSGBOX_SIGN   
end

Route29Documento_Text_100:
	.string "ROUTE 29\n"
	.string "West of CHERRYGROVE CITY$"



Route29Documento_101::
msgbox Route29Documento_Text_101, MSGBOX_SIGN   
end

Route29Documento_Text_101:
	.string "Warning!\n"
	.string "Border with KANTO upon entering\l"
	.string "ROUTE 26, further to the east!$"

Primavera_Barrera_Sur::
compare VAR_UNUSED_0x40F7, 153
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, Primavera_Barrera_Sur_Move_1
waitmovement 0x0
msgbox Primavera_Barrera_Sur_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Primavera_Barrera_Sur_Move_2
waitmovement 0x0
release
end

Primavera_Barrera_Sur_Texto_1:
.string "(I still have to see the last floors\n"
	.string "of the JOHTO ROCKET BASE)$"

Primavera_Barrera_Sur_Move_1:
walk_in_place_right
step_end

Primavera_Barrera_Sur_Move_2:
walk_slow_left
step_end
