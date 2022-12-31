Silph_5F_MapScripts::
	.byte 0

Silph5F_1::
end



Silph5F_2::
end



Silph5F_3::
lock     
faceplayer     
msgbox Text_3, MSGBOX_DEFAULT
release     
end

Text_3:
.string "Nuestra seguridad se encargará de\n"
.string "todos vosotros sabandijas…$"



Silph5F_4::
end



Silph5F_5::
end



Silph5F_6::
end



Silph5F_7::
end



Silph5F_8::
end



Silph5F_9::
end



Silph5F_EventScript_Cientifico::
	trainerbattle_single TRAINER_NED, Silph5F_Text_CientificoIntro, Silph5F_Text_CientificoDefeated
	msgbox Silph5F_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



Silph5F_EventScript_Policia::
	trainerbattle_single TRAINER_ISAIAH_2, Silph5F_Text_PoliciaIntro, Silph5F_Text_PoliciaDefeated
	msgbox Silph5F_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



Silph5F_EventScript_Policia2::
	trainerbattle_single TRAINER_ISAIAH_3, Silph5F_Text_Policia2Intro, Silph5F_Text_Policia2Defeated
	msgbox Silph5F_Policia2PostBattle, MSGBOX_AUTOCLOSE
	end



Silph5F_EventScript_Chico::
	trainerbattle_single TRAINER_ANNA_AND_MEG_1, Silph5F_Text_ChicoIntro, Silph5F_Text_ChicoDefeated
	msgbox Silph5F_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end


Silph5FDocumento_100::
lock     
msgbox Silph5FDocumento_Text_100, MSGBOX_DEFAULT
release     
end

Silph5FDocumento_Text_100:
	.string "¡Un INFORME sobre los POKéMON!\p"
	.string "PORYGON, el primer POKéMON\n"
	.string "virtual, se creó en el LABORATORIO\l"
	.string "POKéMON.$"



Silph5FDocumento_101::
lock     
msgbox Silph5FDocumento_Text_101, MSGBOX_DEFAULT
release     
end

Silph5FDocumento_Text_101:
	.string "¡Un INFORME sobre los POKéMON!\p"
	.string "Se ha confirmado que algunos\n"
	.string "POKéMON evolucionan cuando\l"
	.string "se realiza un intercambio.$"



Silph5FDocumento_102::
lock     
msgbox Silph5FDocumento_Text_102, MSGBOX_DEFAULT
release     
end

Silph5FDocumento_Text_102:
	.string "¡Un INFORME sobre los POKéMON!\p"
	.string "¡Confirmadas más de 350 técnicas\n"
	.string "POKéMON!$"



Silph5FDocumento_103::
msgbox Silph5FDocumento_Text_103, MSGBOX_SIGN   
end

Silph5FDocumento_Text_103:
.string "OFICINA CENTRAL DE SILPH S.A.\n"
	.string "P4$"
