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
.string "He perdido, pero he conservado mi honor.\n"
	.string "¡No cómo esos POKÉMON PSÍQUICO del\l"
	.string "GIMNASIO de al lado que rehuyen el\l"
	.string "combate cuerpo a cuerpo!$"



SaffronCityDojo6::
end



SaffronCityDojo7::
lock
msgbox SaffronCityDojo7_Texto_1 MSGBOX_AUTOCLOSE
release
end

SaffronCityDojo7_Texto_1:
.string "Esta POKÉ BALL está muy bien\n"
	.string "cuidada, debe contener un POKÉMON\l"
	.string "importante para el MAESTRO DOJO.$"



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
.string "¡Alto ahí!\n"
	.string "¡Yo soy el MAESTRO KÁRATE!\l"
	.string "¡Y yo soy el LÍDER aquí!\l"
	.string "¿Quieres desafiarnos?\l"
	.string "¡No esperes misericordia!\l"
	.string "¡Fwaaa!$"

SaffronCity_Dojo_Combate_Maestro_Texto_2:
.string "¡Hwa!\n"
	.string "¡Arrgh! ¡Perdí!$"

SaffronCity_Dojo_Combate_Maestro_Texto_3:
.string "¡He perdido!\n"
	.string "Pero, te lo ruego, ¡no te lleves\l"
	.string "nuestro emblema como trofeo!\l"
	.string "A cambio, ¡te daré este valioso\l"
	.string "objeto!$"

SaffronCity_Dojo_Combate_Maestro_Texto_4:
.string "El CINTURÓN NEGRO aumenta en un\n"
	.string "20% la potencia de los movimientos\l"
	.string "LUCHA, equipado en POKÉMON con ya\l"
	.string "alto ataque físico, como HITMONLEE\l"
	.string "o MACHAMP, sus movimientos LUCHA\l"
	.string "destrozarán a todo lo que golpee\l"
	.string "neutral, ¡créeme!$"
