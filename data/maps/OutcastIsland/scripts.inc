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
msgbox OutcastIsland_Text_7, MSGBOX_SIGN
release     
end

OutcastIsland_Text_7:
	.string "You haven't heard about SHARPEDO!\n"
	.string "Someone came through here earlier and\l"
	.string "got one for me! There's no more deadly\l"
	.string "crunch than SHARPEDO's one!$"


OutcastIsland8::
lock         
msgbox OutcastIsland_Text_8, MSGBOX_SIGN
release     
end

OutcastIsland_Text_8:
	.string "GYARADOS is the terror of the seas!\n"
	.string "There's no NON-LEGENDARY POKÉMON that\l"
	.string "equals its strength and ferocity!$"



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



OutcastIsland_EventScript_Pareja1::
	trainerbattle_single TRAINER_ATHENA, OutcastIsland_Text_Pareja1Intro, OutcastIsland_Text_Pareja1Defeated
	msgbox OutcastIsland_Text_Pareja1PostBattle, MSGBOX_AUTOCLOSE
	end



OutcastIsland_EventScript_Pareja2::
	trainerbattle_single TRAINER_ATHENA, OutcastIsland_Text_Pareja2Intro, OutcastIsland_Text_Pareja2Defeated
	msgbox OutcastIsland_Text_Pareja2PostBattle, MSGBOX_AUTOCLOSE
	end
