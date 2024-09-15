SsAnne_10F_MapScripts::
	.byte 0

SsAnne10F_1::
end



SsAnne10F_2::
end



SsAnne10F_3::
end



SsAnne10F_4::
lock     
faceplayer     
msgbox SsAnne10F_Text_4, MSGBOX_DEFAULT
release     
end

SsAnne10F_Text_4:
	.string "The SS Anne is supposed to travel\n"
	.string "across regions, bringing trainers from\l"
	.string "all over the world. But all I see here are\l"
	.string "KANTO Pokémon!$"



SsAnne10F_EventScript_Chica::
	trainerbattle_single TRAINER_JESSICA_1, SsAnne10F_Text_ChicaIntro, SsAnne10F_Text_ChicaDefeated
	msgbox SsAnne10F_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



SsAnne10F_EventScript_Chico::
	trainerbattle_single TRAINER_SHANNON, SsAnne10F_Text_ChicoIntro, SsAnne10F_Text_ChicoDefeated
	msgbox SsAnne10F_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end
