OutcastIsland_MapScripts::
	.byte 0

OutcastIsland1::
end


OutcastIsland2::
end


OutcastIsland3::
end


OutcastIsland4::
end


OutcastIsland5::
end


OutcastIsland6::
end


OutcastIsland7::
lock     
faceplayer     
msgbox OutcastIsland_Text_7, MSGBOX_DEFAULT
release     
end

OutcastIsland_Text_7:
.string "¡No conoces a SHARPEDO!\n"
.string "¡Un tipo pasó antes por aquí y me\l"
.string "sacó uno!\l"
.string "¡No existe triturar más mortífero\l"
.string "que el de SHARPEDO!$"


OutcastIsland8::
lock     
faceplayer     
msgbox OutcastIsland_Text_8, MSGBOX_DEFAULT
release     
end

OutcastIsland_Text_8:
.string "¡GYARADOS es el terror de los\n"
.string "mares!\l"
.string "¡No hay POKÉMON NO LEGENDARIO que\l"
.string "iguale su fuerza y ferocidad!$"



OutcastIsland_EventScript_Chica::
	trainerbattle_single TRAINER_LEONARDO, OutcastIsland_Text_ChicaIntro, OutcastIsland_Text_ChicaDefeated
	msgbox OutcastIsland_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



OutcastIsland_EventScript_Nadador::
	trainerbattle_single TRAINER_SYLVIA, OutcastIsland_Text_NadadorIntro, OutcastIsland_Text_NadadorDefeated
	msgbox OutcastIsland_Text_NadadorPostBattle, MSGBOX_AUTOCLOSE
	end



OutcastIsland_EventScript_Pescador::
	trainerbattle_single TRAINER_CRISTIAN, OutcastIsland_Text_PescadorIntro, OutcastIsland_Text_PescadorDefeated
	msgbox OutcastIsland_Text_PescadorPostBattle, MSGBOX_AUTOCLOSE
	end
