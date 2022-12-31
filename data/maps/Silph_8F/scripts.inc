Silph_8F_MapScripts::
	.byte 0

Silph8F_1::
end



Silph8F_2::
lock     
faceplayer     
msgbox Silph8F_Text_2, MSGBOX_DEFAULT
release     
end

Silph8F_Text_2:
.string "¡Vuestro JEFE es un cruel\n"
.string "dictador!\l"
.string "¡Solo usa a los POKÉMON como armas\l"
.string "para lograr sus fines!\l"
.string "¡Alguien así nunca se hará con el\l"
.string "mando de SILPH!$"



Silph8F_3::
end



Silph8F_4::
end



Silph8F_5::
end



Silph8F_6::
end



Silph8F_EventScript_Policia::
	trainerbattle_single TRAINER_ALLISON, Silph8F_Text_PoliciaIntro, Silph8F_Text_PoliciaDefeated
	msgbox Silph8F_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end




Silph8F_EventScript_Policia2::
	trainerbattle_single TRAINER_ISOBEL, Silph8F_Text_Policia2Intro, Silph8F_Text_Policia2Defeated
	msgbox Silph8F_Policia2PostBattle, MSGBOX_AUTOCLOSE
	end



Silph8F_EventScript_Cientifico::
	trainerbattle_single TRAINER_WADE, Silph8F_Text_CientificoIntro, Silph8F_Text_CientificoDefeated
	msgbox Silph8F_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



Silph8FDocumento_100::
msgbox Silph8FDocumento_Text_100, MSGBOX_SIGN   
end

Silph8FDocumento_Text_100:
.string "OFICINA CENTRAL DE SILPH S.A.\n"
	.string "P7$"
