Silph_3F_MapScripts::
	.byte 0

Silph3F_1::
end



Silph3F_2::
end



Silph3F_3::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 74
goto_if_gt Silph3F_3_Despues_Invasion
msgbox Silph3F_3_Texto_1 MSGBOX_AUTOCLOSE
release
end

Silph3F_3_Despues_Invasion::
msgbox Silph3F_3_Texto_2 MSGBOX_AUTOCLOSE
release
end

Silph3F_3_Texto_1:
.string "¡Os arrepentiréis de esto!$"

Silph3F_3_Texto_2:
.string "¡Tuvisteis vuestro merecido\n"
	.string "ROCKET!$"

Silph3F_4::
end



Silph3F_EventScript_Policia::
	trainerbattle_single TRAINER_ISAIAH_1, Silph3F_Text_PoliciaIntro, Silph3F_Text_PoliciaDefeated
	msgbox Silph3F_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



Silph3F_EventScript_Cientifico::
	trainerbattle_single TRAINER_ELLIOT_1, Silph3F_Text_CientificoIntro, Silph3F_Text_CientificoDefeated
	msgbox Silph3F_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



Silph3FDocumento_100::
msgbox Silph3FDocumento_Text_100, MSGBOX_SIGN   
end

Silph3FDocumento_Text_100:
.string "OFICINA CENTRAL DE SILPH S.A.\n"
	.string "P2$"
