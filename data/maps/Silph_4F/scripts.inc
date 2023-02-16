Silph_4F_MapScripts::
	.byte 0

Silph4F_1::
end



Silph4F_2::
end



Silph4F_3::
end



Silph4F_4::
end



Silph4F_5::
end



Silph4F_6::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 74
goto_if_gt Silph4F_6_Despues_Invasion
msgbox Silph4F_6_Texto_1 MSGBOX_AUTOCLOSE
release
end

Silph4F_6_Despues_Invasion::
msgbox Silph4F_6_Texto_2 MSGBOX_AUTOCLOSE
release
end

Silph4F_6_Texto_1:
.string "¡Oh, no! ¡Me encontraste!\n"
	.string "¡No me hagas daño!$"

Silph4F_6_Texto_2:
.string "¿Huh?\n"
	.string "¡Aún seguis aquí!$"



Silph4F_7::
end



Silph4F_8::
end



Silph4F_EventScript_Policia::
	trainerbattle_single TRAINER_PABLO_1, Silph4F_Text_PoliciaIntro, Silph4F_Text_PoliciaDefeated
	msgbox Silph4F_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



Silph4F_EventScript_Policia2::
	trainerbattle_single TRAINER_CHASE, Silph4F_Text_Policia2Intro, Silph4F_Text_Policia2Defeated
	msgbox Silph4F_Policia2PostBattle, MSGBOX_AUTOCLOSE
	end



Silph4F_EventScript_Cientifico::
	trainerbattle_single TRAINER_NED, Silph4F_Text_CientificoIntro, Silph4F_Text_CientificoDefeated
	msgbox Silph4F_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



Silph4FDocumento_100::
msgbox Silph4FDocumento_Text_100, MSGBOX_SIGN   
end

Silph4FDocumento_Text_100:
.string "OFICINA CENTRAL DE SILPH S.A.\n"
	.string "P3$"
