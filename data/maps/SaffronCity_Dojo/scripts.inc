SaffronCity_Dojo_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_Dojo_OnTransition
	.byte 0
	
SaffronCity_Dojo_OnTransition::
goto_if_ge VAR_UNUSED_0x40F7, 203, SaffronCity_Dojo_WarpDinamica
setdynamicwarp MAP_SAFFRON_CITY, 40, 12
end

SaffronCity_Dojo_WarpDinamica::
setdynamicwarp MAP_NEO_SAFFRON_CITY, 40, 12
end			

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
	.string "Ich habe verloren, aber meine Ehre\n"
	.string "bleibt unversehrt. Nicht so wie diese\l"
	.string "Psychos aus der Arena nebenan, die\l"
	.string "sich vor echten Kämpfen drücken!$"



SaffronCityDojo6::
end



SaffronCityDojo7::
lock
msgbox SaffronCityDojo7_Texto_1 MSGBOX_AUTOCLOSE
release
end

SaffronCityDojo7_Texto_1:
	.string "Dieser POKéBALL wird sorgfältig\n"
	.string "aufbewahrt und ist blitzsauber.\p"
	.string "Es muss ein POKéMON enthalten,\n"
	.string "dass dem SCHWARZGURT heilig ist.$"



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
	.string "Willkommen!\p"
	.string "Ich bin der KARATE-MEISTER!\n"
	.string "Ich leite diese POKéMON-ARENA!\p"
	.string "Du forderst mich heraus?\n"
	.string "Also gut!\p"
	.string "Ich kenne keine Gnade!$"

SaffronCity_Dojo_Combate_Maestro_Texto_2:
.string "Arrgh!\n"
	.string "Ich wurde geschlagen!$"

SaffronCity_Dojo_Combate_Maestro_Texto_3:
	.string "Ich bin deiner Gnade unwürdig! Trotzdem\n"
	.string "flehe ich dich an, unser Emblem nicht\l"
	.string "als Trophäe mitzunehmen! Zum Ersatz\l"
	.string "gebe ich dir dieses wertvolle Item.$"

SaffronCity_Dojo_Combate_Maestro_Texto_4:
	.string "Dieser SCHWARZGURT erhöht die Stärke\n"
	.string "aller KAMPF-Attacken um 20 %. Wenn du\l"
	.string "ihn einem POKéMON mit hohem physischen\l"
	.string "Angriff gibst, wie KICKLEE oder\l"
	.string "MACHOMAI, machen sie mit ihren\l"
	.string "KAMPF-ATTACKEN kurzen Prozess mit\l"
	.string "allem, was sich ihnen in den Weg stellt!\p"
	.string "Glaub mir!$"
