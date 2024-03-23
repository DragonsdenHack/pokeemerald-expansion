Newbark_ElmLaboratory_MapScripts::
	.byte 0

ElmLaboratory1::
end



ElmLaboratory2::
lock     
faceplayer     
msgbox NewBarkTown_ElmLaboratory_Text_2, MSGBOX_DEFAULT
release     
end

NewBarkTown_ElmLaboratory_Text_2:
.string "There's a lot of work to do!\n"
.string "The entire region must be\l"
.string "accommodated for it!$"



ElmLaboratory3::
lock     
faceplayer     
msgbox NewBarkTown_ElmLaboratory_Text_3, MSGBOX_DEFAULT
release     
end

NewBarkTown_ElmLaboratory_Text_3:
.string "Oh, you must be {PLAYER}. aren't you?\n"
.string "How does it feel to stay in front of OAK?$"

NewBarkTown_ElmLaboratory_Combate_Elm::
lock
faceplayer
checkitem ITEM_AERODACTYLITE
goto_if_eq VAR_RESULT, FALSE, NewBarkTown_ElmLaboratory_Combate_Elm_2
msgbox NewBarkTown_ElmLaboratory_Combate_Elm_Texto_3 MSGBOX_AUTOCLOSE
release
end

NewBarkTown_ElmLaboratory_Combate_Elm_2::
msgbox NewBarkTown_ElmLaboratory_Combate_Elm_Texto_1 MSGBOX_AUTOCLOSE
msgbox NewBarkTown_ElmLaboratory_Combate_Elm_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq NewBarkTown_ElmLaboratory_Combate_Elm_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox NewBarkTown_ElmLaboratory_Combate_Elm_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ELM_2, NewBarkTown_ElmLaboratory_Combate_Elm_Texto_5
msgbox NewBarkTown_ElmLaboratory_Combate_Elm_Texto_6 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_AERODACTYLITE
msgbox NewBarkTown_ElmLaboratory_Combate_Elm_Texto_6.1 MSGBOX_DEFAULT
waitfanfare
msgbox NewBarkTown_ElmLaboratory_Combate_Elm_Texto_7 MSGBOX_AUTOCLOSE
release
end

NewBarkTown_ElmLaboratory_Combate_Elm_Texto_6.1:
.string "You obtained an AERODACTYLITE\n"
	.string "from PROFESSOR ELM!!$"

NewBarkTown_ElmLaboratory_Combate_Elm_No::
msgbox NewBarkTown_ElmLaboratory_Combate_Elm_Texto_8 MSGBOX_AUTOCLOSE
release
end

NewBarkTown_ElmLaboratory_Combate_Elm_Texto_1:
	.string "The TEAM ROCKET has achieved what\n"
	.string "seemed impossible just a couple of\l"
	.string "years ago. Not only are KANTO and JOHTO\l"
	.string "starting to align their efforts, but\l"
	.string "also their most influential figures are\l"
	.string "collaborating.$"

NewBarkTown_ElmLaboratory_Combate_Elm_Texto_2:
	.string "Tell me, {PLAYER}, would you like to\n"
	.string "see the recent progress that we have\l"
	.string "achieved?$"

NewBarkTown_ElmLaboratory_Combate_Elm_Texto_3:
	.string "What is going to happen now? Let's get\n"
	.string "to work on the future, in 2 years, we\l"
	.string "won't recognize the land we walk on\l"
	.string "today!$"

NewBarkTown_ElmLaboratory_Combate_Elm_Texto_4:
	.string "I didn't expect less, my prototypes\n"
	.string "army is ready!$"

NewBarkTown_ElmLaboratory_Combate_Elm_Texto_5:
	.string "You combine the technology with\n"
	.string "technique, it is pretty interesting.$"

NewBarkTown_ElmLaboratory_Combate_Elm_Texto_6:
	.string "When everyone contributes a little,\n"
	.string "{PLAYER}, this is the result. BILL's\l"
	.string "PORYGON3, BLAINE's MAGMORTAR-Y, OAK's\l"
	.string "experiments{PAUSE 25}…{PAUSE 25} They're all now part of\l"
	.string "KANTO and JOHTO's efforts. The\l"
	.string "collaboration between these two\l"
	.string "regions will make them the dominant\l"
	.string "force in the POKÉMON world, and you'll\l"
	.string "be among their top leaders. That's why\l"
	.string "I'm giving you this.$"

NewBarkTown_ElmLaboratory_Combate_Elm_Texto_7:
	.string "BILL's main collaborator managed to\n"
	.string "develop this MEGA STONE, which restores\l"
	.string "AERODACTYL to 95% of its primal state.\l"
	.string "He told me to give you one if I saw you.$"

NewBarkTown_ElmLaboratory_Combate_Elm_Texto_8:
	.string "Hmphf, it is your choice, I thought you\n"
	.string "were interested in extraordinary\l"
	.string "things.$"

