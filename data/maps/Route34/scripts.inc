Route34_MapScripts::
	.byte 0

Route34_1::
end



Route34_2::
lock     
faceplayer     
msgbox Route34_Text_2, MSGBOX_DEFAULT
release     
end

Route34_Text_2:
.string "Los ancianos que se ocupan de la\n"
.string "GUARDERÍA están de vacaciones,\l"
.string "dicen que no volverán hasta que la\l"
.string "relación KANTO-JOHTO se aclare.$"



Route34_3::
end



Route34_9::
lock     
faceplayer     
msgbox Route34_Text_9, MSGBOX_DEFAULT
release     
end

Route34_Text_9:
.string "¡Cada vez pican menos peces por\n"
.string "aquí!\l"
.string "¡Todos los POKÉMON acuáticos se\l"
.string "alejan de los alrededores de\l"
.string "TRIGAL como de la peste!$"



Route34_10::
end



Route34_11::
lock     
faceplayer     
msgbox Route34_Text_11, MSGBOX_DEFAULT
release     
end

Route34_Text_11:
.string "CIUDAD TRIGAL está irreconocible,\n"
.string "¡la vida moderna se ha apoderado\l"
.string "de ella!$"



Route34_12::
end



Route34_13::
end



Route34_14::
end



Route34_EventScript_Guarda::
	trainerbattle_single TRAINER_REED, Route34_Text_GuardaIntro, Route34_Text_GuardaDefeated
	msgbox Route34_Text_GuardaPostBattle, MSGBOX_AUTOCLOSE
	end



Route34_EventScript_Guarda2::
	trainerbattle_single TRAINER_CALLIE, Route34_Text_Guarda2Intro, Route34_Text_Guarda2Defeated
	msgbox Route34_Text_Guarda2PostBattle, MSGBOX_AUTOCLOSE
	end



Route34_EventScript_Karateka::
	trainerbattle_single TRAINER_CALE, Route34_Text_KaratekaIntro, Route34_Text_KaratekaDefeated
	msgbox Route34_Text_KaratekaPostBattle, MSGBOX_AUTOCLOSE
	end



Route34_EventScript_Guay::
	trainerbattle_single TRAINER_HENRY, Route34_Text_GuayIntro, Route34_Text_GuayDefeated
	msgbox Route34_Text_GuayPostBattle, MSGBOX_AUTOCLOSE
	end



Route34_EventScript_Rico::
	trainerbattle_single TRAINER_HENRY, Route34_Text_RicoIntro, Route34_Text_RicoDefeated
	msgbox Route34_Text_RicoPostBattle, MSGBOX_AUTOCLOSE
	end
