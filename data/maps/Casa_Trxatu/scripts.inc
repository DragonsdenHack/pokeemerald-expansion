Casa_Trxatu_MapScripts::
	.byte 0


CasaTrxatuDocumento_100::
lock     
showmonpic SPECIES_TRXATU, 10, 3  
playmoncry SPECIES_XATU, CRY_MODE_ENCOUNTER 
msgbox CasaTrxatuDocumento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

CasaTrxatuDocumento_Text_100:
	.string "TRXATU:\p"
	.string "HP: 75\n"
	.string "ATTACK: 75\l"
	.string "DEFENSE: 75\l"
	.string "SPECIAL ATTACK: 115\l"
	.string "SPECIAL DEFENSE: 115\l"
	.string "SPEED: 115\l"
	.string "TOTAL: 570$"



CasaTrxatu_Combate::
lock
compare VAR_LILYCOVE_CITY_STATE, 1
goto_if_gt CasaTrxatu_Combate_2
delay 15
msgbox CasaTrxatu_Combate_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox CasaTrxatu_Combate_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, CasaTrxatu_Combate_Move_1
waitmovement 0x0
msgbox CasaTrxatu_Combate_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox CasaTrxatu_Combate_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 1, CasaTrxatu_Combate_Move_2
waitmovement 0x0
msgbox CasaTrxatu_Combate_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, CasaTrxatu_Combate_Move_3
waitmovement 0x0
msgbox CasaTrxatu_Combate_Texto_5 MSGBOX_AUTOCLOSE
msgbox CasaTrxatu_Combate_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, CasaTrxatu_Combate_Move_1
waitmovement 0x0
msgbox CasaTrxatu_Combate_Texto_7 MSGBOX_AUTOCLOSE
msgbox CasaTrxatu_Combate_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, CasaTrxatu_Combate_Move_3
waitmovement 0x0
msgbox CasaTrxatu_Combate_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, CasaTrxatu_Combate_Move_1
waitmovement 0x0
msgbox CasaTrxatu_Combate_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox CasaTrxatu_Combate_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox CasaTrxatu_Combate_Texto_11 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CULTISTA, CasaTrxatu_Combate_Texto_12
msgbox CasaTrxatu_Combate_Texto_13 MSGBOX_AUTOCLOSE
delay 20
msgbox CasaTrxatu_Combate_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, CasaTrxatu_Combate_Move_4
waitmovement 0x0
msgbox CasaTrxatu_Combate_Texto_15 MSGBOX_AUTOCLOSE
msgbox CasaTrxatu_Combate_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, CasaTrxatu_Combate_Move_4
waitmovement 0x0
msgbox CasaTrxatu_Combate_Texto_17 MSGBOX_AUTOCLOSE
setvar VAR_LILYCOVE_CITY_STATE, 2
release
end

CasaTrxatu_Combate_2::
lock
faceplayer
msgbox CasaTrxatu_Combate_Texto_18 MSGBOX_AUTOCLOSE
release
end

CasaTrxatu_Combate_Move_1:
face_player
step_end

CasaTrxatu_Combate_Move_2:
emote_exclamation_mark
step_end

CasaTrxatu_Combate_Move_3:
face_up
step_end

CasaTrxatu_Combate_Move_4:
walk_in_place_down
step_end

CasaTrxatu_Combate_Texto_1:
.string "... ...$"

CasaTrxatu_Combate_Texto_2:
	.string "Wow, it seems like no matter how hidden\n"
	.string "a place is, there's always some explorer\l"
	.string "who'll stumble upon it.$"

CasaTrxatu_Combate_Texto_3:
	.string "I hope whatever you gotta say is worth\n"
	.string "breaking my silence.$"

CasaTrxatu_Combate_Texto_4:
	.string "Were you present at the POKÉMON\n"
	.string "ESSENCE cult? Are you the one who put\l"
	.string "an end to LANCE's tyranny?$"

CasaTrxatu_Combate_Texto_5:
	.string "I was part of that cult; however, I had\n"
	.string "certain disagreements with its leader.$"

CasaTrxatu_Combate_Texto_6:
	.string "Let's say I managed to escape before\n"
	.string "he used the 'voluntary sacrifice' as an\l"
	.string "excuse to get rid of me. You could\l"
	.string "consider me a survivor, living in exile\l"
	.string "both by choice and by necessity, as no\l"
	.string "one can know where I hide; otherwise, he\l"
	.string "would find me. You must be the second\l"
	.string "person to enter and leave that place.$"

