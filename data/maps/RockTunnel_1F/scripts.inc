RockTunnel_1F_MapScripts::
	.byte 0

RockTunnel1F_1::
end



RockTunnel1F_2::
end



RockTunnel1F_3::
end



RockTunnel1F_4::
end



RockTunnel1F_5::
lock     
faceplayer     
msgbox RockTunnel1F_Text_5, MSGBOX_DEFAULT
release     
end

RockTunnel1F_Text_5:
.string "La rareza de KANGASKHAN está a la\n"
.string "altura de los FÓSILES DOMO y\l"
.string "HELIX, DRATINI o el extinto\l"
.string "AERODACTYL, los de la ZONA SAFARI\l"
.string "producen tan pocos que atrapar uno\l"
.string "allí es casi imposible, ¡un\l"
.string "POKEMANÍACO que se precie no puede\l"
.string "dejar pasar esta oportunidad!$"



RockTunnel1F_6::
lock     
faceplayer     
msgbox RockTunnel1F_Text_6, MSGBOX_DEFAULT
release     
end

RockTunnel1F_Text_6:
.string "Ese KANGASKHAN va a ser nuestro,\n"
.string "ningún ENTRENADOR GUAY será tan\l"
.string "guay como nosotros después de\l"
.string "atrapar a esa rareza.$"



RockTunnel1F_7::
end



RockTunnel1F_8::
end



RockTunnel1F_9::
end



RockTunnel1F_10::
end



RockTunnel1F_11::
end



RockTunnel1F_12::
end



RockTunnel1F_13::
end



RockTunnel1F_EventScript_Hiker::
	trainerbattle_single TRAINER_SHAWN, RockTunnel1F_Text_HikerIntro, RockTunnel1F_Text_HikerDefeated
	msgbox RockTunnel1F_Text_HikerPostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel1F_EventScript_Hiker2::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_8, RockTunnel1F_Text_Hiker2Intro, RockTunnel1F_Text_Hiker2Defeated
	msgbox RockTunnel1F_Text_Hiker2PostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel1F_EventScript_Hiker3::
	trainerbattle_single TRAINER_FERNANDO_1, RockTunnel1F_Text_Hiker3Intro, RockTunnel1F_Text_Hiker3Defeated
	msgbox RockTunnel1F_Text_Hiker3PostBattle, MSGBOX_AUTOCLOSE
	end


RockTunnel1F_EventScript_Chica::
	trainerbattle_single TRAINER_CEDRIC, RockTunnel1F_Text_ChicaIntro, RockTunnel1F_Text_ChicaDefeated
	msgbox RockTunnel1F_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel1F_EventScript_Necio::
	trainerbattle_single TRAINER_GILBERT, RockTunnel1F_Text_NecioIntro, RockTunnel1F_Text_NecioDefeated
	msgbox RockTunnel1F_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel1F_EventScript_Chica2::
	trainerbattle_single TRAINER_IRENE, RockTunnel1F_Text_Chica2Intro, RockTunnel1F_Text_Chica2Defeated
	msgbox RockTunnel1F_Text_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel1F_EventScript_Chica3::
	trainerbattle_single TRAINER_DIANA_2, RockTunnel1F_Text_Chica3Intro, RockTunnel1F_Text_Chica3Defeated
	msgbox RockTunnel1F_Text_Chica3PostBattle, MSGBOX_AUTOCLOSE
	end
