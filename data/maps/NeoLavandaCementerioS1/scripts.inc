NeoLavandaCementerioS1_MapScripts::
	.byte 0

NeoLavandaCementerioS1_2::
lock     
faceplayer     
msgbox NeoLavandaCementerioS1_Text_2, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS1_Text_2:
	.string "The GRAVEYARD was built in record time…\n"
	.string "Something tells me that FUJI already\l"
	.string "knew what was going to happen to the\l"
	.string "POKÉMON TOWER long before any of us\l"
	.string "did. Either way, let's hope that with\l"
	.string "this, definitive peace is achieved here.$"




NeoLavandaCementerioS1_3::
lock     
faceplayer     
msgbox NeoLavandaCementerioS1_Text_3, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS1_Text_3:
	.string "RADIO TOWER is the new face of the\n"
	.string "town; in contrast, now the graves\l"
	.string "remain hidden. Perhaps that was the\l"
	.string "true intention from the beginning.$"






NeoLavandaCementerioS1_4::
lock     
faceplayer     
msgbox NeoLavandaCementerioS1_Text_4, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS1_Text_4:
	.string "Most of the relocated graves belonged\n"
	.string "to forgotten souls that hadn't been\l"
	.string "visited in a long time. However, FUJI\l"
	.string "moved all of them without exception; he\l"
	.string "feels indebted to the town. But… The\l"
	.string "reality is that this GRAVEYARD will be\l"
	.string "visited by very few from now on; its\l"
	.string "destiny is to remain in the shadows.$"





NeoLavandaCementerioS1_6::
lock     
faceplayer     
msgbox NeoLavandaCementerioS1_Text_6, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS1_Text_6:
	.string "Some exorcists have followed the same\n"
	.string "path as AGATHA: retirement into a\l"
	.string "contemplative life. Thanks to FUJI,\l"
	.string "many of us will remain in LAVENDER TOWN.$"






NeoLavandaCementerioS1_10::
lock     
faceplayer     
msgbox NeoLavandaCementerioS1_Text_10, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS1_Text_10:
	.string "Only express visits will be allowed from\n"
	.string "now on. The vast majority of passersby\l"
	.string "won't know about the existence of this\l"
	.string "place; they'll believe all those graves\l"
	.string "were removed out of nowhere. But they\l"
	.string "are here!$"





NeoLavandaCementerioS1_14::
lock     
faceplayer     
msgbox NeoLavandaCementerioS1_Text_14, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS1_Text_14:
	.string "You were that ROCKET that FUJI talked\n"
	.string "so much about. Yes, I remember you.$"






NeoLavandaCementerioS1_15::
lock     
faceplayer     
msgbox NeoLavandaCementerioS1_Text_15, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS1_Text_15:
	.string "Welcome, {PLAYER}, to the new\n"
	.string "LAVENDER TOWER GRAVEYARD! FUJI already\l"
	.string "informed me that you'd be coming. You're\l"
	.string "quite a legend around here.$"



NeoLavandaCementerioS1_EventScript_Exorcista::
	trainerbattle_single TRAINER_TRAINER_35, NeoLavandaCementerioS1_Text_ExorcistaIntro, NeoLavandaCementerioS1_Text_ExorcistaDefeated
	msgbox NeoLavandaCementerioS1_Text_ExorcistaPostBattle, MSGBOX_AUTOCLOSE
	end



NeoLavandaCementerioS1_EventScript_Exorcista2::
	trainerbattle_single TRAINER_TRAINER_34, NeoLavandaCementerioS1_Text_Exorcista2Intro, NeoLavandaCementerioS1_Text_Exorcista2Defeated
	msgbox NeoLavandaCementerioS1_Text_Exorcista2PostBattle, MSGBOX_AUTOCLOSE
	end



NeoLavandaCementerioS1_EventScript_Exorcista3::
	trainerbattle_single TRAINER_TRAINER_32, NeoLavandaCementerioS1_Text_Exorcista3Intro, NeoLavandaCementerioS1_Text_Exorcista3Defeated
	msgbox NeoLavandaCementerioS1_Text_Exorcista3PostBattle, MSGBOX_AUTOCLOSE
	end



NeoLavandaCementerioS1_EventScript_Exorcista4::
	trainerbattle_single TRAINER_TRAINER_33, NeoLavandaCementerioS1_Text_Exorcista4Intro, NeoLavandaCementerioS1_Text_Exorcista4Defeated
	msgbox NeoLavandaCementerioS1_Text_Exorcista4PostBattle, MSGBOX_AUTOCLOSE
	end

