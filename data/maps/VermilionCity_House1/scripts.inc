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
.string "Damn it TAMER{PAUSE 15}…{PAUSE 15} By his fault everybody\n"
	.string "makes fun of my OLD ROD. I can't let it\l"
	.string "stay like this, my brothers will take all\l"
	.string "the protagonism…$"

VermilionCity_House1_Secundaria_Magikarp_Texto_2:
.string "…\n"
	.string "…$"

VermilionCity_House1_Secundaria_Magikarp_Texto_3:
.string "You're a ROCKET! Won't be hard for you\n"
	.string "giving what a scoundrel deserves who\l"
	.string "is destroying my reputation! Right?$"

VermilionCity_House1_Secundaria_Magikarp_Texto_4:
.string "If you take care of MAGIKARP, soon you\n"
	.string "will have a POKÉMON that everyone in\l"
	.string "your organization will envy and they\l"
	.string "will respect you, it will give you\l"
	.string "hierarchy into battles, maybe and you\l"
	.string "will get ascended!$"

VermilionCity_House1_Secundaria_Magikarp_Texto_5:
.string "For real you teached him a lesson? And\n"
	.string "was so scared of your menaces that will\l"
	.string "never talk back again about my OLD\l"
	.string "ROD? You should be a very important\l"
	.string "person inside TEAM ROCKET if you were\l"
	.string "able to defeat those POKÉMON, for sure\l"
	.string "this POKÉMON will help you a lot.$"

VermilionCity_House1_Secundaria_Magikarp_Texto_6:
.string "YOU RECEIVED A MAGIKARP AT LV:5!!$"

VermilionCity_House1_Secundaria_Magikarp_Texto_7:
.string "What? Did you expect something better?\n"
	.string "Let me tell you ROCKET, this POKÉMON is\l"
	.string "one of the best KANTO POKÉMONS, a real\l"
	.string "DRAGON type that LANCE himself has in\l"
	.string "his own team. Not even enough, I gave\l"
	.string "you a RARE CANDY equipped in the\l"
	.string "MAGIKARP for easier training, not many\l"
	.string "people have that detail, eh? Use it on\l"
	.string "LEVEL 19 and enjoy the most radical\l"
	.string "evolution that you could see!$"

VermilionCity_House1_Secundaria_Magikarp_Texto_8:
.string "Did you find that TAMER?\n"
	.string "Remember! He lives in CELADON MANSION!$"

VermilionCity_House1_Secundaria_Magikarp_Texto_9:
.string "Would you be willing to make a small\n"
	.string "reckoning for a poor FISHING GURU like\l"
	.string "me? I'll pay you with something you\l"
	.string "can't find anywhere!$"

VermilionCity_House1_Secundaria_Magikarp_Texto_10:
.string "Alright! Look ROCKET, not a few ago a\n"
	.string "TAMER came here and bought me an OLD\l"
	.string "ROD, he wanted to fish a KINGLER for\l"
	.string "his spectacle, but when he saw it just\l"
	.string "catches MAGIKARP, he began to defame\l"
	.string "me saying my OLD ROD doesn't work and it\l"
	.string "was a scam.$"

VermilionCity_House1_Secundaria_Magikarp_Texto_11:
.string "I won't lie about it just works to catch\n"
	.string "MAGIKARP, but that's exactly its\l"
	.string "function, that rod allows you to fish\l"
	.string "that common POKÉMON with that high\l"
	.string "potential, that TAMER misrepresented\l"
	.string "my OLD ROD use and made people think\l"
	.string "that I am a joke compared to my\l"
	.string "brothers.$"

VermilionCity_House1_Secundaria_Magikarp_Texto_12:
.string "I want you to go CELADON CITY, where he\n"
	.string "lives and you teach him a lesson from\l"
	.string "VERMILION CITY's FISHING GURU, that\l"
	.string "should be good enough to he stop\l"
	.string "saying trash about my OLD ROD, be clear\l"
	.string "about that TEAM ROCKET doesn't warn\l"
	.string "twice, the next time you will ruin his\l"
	.string "business or something like that. When\l"
	.string "you finish the task, come back here and\l"
	.string "I will give you a fantastic POKÉMON.$"

VermilionCity_House1_Secundaria_Magikarp_Texto_13:
.string "No?\n"
.string "I thought that ROCKETS loved this kind\l"
	.string "of jobs.$"

VermilionCity_House1_Secundaria_Magikarp_Move_1:
emote_exclamation_mark
step_end

VermilionCity_House1_Secundaria_Magikarp_Move_2:
walk_in_place_right
step_end

VermilionCity_House1_Secundaria_Magikarp_Move_3:
face_player
step_end
