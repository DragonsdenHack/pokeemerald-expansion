MahoganyTown_NinjaBaseS2_MapScripts::
	.byte 0

NinjaBaseS2_1::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS2_Text_1, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS2_Text_1:
	.string "Both from here and from the GOLDENROD\n"
	.string "and LAVENDER RADIO TOWERS, we'll\l"
	.string "thoroughly study the influence of\l"
	.string "magnetic waves on POKÉMON.$"



NinjaBaseS2_2::
end



NinjaBaseS2_3::
end



NinjaBaseS2_4::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS2_Text_4, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS2_Text_4:
	.string "I'd like to train a STANTLER. They're so\n"
	.string "magnificent and characteristic of\l"
	.string "JOHTO… Although I'm not sure if it's a\l"
	.string "suitable POKÉMON for a ROCKET…$"



NinjaBaseS2_5::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS2_Text_5, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS2_Text_5:
	.string "Ever heard of SHINY POKÉMON? Well, all\n"
	.string "the better! The only thing special\l"
	.string "about 'em's the weird color they've got\l"
	.string "compared to usual! It's just some\l"
	.string "gimmick to eat up time from people who'd\l"
	.string "gloat about their weird collection! The\l"
	.string "only thing that matters in a POKÉMON is\l"
	.string "its genetic potential!$"



NinjaBaseS2_6::
end



NinjaBaseS2_7::
end



NinjaBaseS2_8::
end



NinjaBaseS2_9::
end



NinjaBaseS2_10::
end



NinjaBaseS2_11::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS2_Text_11, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS2_Text_11:
	.string "According to our calculations, radio\n"
	.string "waves could potentially boost a regular\l"
	.string "POKÉMON's base stats by more than 100\l"
	.string "points.$"



NinjaBaseS2_12::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS2_Text_12, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS2_Text_12:
	.string "ROUTE 5 BASE, VIRIDIAN CITY BASE,\n"
	.string "CELADON BASE, CHRONO ISLAND\l"
	.string "WAREHOUSE, MAHOGANY BASE, and ROUTE 45\l"
	.string "BASE. We are omnipresent!$"



NinjaBaseS2_13::
end



NinjaBaseS2_14::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS2_Text_14, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS2_Text_14:
	.string "With this one, we now have six bases\n"
	.string "scattered across KANTO, JOHTO, and the\l"
	.string "SEVII ISLANDS! TEAM ROCKET reigns\l"
	.string "supreme!$"



NinjaBaseS2_EventScript_Ninja::
	trainerbattle_single TRAINER_TONY_4, NinjaBaseS2_Text_NinjaIntro, NinjaBaseS2_Text_NinjaDefeated
	msgbox NinjaBaseS2_Text_NinjaPostBattle, MSGBOX_AUTOCLOSE
	end



NinjaBaseS2_EventScript_Ladron::
	trainerbattle_single TRAINER_COLE, NinjaBaseS2_Text_LadronIntro, NinjaBaseS2_Text_LadronDefeated
	msgbox NinjaBaseS2_Text_LadronPostBattle, MSGBOX_AUTOCLOSE
	end



NinjaBaseS2_EventScript_Ladron2::
	trainerbattle_single TRAINER_LARRY, NinjaBaseS2_Text_Ladron2Intro, NinjaBaseS2_Text_Ladron2Defeated
	msgbox NinjaBaseS2_Text_Ladron2PostBattle, MSGBOX_AUTOCLOSE
	end



NinjaBaseS2_EventScript_Ninja2::
	trainerbattle_single TRAINER_TONY_3, NinjaBaseS2_Text_Ninja2Intro, NinjaBaseS2_Text_Ninja2Defeated
	msgbox NinjaBaseS2_Text_Ninja2PostBattle, MSGBOX_AUTOCLOSE
	end



NinjaBaseS2_EventScript_Calvo::
	trainerbattle_single TRAINER_PAT, NinjaBaseS2_Text_CalvoIntro, NinjaBaseS2_Text_CalvoDefeated
	msgbox NinjaBaseS2_Text_CalvoPostBattle, MSGBOX_AUTOCLOSE
	end

NinjaBaseS2_Charizardita_X::
lock
faceplayer
checkitem ITEM_CHARIZARDITE_X
goto_if_eq VAR_RESULT, FALSE, NinjaBaseS2_Charizardita_X_2
msgbox NinjaBaseS2_Charizardita_X_Texto_3 MSGBOX_AUTOCLOSE
release
end

NinjaBaseS2_Charizardita_X_2::
msgbox NinjaBaseS2_Charizardita_X_Texto_1 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_CHARIZARDITE_X
msgbox NinjaBaseS2_Charizardita_X_Texto_2 MSGBOX_DEFAULT
waitfanfare
release
end

NinjaBaseS2_Charizardita_X_Texto_1:
	.string "As you already know, we've been working\n"
	.string "on creating several artificial MEGA\l"
	.string "STONES for various POKÉMON. As a\l"
	.string "result, we've managed to create a\l"
	.string "physical offensive variant of\l"
	.string "CHARIZARD. Here's its MEGA STONE.$"

NinjaBaseS2_Charizardita_X_Texto_3:
	.string "CHARIZARDITE-X realizes the dream of\n"
	.string "many: to see CHARIZARD transformed\l"
	.string "into a dragon. There's no limit to what\l"
	.string "TEAM ROCKET's scientists can\l"
	.string "accomplish.$"

NinjaBaseS2_Charizardita_X_Texto_2:
	.string "You obtained a CHARIZARDITE-X from\n"
	.string "the ROCKET SCIENTIST!!$"

