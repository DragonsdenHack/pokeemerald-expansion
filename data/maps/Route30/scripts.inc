Route30_MapScripts::
	.byte 0

Route30_1::
end



Route30_2::
end



Route30_3::
end



Route30_4::
lock     
faceplayer     
msgbox Route30_Text_4, MSGBOX_DEFAULT
release     
end

Route30_Text_4:
.string "Me encantaría que los LÍDERES DE\n"
.string "GIMNASIO de JOHTO volvieran a ser\l"
.string "válidos para la LIGA POKÉMON,\l"
.string "desde la guerra apenas se dejan\l"
.string "ver.\l"
.string "Tal vez solo sea cuestión de\l"
.string "tiempo que vuelvan a formar parte\l"
.string "de la LIGA.$"



Route30_5::
end



Route30_6::
end



Route30_7::
end



Route30_8::
lock     
faceplayer     
msgbox Route30_Text_8, MSGBOX_DEFAULT
release     
end

Route30_Text_8:
.string "Esa CUEVA OSCURA…\n"
.string "Si mis POKÉMON pudieran\l"
.string "iluminarla, la exploraría.$"



Route30_9::
end



Route30_10::
end



Route30_11::
end



Route30_12::
end



Route30_13::
end



Route30_14::
lock     
faceplayer     
msgbox Route30_Text_14, MSGBOX_DEFAULT
release     
end

Route30_Text_14:
.string "Me encanta pasear por aquí de\n"
.string "buena mañana, la tranquilidad que\l"
.string "te da este lugar es única. Mi\l"
.string "marido prefiere contemplar el\l"
.string "paisaje desde más arriba.$"



Route30_EventScript_Sabio::
	trainerbattle_single TRAINER_TRENT_1, Route30_Text_SabioIntro, Route30_Text_SabioDefeated
	msgbox Route30_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end



Route30_EventScript_Cazabichos::
	trainerbattle_single TRAINER_LENNY, Route30_Text_CazabichosIntro, Route30_Text_CazabichosDefeated
	msgbox Route30_Text_CazabichosPostBattle, MSGBOX_AUTOCLOSE
	end
