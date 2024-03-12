Silph_2F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_2F_OnLoad
	.byte 0
	
SilphCo_2F_OnLoad:: @ 8161647
	call_if_unset FLAG_UNUSED_0x028, EventScript_Close2FDoor1
	call_if_unset FLAG_UNUSED_0x029, EventScript_Close2FDoor2
	end	

Chica_Iman::
lock
faceplayer
compare VAR_ROUTE130_STATE, 0
goto_if_gt Chica_Iman_2
msgbox Chica_Iman_Texto_1 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_ITEM
waitfanfare
giveitem ITEM_MAGNET
delay 10
setvar VAR_ROUTE130_STATE, 1
release
end

Chica_Iman_2::
msgbox Chica_Iman_Texto_2 MSGBOX_AUTOCLOSE
release
end

Chica_Iman_Texto_1:
.string "¡Oh, no!\n"
	.string "¡Espera!\l"
	.string "¡No me está permitido enseñarle\l"
	.string "ONDA TRUENO a tus POKÉMON!\l"
	.string "¡Pero puedo darte algo mejor!\l"
	.string "¡Mira!$"

Chica_Iman_Texto_2:
.string "Con ese IMÁN equipado en un\n"
	.string "POKÉMON, sus ataques eléctricos se\l"
	.string "verán potenciados en un 20%.\l"
	.string "¿No te parece mejor que ese\l"
	.string "aburrido movimiento de ONDA TRUENO\l"
	.string "que únicamente duerme los\l"
	.string "combates?$"



Silph2F_2::
end



Silph2F_3::
end



Silph2F_4::
end



Silph2F_5::
end



Silph2F_EventScript_Policia::
	trainerbattle_single TRAINER_DEMETRIUS, Silph2F_Text_PoliciaIntro, Silph2F_Text_PoliciaDefeated
	msgbox Silph2F_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



Silph2F_EventScript_Policia2::
	trainerbattle_single TRAINER_CAMDEN, Silph2F_Text_Policia2Intro, Silph2F_Text_Policia2Defeated
	msgbox Silph2F_Policia2PostBattle, MSGBOX_AUTOCLOSE
	end



Silph2F_EventScript_Cientifico::
	trainerbattle_single TRAINER_CLAUDE, Silph2F_Text_CientificoIntro, Silph2F_Text_CientificoDefeated
	msgbox Silph2F_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



Silph2F_EventScript_Cientifico2::
	trainerbattle_single TRAINER_IVAN, Silph2F_Text_Cientifico2Intro, Silph2F_Text_Cientifico2Defeated
	msgbox Silph2F_Cientifico2PostBattle, MSGBOX_AUTOCLOSE
	end



Silph2FDocumento_100::
msgbox Silph2FDocumento_Text_100, MSGBOX_SIGN   
end

Silph2FDocumento_Text_100:
.string "OFICINA CENTRAL DE SILPH S.A.\n"
	.string "P1$"
