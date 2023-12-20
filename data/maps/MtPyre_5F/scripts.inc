MtPyre_5F_MapScripts::
	.byte 0

@ Seems like the scripts for the 4F and 5F were swapped

MtPyre_4F_EventScript_Tasha::
	trainerbattle_single TRAINER_TRAINER_541, MtPyre_4F_Text_TashaIntro, MtPyre_4F_Text_TashaDefeat
	msgbox MtPyre_4F_Text_TashaPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_4F_Text_TashaIntro:
	.string "Me encanta pasar miedo… No puedo\n"
	.string "evitarlo... Y estar en este lugar… ¡me\l"
	.string "pone la carne de gallina!$"

MtPyre_4F_Text_TashaDefeat:
	.string "Odio perder…$"

MtPyre_4F_Text_TashaPostBattle:
	.string "Quiero ver algo terrorífico… No puedo\n"
	.string "irme de aquí todavía… Pero, mientras\l"
	.string "tanto…, ¿te quedarías a hacerme\l"
	.string "compañía?$"

