RockTunnel_2F_MapScripts::
	.byte 0

RockTunnel2F_2::
end



RockTunnel2F_3::
end



RockTunnel2F_4::
end



RockTunnel2F_5::
end



RockTunnel2F_6::
end



RockTunnel2F_7::
end



RockTunnel2F_8::
end



RockTunnel2F_9::
end



RockTunnel2F_10::
end



RockTunnel2F_11::
end



RockTunnel2F_12::
end



RockTunnel2F_15::
end



RockTunnel2F_22::
lock     
faceplayer     
msgbox RockTunnel2F_Text_22, MSGBOX_DEFAULT
release     
end

RockTunnel2F_Text_22:
.string "ARBOK, PERSIAN, TAUROS o SANDSLASH\n"
.string "son POKÉMON muy preciados por los\l"
.string "DOMADORES como yo, pero no hay\l"
.string "ninguno como KANGASKHAN, ¿tienes\l"
.string "idea del éxito en el que mis\l"
.string "espectáculos se convertirían con\l"
.string "ese POKÉMON a las órdenes de mi\l"
.string "látigo?$"



RockTunnel2F_28::
lock     
faceplayer     
msgbox RockTunnel2F_Text_28, MSGBOX_DEFAULT
release     
end

RockTunnel2F_Text_28:
.string "¿Te imaginas un CAZABICHOS con un\n"
.string "KANGASKHAN en su equipo?\l"
.string "¡Se acabarían todos los prejuicios\l"
.string "que nos señalan como unos\l"
.string "debiluchos!$"



RockTunnel2F_EventScript_Necio::
	trainerbattle_single TRAINER_RODNEY, RockTunnel2F_Text_NecioIntro, RockTunnel2F_Text_NecioDefeated
	msgbox RockTunnel2F_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Hiker::
	trainerbattle_single TRAINER_ATSUSHI, RockTunnel2F_Text_HikerIntro, RockTunnel2F_Text_HikerDefeated
	msgbox RockTunnel2F_Text_HikerPostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Chica::
	trainerbattle_single TRAINER_SPENCER, RockTunnel2F_Text_ChicaIntro, RockTunnel2F_Text_ChicaDefeated
	msgbox RockTunnel2F_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Chica2::
	trainerbattle_single TRAINER_ROLAND, RockTunnel2F_Text_Chica2Intro, RockTunnel2F_Text_Chica2Defeated
	msgbox RockTunnel2F_Text_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Necio2::
	trainerbattle_single TRAINER_RICHARD, RockTunnel2F_Text_Necio2Intro, RockTunnel2F_Text_Necio2Defeated
	msgbox RockTunnel2F_Text_Necio2PostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Necio3::
	trainerbattle_single TRAINER_HERMAN, RockTunnel2F_Text_Necio3Intro, RockTunnel2F_Text_Necio3Defeated
	msgbox RockTunnel2F_Text_Necio3PostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Hiker2::
	trainerbattle_single TRAINER_KIRK, RockTunnel2F_Text_Hiker2Intro, RockTunnel2F_Text_Hiker2Defeated
	msgbox RockTunnel2F_Text_Hiker2PostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Hiker3::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_7, RockTunnel2F_Text_Hiker3Intro, RockTunnel2F_Text_Hiker3Defeated
	msgbox RockTunnel2F_Text_Hiker3PostBattle, MSGBOX_AUTOCLOSE
	end
