MooFarm_MapScripts::
	.byte 0

MooFarm1::
end



MooFarm2::
end



MooFarm3::
end



MooFarm4::
end



MooFarm5::
lock     
faceplayer     
msgbox MooFarm_Text_5, MSGBOX_DEFAULT
release     
end

MooFarm_Text_5:
	.string "Our TAUROS are famous for being the\n"
	.string "fiercest in JOHTO; they need it to\l"
	.string "match up to the MILTANK we breed here!$"



MooFarm6::
end



MooFarm7::
lock     
faceplayer     
msgbox MooFarm_Text_7, MSGBOX_DEFAULT
release     
end

MooFarm_Text_7:
	.string "From here comes most of the MOOMOO\n"
	.string "MILK sold in JOHTO and KANTO. You\l"
	.string "should know it's the best HP restorer in\l"
	.string "terms of value, but if you buy directly\l"
	.string "from us, you can get MOOMOO MILK even\l"
	.string "cheaper!$"



MooFarm8::
end


MooFarm_Combate_Scizorita::
lock
faceplayer
checkitem ITEM_SCIZORITE
goto_if_eq VAR_RESULT, FALSE, MooFarm_Combate_Scizorita_2
msgbox MooFarm_Combate_Scizorita_Texto_3 MSGBOX_AUTOCLOSE
release
end

MooFarm_Combate_Scizorita_2::
msgbox MooFarm_Combate_Scizorita_Texto_1 MSGBOX_AUTOCLOSE
applymovement 8, MooFarm_Combate_Scizorita_Move_1
waitmovement 0x0
msgbox MooFarm_Combate_Scizorita_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq MooFarm_Combate_Scizorita_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox MooFarm_Combate_Scizorita_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_GRANJERO_1, MooFarm_Combate_Scizorita_Texto_5
applymovement 2, MooFarm_Combate_Scizorita_Move_2
waitmovement 0x0
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox MooFarm_Combate_Scizorita_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_GRANJERO_2, MooFarm_Combate_Scizorita_Texto_7
playse SE_PIN
applymovement 8, MooFarm_Combate_Scizorita_Move_3
waitmovement 0x0
msgbox MooFarm_Combate_Scizorita_Texto_8 MSGBOX_AUTOCLOSE
applymovement 2, MooFarm_Combate_Scizorita_Move_4
waitmovement 0x0
msgbox MooFarm_Combate_Scizorita_Texto_9 MSGBOX_AUTOCLOSE
applymovement 8, MooFarm_Combate_Scizorita_Move_1
waitmovement 0x0
msgbox MooFarm_Combate_Scizorita_Texto_10 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_SCIZORITE
msgbox MooFarm_Combate_Scizorita_Texto_10.1 MSGBOX_DEFAULT
waitfanfare
msgbox MooFarm_Combate_Scizorita_Texto_11 MSGBOX_AUTOCLOSE
release
end

MooFarm_Combate_Scizorita_No::
msgbox MooFarm_Combate_Scizorita_Texto_12 MSGBOX_AUTOCLOSE
release
end

MooFarm_Combate_Scizorita_Texto_10.1:
.string "You obtained a SCIZORITE\n"
	.string "from the FARMERS!!$"

MooFarm_Combate_Scizorita_Move_1:
walk_in_place_right
face_player
step_end

MooFarm_Combate_Scizorita_Move_2:
face_player
step_end

MooFarm_Combate_Scizorita_Move_3:
emote_exclamation_mark
step_end

MooFarm_Combate_Scizorita_Move_4:
walk_in_place_left
face_player
step_end

MooFarm_Combate_Scizorita_Texto_1:
	.string "Here, we take care of TAUROS and\n"
	.string "MILTANK that get sick. We have about a\l"
	.string "dozen that are almost completely\l"
	.string "recovered. All they need is to test\l"
	.string "their health in a battle!$"

MooFarm_Combate_Scizorita_Texto_2:
	.string "Would you do us the favor of getting\n"
	.string "our POKÉMON back in shape?$"

MooFarm_Combate_Scizorita_Texto_3:
	.string "Remember that you can buy MOOMOO MILK\n"
	.string "at a discounted price at the booth next\l"
	.string "door!$"

MooFarm_Combate_Scizorita_Texto_4:
.string "All right!\n"
	.string "I hope you can endure the assault!$"

MooFarm_Combate_Scizorita_Texto_5:
.string "A sudden stop!$"

MooFarm_Combate_Scizorita_Texto_6:
	.string "Now it's my turn. MILTANK doesn't\n"
	.string "charge with as much force, but it will be\l"
	.string "hard to knock down!$"

MooFarm_Combate_Scizorita_Texto_7:
.string "What a training session!$"

MooFarm_Combate_Scizorita_Texto_8:
.string "Eh!\n"
	.string "Take it easy!\l"
	.string "We wanted them to slowly regain their\l"
	.string "form, not end up straight back in the\l"
	.string "infirmary!$"

MooFarm_Combate_Scizorita_Texto_9:
	.string "Ignore him. It was a joke. You've\n"
	.string "impressed us; TRAINERs usually flee in\l"
	.string "terror at just one of our TAUROS, but\l"
	.string "you… You've dealt with a dozen TAUROS\l"
	.string "and MILTANK!$"

MooFarm_Combate_Scizorita_Texto_10:
	.string "Your achievement deserves a reward;\n"
	.string "one of our MILTANK wandered off in the\l"
	.string "meadow and returned with this. We're\l"
	.string "not sure what it is, but it looks like it\l"
	.string "could be very valuable.$"

MooFarm_Combate_Scizorita_Texto_11:
	.string "I'm sure you'll put it to good use.\n"
	.string "Remember, you can buy MOOMOO MILK for a\l"
	.string "steal at the booth next door!$"

MooFarm_Combate_Scizorita_Texto_12:
	.string "I understand. The charges of a TAUROS\n"
	.string "are quite intimidating.$"

Johto_MuMu_Mercado_EventScript_Clerk::
lock
showmoneybox 0, 0
msgbox Johto_MuMu_Mercado_EventScript_Clerk_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Johto_MuMu_Mercado_EventScript_Clerk_No
delay 10
playse SE_SHOP
removemoney 5000 0
updatemoneybox
additem ITEM_MOOMOO_MILK, 12
delay 40
hidemoneybox
delay 40
msgbox Johto_MuMu_Mercado_EventScript_Clerk_Texto_2 MSGBOX_AUTOCLOSE
release
end

Johto_MuMu_Mercado_EventScript_Clerk_No::
hidemoneybox
msgbox Johto_MuMu_Mercado_EventScript_Clerk_Texto_2 MSGBOX_AUTOCLOSE
release
end

Johto_MuMu_Mercado_EventScript_Clerk_Texto_1:
	.string "We sell a dozen MOOMOO MILK for 5,000\n"
	.string "POKÉ, saving you 1000 POKÉ compared to\l"
	.string "anywhere else. Will you buy?$"

Johto_MuMu_Mercado_EventScript_Clerk_Texto_2:
.string "Please come again!$"

