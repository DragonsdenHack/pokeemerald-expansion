FourIsland_House1_MapScripts::
	.byte 0

FourIslandHouse1_1::
lock     
faceplayer     
msgbox FourIsland_House1_Text_1, MSGBOX_DEFAULT
release     
end

FourIsland_House1_Text_1:
.string "There! Boing!\n"
    .string "You're awfully heavy!$"



FourIslandHouse1_2::
end

FourIsland_House1_Entrenador_Especial::
lock
faceplayer
compare VAR_ROUTE114_STATE, 0
goto_if_gt FourIsland_House1_Entrenador_Especial_3
msgbox FourIsland_House1_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
msgbox FourIsland_House1_Entrenador_Especial_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq FourIsland_House1_Entrenador_Especial_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox FourIsland_House1_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CASCO, FourIsland_House1_Entrenador_Especial_Texto_5
msgbox FourIsland_House1_Entrenador_Especial_Texto_6 MSGBOX_AUTOCLOSE
playfanfare  MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_ROCKY_HELMET
msgbox FourIsland_House1_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
msgbox FourIsland_House1_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE114_STATE, 1
release
end

FourIsland_House1_Entrenador_Especial_No::
msgbox FourIsland_House1_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
release
end

FourIsland_House1_Entrenador_Especial_3::
msgbox FourIsland_House1_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end

FourIsland_House1_Entrenador_Especial_Texto_1:
	.string "Contact moves like BODY SLAM often\n"
	.string "deal significant damage and can cause\l"
	.string "interesting secondary effects like\l"
	.string "paralysis; however, they have a\l"
	.string "drawback.$"

FourIsland_House1_Entrenador_Especial_Texto_1.1:
	.string "You obtained a ROCKY HELMET from\n"
	.string "the PKMN TRAINER!$"

FourIsland_House1_Entrenador_Especial_Texto_2:
	.string "Do you want to know?$"

FourIsland_House1_Entrenador_Especial_Texto_3:
	.string "The ROCKY HELMET subtracts 1/6 of HP\n"
	.string "from any opposing POKÉMON that strikes\l"
	.string "us with contact moves while we have\l"
	.string "this item holding. When combined with\l"
	.string "abilities like ROUGH SKIN or IRON BARBS,\l"
	.string "it generates quite substantial damage\l"
	.string "simply for enduring the hit. Can you\l"
	.string "picture a CLEFABLE using DOUBLE SLAP\l"
	.string "against a FERROTHORN wearing this\l"
	.string "HELMET? We'd have to rush the CLEFABLE\l"
	.string "to the hospital before the FERROTHORN\l"
	.string "even makes a move!$"

FourIsland_House1_Entrenador_Especial_Texto_4:
	.string "Well! I'll show you!$"

FourIsland_House1_Entrenador_Especial_Texto_5:
	.string "You have a formidable team, yes, I'll\n"
	.string "show it to you.$"

FourIsland_House1_Entrenador_Especial_Texto_6:
	.string "That's right! Contact moves can harm\n"
	.string "the POKÉMON that performs them if they\l"
	.string "touch certain POKÉMON with abilities\l"
	.string "like STATIC, IRON BARBS, ROUGH SKIN, or\l"
	.string "FLAME BODY, so they must be used\l"
	.string "carefully. Moreover, there is another\l"
	.string "item that punishes any contact move\l"
	.string "like BODY SLAM; take a look.$"

FourIsland_House1_Entrenador_Especial_Texto_7:
	.string "Then I don't know why you're here.\n"
	.string "Leave!$"
