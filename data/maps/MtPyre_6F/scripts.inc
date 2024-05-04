MtPyre_6F_MapScripts::
	.byte 0

MtPyre_6F_EventScript_Valerie::
	trainerbattle_single TRAINER_TRAINER_543, MtPyre_6F_Text_ValerieIntro, MtPyre_6F_Text_ValerieDefeat,
	msgbox MtPyre_6F_Text_ValeriePostBattle, MSGBOX_AUTOCLOSE
	release
	end

MtPyre_6F_EventScript_RegisterValerie::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox MtPyre_6F_Text_ValerieRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_VALERIE_1
	release
	end

MtPyre_6F_EventScript_RematchValerie::
	trainerbattle_rematch TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieRematchIntro, MtPyre_6F_Text_ValerieRematchDefeat
	msgbox MtPyre_6F_Text_ValeriePostRematch, MSGBOX_AUTOCLOSE
	end

MtPyre_6F_EventScript_Cedric::
	trainerbattle_single TRAINER_TRAINER_544, MtPyre_6F_Text_CedricIntro, MtPyre_6F_Text_CedricDefeat
	msgbox MtPyre_6F_Text_CedricPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_6F_Text_ValerieIntro:
	.string "Cuando estoy aquí… siento un extraño\n"
	.string "poder dentro de mí.$"

MtPyre_6F_Text_ValerieDefeat:
	.string "Pues esta vez no lo he sentido mucho…{PAUSE 5}$"

MtPyre_6F_Text_ValeriePostBattle:
	.string "Quizás provenga del espíritu de los\n"
	.string "POKéMON que a veces acuden aquí…{PAUSE 5}$"

MtPyre_6F_Text_ValerieRegister:
	.string "Fufufu… I lost the match, but…\n"
	.string "I have this little ability…\p"
	.string "Without ever laying my hands on\n"
	.string "your POKéNAV… Hiyah!$"

MtPyre_6F_Text_ValerieRematchIntro:
	.string "Behind you…\n"
	.string "What is it…{PAUSE 5}$"

MtPyre_6F_Text_ValerieRematchDefeat:
	.string "Something faded away…{PAUSE 5}$"

MtPyre_6F_Text_ValeriePostRematch:
	.string "The POKéMON at rest here…\n"
	.string "Sometimes, they play…{PAUSE 5}$"

MtPyre_6F_Text_CedricIntro:
	.string "¿Te has perdido?\n"
	.string "¿Tienes miedo?$"

MtPyre_6F_Text_CedricDefeat:
	.string "Entonces no te perdiste…{PAUSE 5}$"

MtPyre_6F_Text_CedricPostBattle:
	.string "Pensé que un entrenador asustado\n"
	.string "tendría pánico y sería fácil de ganar.\p"
	.string "Me arrepiento de haber intentado eso…{PAUSE 5}$"

