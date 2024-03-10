Ecruteak_TinTowerP4_MapScripts::
	.byte 0

TinTowerP4_1::
end



TinTowerP4_2::
end



TinTowerP4_3::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp4_Text_3, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp4_Text_3:
	.string "Like flowers, we are dying, but\n"
	.string "everything we do in life has its echo in\l"
	.string "eternity.$"



TinTowerP4_4::
lock
faceplayer
msgbox TinTowerP4_4_Texto_1 MSGBOX_AUTOCLOSE
fadescreen 1
playse SE_USE_ITEM
special HealPlayerParty
delay 20
fadescreen 0
msgbox TinTowerP4_4_Texto_2 MSGBOX_AUTOCLOSE
release
end

TinTowerP4_4_Texto_1:
	.string "A good rest wouldn't hurt, BELL TOWER is\n"
	.string "long and tough.$"

TinTowerP4_4_Texto_2:
	.string "Your POKÉMON are ready to continue\n"
	.string "your journey.$"



TinTowerP4_5::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp4_Text_5, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp4_Text_5:
	.string "Our psychology conspires against\n"
	.string "ourselves: people prefer to head\l"
	.string "towards a precise destination rather\l"
	.string "than face a certain degree of\l"
	.string "uncertainty, even if the uncertainty\l"
	.string "could be beneficial.$"



TinTowerP4_6::
end



TinTowerP4_EventScript_Monje::
	trainerbattle_single TRAINER_MELINA, TinTowerP4_Text_MonjeIntro, TinTowerP4_Text_MonjeDefeated
	msgbox TinTowerP4_Text_MonjePostBattle, MSGBOX_AUTOCLOSE
	end



TinTowerP4_EventScript_ReceiveHonedge::
    lock
    faceplayer
	checkmoncatch SPECIES_HONEDGE
	goto_if_eq VAR_RESULT, FALSE, TinTowerP4_EventScript_TakeHonedge 
	msgbox TinTowerP4_Text_4, MSGBOX_DEFAULT
	release
	end



TinTowerP4_EventScript_TakeHonedge::
    msgbox TinTowerP4_Text_TakeHonedge MSGBOX_DEFAULT
	msgbox TinTowerP4_Text_TakeHonedge2 MSGBOX_DEFAULT
	msgbox TinTowerP4_Text_TakeHonedge3 MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox TinTowerP4_Text_MensajeHonedge, MSGBOX_DEFAULT
	givemon SPECIES_HONEDGE, 10, ITEM_GHOST_GEM
	waitfanfare  
	release
	end 



TinTowerP4_Text_TakeHonedge:
	.string "Is not very common to see youngsters\n"
	.string "like you these days.$"



TinTowerP4_Text_TakeHonedge2:
	.string "I can see the respect you hold for this\n"
	.string "place. Despite being surrounded by\l"
	.string "temptations, given your position, you\l"
	.string "haven't forgotten where you come from.$"



TinTowerP4_Text_TakeHonedge3:
	.string "Therefore, I present you with this\n"
	.string "POKÉMON. If you train it well, it will\l"
	.string "serve as a shield against the most\l"
	.string "adverse situations.$"



TinTowerP4_Text_MensajeHonedge:
.string "YOU OBTAINED A LV.10 HONEDGE!!$"


TinTowerP4_Text_4:
	.string "HONEDGE can serve as a shield against\n"
	.string "the most adverse situations, something\l"
	.string "to consider given the environment you\l"
	.string "navigate.$"
