CapeBrink_House1_MapScripts::
	.byte 0

CapeBrinkHouse1_1::
end

CapeBrinkHouse1_Entrenador_Especial::
lock
faceplayer
compare VAR_CURRENT_SECRET_BASE, 0
goto_if_gt CapeBrinkHouse1_Entrenador_Especial_2
msgbox CapeBrinkHouse1_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
msgbox CapeBrinkHouse1_Entrenador_Especial_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CapeBrinkHouse1_Entrenador_Especial_2_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox CapeBrinkHouse1_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LUPA, CapeBrinkHouse1_Entrenador_Especial_Texto_5
msgbox CapeBrinkHouse1_Entrenador_Especial_Texto_6 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_WIDE_LENS
msgbox CapeBrinkHouse1_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
setvar VAR_CURRENT_SECRET_BASE, 1
release
end

CapeBrinkHouse1_Entrenador_Especial_2_No::
msgbox CapeBrinkHouse1_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end

CapeBrinkHouse1_Entrenador_Especial_2::
msgbox CapeBrinkHouse1_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
release
end

CapeBrinkHouse1_Entrenador_Especial_Texto_1:
	.string "Oh, well. It seems that you're one of\n"
	.string "those trainers who hasn't been handed\l"
	.string "anything. There are many kids out there\l"
	.string "who think they're special just because\l"
	.string "they've received some rare or powerful\l"
	.string "POKÉMON without having put in any\l"
	.string "effort to earn it. But it doesn't seem\l"
	.string "like that's the case with you. I'd like\l"
	.string "to confirm it, though.$"

CapeBrinkHouse1_Entrenador_Especial_Texto_2:
	.string "So you accept the challenge?$"

CapeBrinkHouse1_Entrenador_Especial_Texto_3:
	.string "I might have been wrong about you.$"

CapeBrinkHouse1_Entrenador_Especial_Texto_4:
	.string "You'll be amazed by the amount of\n"
	.string "learning one can experience in the\l"
	.string "solitude of this island, young man.$"

CapeBrinkHouse1_Entrenador_Especial_Texto_5:
.string "So, there's still a long way to go...$"

CapeBrinkHouse1_Entrenador_Especial_Texto_6:
	.string "It appears that you are very\n"
	.string "meticulous with your team. You have\l"
	.string "reignited my desire to battle others.\l"
	.string "This is for you.$"

CapeBrinkHouse1_Entrenador_Especial_Texto_1.1:
	.string "Obtained WIDE LENS from CHANELER\n"
	.string "hands!$"

CapeBrinkHouse1_Entrenador_Especial_Texto_7:
	.string "The WIDE LENS enhances the accuracy\n"
	.string "of your offensive moves by 10%. For\l"
	.string "instance, moves with 90% accuracy will\l"
	.string "now have 99% accuracy, whereas moves\l"
	.string "like THUNDER, originally with 70%\l"
	.string "accuracy, will now boast 77% accuracy.\l"
	.string "Its usefulness varies depending on the\l"
	.string "scenario.$"