CasaTrxatu_Combate_Texto_7:
	.string "Nevertheless, I do not feel unhappy at\n"
	.string "all; freedom is what I sought when I\l"
	.string "entered the cult, and I did not find it.\l"
	.string "Here, I am completely free to do as I\l"
	.string "please; I only compete against myself.\l"
	.string "For better or worse, I am ultimately\l"
	.string "responsible for what happens to me in\l"
	.string "this place. I have everything I want\l"
	.string "here to fully develop myself: a splendid\l"
	.string "backdrop of scenery, millennia-old\l"
	.string "ruins that many explorers will spend a\l"
	.string "lifetime without finding. What more\l"
	.string "could I ask for?$"

CasaTrxatu_Combate_Texto_8:
	.string "You must be someone worth knowing; you\n"
	.string "defeated LANCE, discovered KANTO's\l"
	.string "most sacred cult, and emerged\l"
	.string "victorious.$"

CasaTrxatu_Combate_Texto_9:
	.string "My belief is that making comparisons is\n"
	.string "unpleasant, and we should focus on\l"
	.string "competing against ourselves. The\l"
	.string "reasoning behind this is that the only\l"
	.string "individual with precisely the same\l"
	.string "circumstances as you is yourself.\l"
	.string "Therefore, triumphing over yourself\l"
	.string "signifies a victory of your\l"
	.string "determination, as all other variables\l"
	.string "are on equal footing.$"

CasaTrxatu_Combate_Texto_10:
	.string "Nonetheless, I've spent a considerable\n"
	.string "amount of time training by myself and\l"
	.string "have attained a level of skill that\l"
	.string "surpassed my expectations. Yet, I still\l"
	.string "yearn for the exhilaration that comes\l"
	.string "from engaging in combat with another\l"
	.string "person.$"

CasaTrxatu_Combate_Texto_11:
	.string "Show me what you're capable of!$"

CasaTrxatu_Combate_Texto_12:
	.string "You're approaching excellence; that's\n"
	.string "splendid.$"

CasaTrxatu_Combate_Texto_13:
	.string "Oh, man... I totally thought that with\n"
	.string "that singular POKÉMON I found in the\l"
	.string "ruins right there, I'd have a shot\l"
	.string "against you. Guess it takes more than\l"
	.string "that to beat the POKÉMON you've\l"
	.string "trained so hard.$"

CasaTrxatu_Combate_Texto_14:
	.string "Guess what? I found two TRXATU\n"
	.string "specimens in those ruins. The second\l"
	.string "one is right behind you, chilling in the\l"
	.string "POKÉ BALL.$"

CasaTrxatu_Combate_Texto_15:
	.string "I've gathered information about the\n"
	.string "evolution line of XATU and its\l"
	.string "significance in ancient tribes from\l"
	.string "this area and the RUINS OF ALPH in\l"
	.string "JOHTO. It seems these tribes\l"
	.string "worshipped a deity, which was actually\l"
	.string "the final form of XATU.$"

CasaTrxatu_Combate_Texto_16:
	.string "I don't know how a common XATU can\n"
	.string "evolve into TRXATU, as it can't happen\l"
	.string "through leveling up. Most likely, the\l"
	.string "interior of those ruins played a role in\l"
	.string "the existence of these POKÉMON.$"

CasaTrxatu_Combate_Texto_17:
	.string "So, what I'm saying is, you can take the\n"
	.string "second specimen right behind you. I\l"
	.string "don't know if I'll ever make it back to\l"
	.string "civilization, or if I'll even make it back\l"
	.string "at all. And now, you've shown up in this\l"
	.string "super remote spot. There is no better\l"
	.string "TRAINER for a POKÉMON like that to have\l"
	.string "epic adventures and reach its full\l"
	.string "potential.$"

CasaTrxatu_Combate_Texto_18:
	.string "I delved into the details of TRXATU's\n"
	.string "characteristics. If you're interested,\l"
	.string "you can take a look at its data on my\l"
	.string "PC.$"


CasaTrxatu_Ball_Trxatu::
compare VAR_LILYCOVE_CITY_STATE, 1
goto_if_gt CasaTrxatu_Ball_Trxatu_2
msgbox CasaTrxatu_Ball_Trxatu_Texto_1 MSGBOX_AUTOCLOSE
release
end

CasaTrxatu_Ball_Trxatu_2::
playfanfare MUS_OBTAIN_TMHM
msgbox CasaTrxatu_Ball_Trxatu_Texto_2 MSGBOX_DEFAULT
givemon SPECIES_TRXATU, 50, ITEM_NONE
waitfanfare
delay 20
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
removeobject 2
release
end

CasaTrxatu_Ball_Trxatu_Texto_1:
	.string "(It is not appropriate to steal someone\n"
	.string "else's POKÉMON; we, as TEAM ROCKET\l"
	.string "members, uphold principles.)$"

CasaTrxatu_Ball_Trxatu_Texto_2:
	.string "YOU OBTAINED A TRXATU!!$"

