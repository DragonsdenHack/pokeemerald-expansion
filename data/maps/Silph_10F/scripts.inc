Silph_10F_MapScripts::
	.byte 0

Silph10F_1::
end



Silph10F_2::
end



Silph10F_3::
end



Silph10F_4::
end



Silph10F_5::
end



Silph10F_6::
end



Silph10F_EventScript_Policia::
	trainerbattle_single TRAINER_KATELYN_4, Silph10F_Text_PoliciaIntro, Silph10F_Text_PoliciaDefeated
	msgbox Silph10F_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



Silph10F_EventScript_Cientifico::
	trainerbattle_single TRAINER_ELLIOT_2, Silph10F_Text_CientificoIntro, Silph10F_Text_CientificoDefeated
	msgbox Silph10F_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



Silph10FDocumento_100::
msgbox Silph10FDocumento_Text_100, MSGBOX_SIGN   
end

Silph10FDocumento_Text_100:
.string "OFICINA CENTRAL DE SILPH S.A.\n"
	.string "P9$"
