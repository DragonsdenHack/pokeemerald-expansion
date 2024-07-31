SaffronCity_Dojo_MapScripts::
	.byte 0

SaffronCityDojo1::
end



SaffronCityDojo2::
end



SaffronCityDojo3::
end



SaffronCityDojo4::
end



SaffronCityDojo5::
lock
faceplayer
msgbox SaffronCityDojo5_Texto_1 MSGBOX_AUTOCLOSE
release
end

SaffronCityDojo5_Texto_1:
	.string "I've lost, but I have kept my honor\n"
	.string "intact. Not like those PSYCHIC POKÉMON\l"
	.string "from the other GYM that avoid the close\l"
	.string "combat!$"



SaffronCityDojo6::
end



SaffronCityDojo7::
lock
msgbox SaffronCityDojo7_Texto_1 MSGBOX_AUTOCLOSE
release
end

SaffronCityDojo7_Texto_1:
	.string "This POKÉ BALL is very well kept, also\n"
	.string "very clean. It must contain a very\l"
	.string "important POKÉMON for the KARATE\l"
	.string "MASTER.$"



SaffronCityDojo_EventScript_Karateka::
	trainerbattle_single TRAINER_JOSH, SaffronCityDojo_Text_KaratekaIntro, SaffronCityDojo_Text_KaratekaDefeated
	msgbox SaffronCityDojo_KaratekaPostBattle, MSGBOX_AUTOCLOSE
	end



SaffronCityDojo_EventScript_Karateka2::
	trainerbattle_single TRAINER_JOEY, SaffronCityDojo_Text_Karateka2Intro, SaffronCityDojo_Text_Karateka2Defeated
	msgbox SaffronCityDojo_Karateka2PostBattle, MSGBOX_AUTOCLOSE
	end



SaffronCityDojo_EventScript_Karateka3::
	trainerbattle_single TRAINER_BILLY, SaffronCityDojo_Text_Karateka3Intro, SaffronCityDojo_Text_Karateka3Defeated
	msgbox SaffronCityDojo_Karateka3PostBattle, MSGBOX_AUTOCLOSE
	end



SaffronCityDojo_EventScript_Karateka4::
	trainerbattle_single TRAINER_TOMMY, SaffronCityDojo_Text_Karateka4Intro, SaffronCityDojo_Text_Karateka4Defeated
	msgbox SaffronCityDojo_Karateka4PostBattle, MSGBOX_AUTOCLOSE
	end



SaffronCityDojoDocumento_100::
msgbox SaffronCityDojoDocumento_Text_100, MSGBOX_SIGN   
end

SaffronCityDojoDocumento_Text_100:
    .string "FIGHTING DOJO$"



SaffronCityDojoDocumento_101::
msgbox SaffronCityDojoDocumento_Text_101, MSGBOX_SIGN   
end

SaffronCityDojoDocumento_Text_101:
    .string "Enemies on every side!$"



SaffronCityDojoDocumento_102::
msgbox SaffronCityDojoDocumento_Text_102, MSGBOX_SIGN   
end

SaffronCityDojoDocumento_Text_102:
    .string "What goes around comes around.$"

SaffronCity_Dojo_Combate_Maestro::
playse MUS_RG_ENCOUNTER_BOY
applymovement 5, SaffronCity_Dojo_Combate_Maestro_Move_1
applymovement OBJ_EVENT_ID_PLAYER, SaffronCity_Dojo_Combate_Maestro_Move_2
waitmovement 0x0
msgbox SaffronCity_Dojo_Combate_Maestro_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CALVIN_1, SaffronCity_Dojo_Combate_Maestro_Texto_2
msgbox SaffronCity_Dojo_Combate_Maestro_Texto_3 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_BLACK_BELT
waitfanfare
delay 10
msgbox SaffronCity_Dojo_Combate_Maestro_Texto_4 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE132_STATE, 1
release
end

SaffronCity_Dojo_Combate_Maestro_Move_1:
walk_in_place_down
step_end

SaffronCity_Dojo_Combate_Maestro_Move_2:
walk_in_place_up
step_end

SaffronCity_Dojo_Combate_Maestro_Texto_1:
	.string "Grunt!\p"
	.string "I am the KARATE MASTER!\n"
	.string "I am the LEADER here!\p"
	.string "You wish to challenge us?\n"
	.string "Expect no mercy!\p"
	.string "Fwaaa!$"

SaffronCity_Dojo_Combate_Maestro_Texto_2:
.string "Hwa!\n"
	.string "Arrrgh! I lost!$"

SaffronCity_Dojo_Combate_Maestro_Texto_3:
	.string "Indeed, I have lost!\p"
	.string "But, I beseech you, do not take\n"
	.string "our emblem as your trophy!\p"
	.string "In return, I will give this valuable\n"
	.string "object!\p"

SaffronCity_Dojo_Combate_Maestro_Texto_4:
	.string "The BLACK BELT increases the power of\n"
	.string "FIGHTING moves by 20%, Holding on\l"
	.string "POKÉMON with already high physical\l"
	.string "attack, such as HITMONLEE or MACHAMP,\l"
	.string "their FIGHTING moves will destroy\l"
	.string "everything they hit neutral, believe me!$"
