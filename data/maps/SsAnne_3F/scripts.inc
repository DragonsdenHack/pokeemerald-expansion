SsAnne_3F_MapScripts::
	.byte 0

SsAnne3F_1::
end



SsAnne3F_2::
lock     
faceplayer     
msgbox SsAnne3F_Text_2, MSGBOX_DEFAULT
release     
end

SsAnne3F_Text_2:
	.string "Komm schon! Entspann dich, Mann! Wir\n"
	.string "sind hier, um Spaß zu haben! Ich meine,\l"
	.string "es ist ja nicht so, als wärst du hier in\l"
	.string "streng geheimer Mission unterwegs,\l"
	.string "oder?$"



SsAnne3F_3::
lock          
msgbox SsAnne3F_Text_3, MSGBOX_SIGN
release     
end

SsAnne3F_Text_3:
.string "Ja!\p"
.string "Zeig diesem Milchbart aus\n"
	.string "KANTO, wie wir hier kämpfen!$"



SsAnne3F_4::
lock          
msgbox SsAnne3F_Text_4, MSGBOX_SIGN
release     
end

SsAnne3F_Text_4:
.string "Na los, QUAPUTZI!\p"
	.string "Hiss die Flagge unseres Kreuzers!$"



SsAnne3F_5::
lock          
msgbox SsAnne3F_Text_5, MSGBOX_SIGN
playmoncry SPECIES_POLIWHIRL, CRY_MODE_ENCOUNTER
msgbox SsAnne3F_Text_5_2, MSGBOX_SIGN
release     
end

SsAnne3F_Text_5:
.string "QUAPUTZI!\n"
	.string "Setz BLUBBSTRAHL ein!$"

SsAnne3F_Text_5_2:
.string "Whirl!$"



SsAnne3F_7::
lock          
msgbox SsAnne3F_Text_7, MSGBOX_SIGN
release     
end

SsAnne3F_Text_7:
	.string "Amateure! Mit meinem PINSIR wäre\n"
	.string "dieser Kampf im Handumdrehen vorbei!$"

SsAnne3F_Andra::
lock
faceplayer
applymovement OBJ_EVENT_ID_PLAYER, SsAnne3F_Andra_move_1
applymovement 1, SsAnne3F_Andra_move_2
waitmovement 0x0
msgbox SsAnne3F_Andra_Text_1, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SsAnne3F_Andra_move_3
applymovement 1, SsAnne3F_Andra_move_4
waitmovement 0x0
release
end

SsAnne3F_Andra_Text_1:
	.string "ANDRA: Scheint so, als wäre das hier die\n"
	.string "Kammer des KAPITÄNs. LAMBDA hat uns\l"
	.string "befohlen, auf sein Signal zu warten,\l"
	.string "bevor wir reingehen. Kann nicht\l"
	.string "schaden, sich hier ein wenig umzusehen\l"
	.string "und etwas zu trainieren.$"

SsAnne3F_Andra_move_1:
walk_in_place_up
step_end

SsAnne3F_Andra_move_2:
face_down
step_end

SsAnne3F_Andra_move_3:
walk_down
step_end

SsAnne3F_Andra_move_4:
face_up
step_end

SsAnne3F_Andra_lista::
lock
faceplayer
msgbox SsAnne3F_Andra_lista_Text_1, MSGBOX_AUTOCLOSE
applymovement 1, SsAnne3F_Andra_lista_move1
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT
removeobject 1
release
end

SsAnne3F_Andra_lista_Text_1:
	.string "{PLAYER}! Wir können loslegen!\p"
	.string "Lass uns diesem KAPITÄN zeigen, wie\n"
	.string "TEAM ROCKET die Dinge in KANTO regelt!$"

SsAnne3F_Andra_lista_move1:
walk_up
walk_up
face_right
step_end
