VermilionCity_House1_MapScripts::
	.byte 0

VermilionCityHouse1_1::
end

VermilionCity_House1_Secundaria_Magikarp::
lock
faceplayer
compare VAR_UNUSED_0x409D, 3
goto_if_eq VermilionCity_House1_Secundaria_Magikarp_4
compare VAR_UNUSED_0x409D, 2
goto_if_eq VermilionCity_House1_Secundaria_Magikarp_3
compare VAR_UNUSED_0x409D, 1
goto_if_eq VermilionCity_House1_Secundaria_Magikarp_2
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, VermilionCity_House1_Secundaria_Magikarp_Move_1
waitmovement 0x0
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_3 MSGBOX_AUTOCLOSE
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_9 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq VermilionCity_House1_Secundaria_Magikarp_NO
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, VermilionCity_House1_Secundaria_Magikarp_Move_2
waitmovement 0x0
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, VermilionCity_House1_Secundaria_Magikarp_Move_3
waitmovement 0x0
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x409D, 1
release
end

VermilionCity_House1_Secundaria_Magikarp_NO::
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_13 MSGBOX_AUTOCLOSE
release
end

VermilionCity_House1_Secundaria_Magikarp_2::
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_8 MSGBOX_AUTOCLOSE
release
end

VermilionCity_House1_Secundaria_Magikarp_3::
delay 20
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, VermilionCity_House1_Secundaria_Magikarp_Move_1
waitmovement 0x0
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_5 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_TMHM
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_6 MSGBOX_DEFAULT
givemon SPECIES_MAGIKARP, 5, ITEM_RARE_CANDY
waitfanfare
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_7 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x409D, 3
release
end

VermilionCity_House1_Secundaria_Magikarp_4::
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_4 MSGBOX_AUTOCLOSE
release
end


VermilionCity_House1_Secundaria_Magikarp_Texto_1:
	.string "Darn that TAMER… Because of him,\n"
	.string "everybody makes fun of my OLD ROD. I\l"
	.string "can't let things stay like this, or my\l"
	.string "brothers'll hog all the glory…$"

VermilionCity_House1_Secundaria_Magikarp_Texto_2:
.string "…\n"
	.string "…$"

VermilionCity_House1_Secundaria_Magikarp_Texto_3:
	.string "You're a ROCKET! It shouldn't be a\n"
	.string "challenge for you to give a scoundrel\l"
	.string "what he deserves for ruining my\l"
	.string "reputation! Isn't that right?$"

VermilionCity_House1_Secundaria_Magikarp_Texto_4:
	.string "Take good care of that MAGIKARP, and\n"
	.string "soon, you and it will be the envy of your\l"
	.string "whole organization. They'll respect you!\l"
	.string "You'll haul in some major wins, and who\l"
	.string "knows? Maybe you'll get promoted!$"

VermilionCity_House1_Secundaria_Magikarp_Texto_5:
	.string "For real?! You taught him a lesson? And\n"
	.string "you shook him up enough that he'll\l"
	.string "never talk smack about my OLD ROD?\l"
	.string "You've gotta be a big shot in TEAM\l"
	.string "ROCKET if you could handle his POKÉMON.\l"
	.string "Say, this whopper'll help out a lot.$"

VermilionCity_House1_Secundaria_Magikarp_Texto_6:
.string "YOU RECEIVED A MAGIKARP AT LV:5!!$"

VermilionCity_House1_Secundaria_Magikarp_Texto_7:
	.string "What? Did you expect a better haul?\n"
	.string "Lemme tell you, ROCKET. This is one of\l"
	.string "the best catches in all of KANTO. A real\l"
	.string "DRAGON even LANCE himself fields in his\l"
	.string "own team. On top of that, that\l"
	.string "MAGIKARP's got a RARE CANDY for easy\l"
	.string "training. Not many people have that\l"
	.string "attention to detail, eh? Use it when\l"
	.string "it's LEVEL 19 and enjoy the most radical\l"
	.string "evolution you'll ever get to see!$"

VermilionCity_House1_Secundaria_Magikarp_Texto_8:
.string "Did you find that TAMER?\n"
	.string "Remember-he's in CELADON MANSION!$"

VermilionCity_House1_Secundaria_Magikarp_Texto_9:
.string "Would you be willing to make a small\n"
	.string "reckoning for a poor FISHING GURU like\l"
	.string "me? I'll pay you with something you\l"
	.string "can't find anywhere!$"

VermilionCity_House1_Secundaria_Magikarp_Texto_10:
	.string "All right! Look here, ROCKET. Not even a\n"
	.string "few days ago, a TAMER came by and\l"
	.string "bought an OLD ROD. He wanted to make a\l"
	.string "spectacle of fishing up a KINGLER, but\l"
	.string "when he hauled only MAGIKARP, he\l"
	.string "started trashing me, saying my OLD\l"
	.string "ROD's just a scam.$"

VermilionCity_House1_Secundaria_Magikarp_Texto_11:
	.string "I won't lie. It catches just MAGIKARP.\n"
	.string "But that's the point. It lets you haul\l"
	.string "that common POKÉMON that's got big\l"
	.string "potential. But that TAMER\l"
	.string "misrepresented my OLD ROD's use and\l"
	.string "made people think I'm just a joke\l"
	.string "compared to my brothers.$"

VermilionCity_House1_Secundaria_Magikarp_Texto_12:
	.string "I want you to head over to CELADON\n"
	.string "CITY-that's where he lives. Just teach\l"
	.string "him a lesson from VERMILION CITY's\l"
	.string "FISHING GURU. That ought'a make him cut\l"
	.string "the trash talk about my OLD ROD. Just\l"
	.string "be clear that TEAM ROCKET doesn't give\l"
	.string "second warnings-maybe threaten to make\l"
	.string "him go under or something. When you\l"
	.string "finish up, come on back, and I'll give\l"
	.string "you a fantastic POKÉMON.$"

VermilionCity_House1_Secundaria_Magikarp_Texto_13:
	.string "No? I thought that ROCKETs loved this\n"
	.string "sort of work.$"

VermilionCity_House1_Secundaria_Magikarp_Move_1:
emote_exclamation_mark
step_end

VermilionCity_House1_Secundaria_Magikarp_Move_2:
walk_in_place_right
step_end

VermilionCity_House1_Secundaria_Magikarp_Move_3:
face_player
step_end