NeoLavandaCementerioS1_Rocket_Redencion::
lock
applymovement 18, NeoLavandaCementerioS1_Rocket_Redencion_Move_1
waitmovement 0x0
msgbox NeoLavandaCementerioS1_Rocket_Redencion_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox NeoLavandaCementerioS1_Rocket_Redencion_Texto_2 MSGBOX_AUTOCLOSE
delay 20
applymovement 18, NeoLavandaCementerioS1_Rocket_Redencion_Move_2
waitmovement 0x0
playse SE_PIN
applymovement 18, NeoLavandaCementerioS1_Rocket_Redencion_Move_3
waitmovement 0x0
msgbox NeoLavandaCementerioS1_Rocket_Redencion_Texto_3 MSGBOX_AUTOCLOSE
applymovement 18, NeoLavandaCementerioS1_Rocket_Redencion_Move_4
waitmovement 0x0
msgbox NeoLavandaCementerioS1_Rocket_Redencion_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox NeoLavandaCementerioS1_Rocket_Redencion_Texto_5 MSGBOX_AUTOCLOSE
applymovement 18, NeoLavandaCementerioS1_Rocket_Redencion_Move_5
waitmovement 0x0
msgbox NeoLavandaCementerioS1_Rocket_Redencion_Texto_6 MSGBOX_AUTOCLOSE
applymovement 18, NeoLavandaCementerioS1_Rocket_Redencion_Move_6
waitmovement 0x0
msgbox NeoLavandaCementerioS1_Rocket_Redencion_Texto_7 MSGBOX_AUTOCLOSE
applymovement 18, NeoLavandaCementerioS1_Rocket_Redencion_Move_4
waitmovement 0x0
msgbox NeoLavandaCementerioS1_Rocket_Redencion_Texto_8 MSGBOX_AUTOCLOSE
applymovement 18, NeoLavandaCementerioS1_Rocket_Redencion_Move_5
waitmovement 0x0
msgbox NeoLavandaCementerioS1_Rocket_Redencion_Texto_9 MSGBOX_AUTOCLOSE
applymovement 18, NeoLavandaCementerioS1_Rocket_Redencion_Move_7
waitmovement 0x0
msgbox NeoLavandaCementerioS1_Rocket_Redencion_Texto_10 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM105_SNARL
msgbox NeoLavandaCementerioS1_Rocket_Redencion_Texto_11 MSGBOX_DEFAULT
waitfanfare
msgbox NeoLavandaCementerioS1_Rocket_Redencion_Texto_12 MSGBOX_AUTOCLOSE
setflag FLAG_NUEVA_830
fadescreen 1
delay 20
removeobject 18
fadescreen 0
release
end

NeoLavandaCementerioS1_Rocket_Redencion_Move_7:
delay_8
face_player
delay_8
step_end

NeoLavandaCementerioS1_Rocket_Redencion_Move_6:
walk_in_place_down
step_end

NeoLavandaCementerioS1_Rocket_Redencion_Move_5:
face_down
step_end

NeoLavandaCementerioS1_Rocket_Redencion_Move_4:
face_up
delay_8
face_player
step_end

NeoLavandaCementerioS1_Rocket_Redencion_Move_3:
emote_exclamation_mark
step_end

NeoLavandaCementerioS1_Rocket_Redencion_Move_2:
face_player
delay_8
delay_8
step_end

NeoLavandaCementerioS1_Rocket_Redencion_Move_1:
walk_in_place_up
step_end

NeoLavandaCementerioS1_Rocket_Redencion_Texto_1:
.string "Don't worry, I will take charge of that.$"

NeoLavandaCementerioS1_Rocket_Redencion_Texto_2:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

NeoLavandaCementerioS1_Rocket_Redencion_Texto_3:
.string "Oh, sir! I didn't expect to see you here.$"

NeoLavandaCementerioS1_Rocket_Redencion_Texto_4:
	.string "I doubt you remember me; I was there\n"
	.string "during your LAVENDER TOWER mission. If\l"
	.string "it wasn't for you, FUJIi would have made\l"
	.string "things really tough for us.$"

NeoLavandaCementerioS1_Rocket_Redencion_Texto_5:
	.string "The truth is, we did something terrible\n"
	.string "there. At that moment, we weren't aware;\l"
	.string "everything was permissible because we\l"
	.string "were the TEAM ROCKET, playing the role\l"
	.string "society expected from us, but not the\l"
	.string "one the organization instilled from\l"
	.string "within.$"

NeoLavandaCementerioS1_Rocket_Redencion_Texto_6:
	.string "Shortly after, GIOVANNI assigned us\n"
	.string "here as punishment.$"

NeoLavandaCementerioS1_Rocket_Redencion_Texto_7:
	.string "We were forced to collaborate in the\n"
	.string "construction of this large GRAVEYARD,\l"
	.string "stripped of our pay and living on\l"
	.string "charity. With nothing in return, only a\l"
	.string "vague promise of redemption sustained\l"
	.string "our will.$"

NeoLavandaCementerioS1_Rocket_Redencion_Texto_8:
	.string "My other two comrades abandoned\n"
	.string "shortly after, but I was the only one\l"
	.string "who managed to persevere. Now, I can\l"
	.string "proudly say that my role in the\l"
	.string "construction of this GRAVEYARD has been\l"
	.string "crucial, and GIOVANNI promoted me to a\l"
	.string "HIGH RANK GRUNT because of it.$"

NeoLavandaCementerioS1_Rocket_Redencion_Texto_9:
	.string "If it weren't for that second\n"
	.string "opportunity, who knows where I'd be\l"
	.string "today?$"

NeoLavandaCementerioS1_Rocket_Redencion_Texto_10:
	.string "I'm also grateful to you. I'd like to give\n"
	.string "you this TM I found during\l"
	.string "construction.$"

NeoLavandaCementerioS1_Rocket_Redencion_Texto_11:
.string "{PLAYER} obtained the TM105 SNARL\n"
	.string "from the HIGH RANK GRUNT!!$"

NeoLavandaCementerioS1_Rocket_Redencion_Texto_12:
	.string "It's an honor to have you here. I hope\n"
	.string "to see you more often now that\l"
	.string "LAVENDER TOWN has become one of our\l"
	.string "operation centers. You know what I\l"
	.string "mean.$"
