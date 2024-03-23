Silph_6F_MapScripts::
map_script MAP_SCRIPT_ON_LOAD, SilphCo_6F_OnLoad
	.byte 0

SilphCo_6F_OnLoad::
	call_if_unset FLAG_UNUSED_0x031, EventScript_Close6FDoor
	end

Silph6F_1::
end



Silph6F_2::
end



Silph6F_3::
end



Silph6F_4::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 74
goto_if_gt Silph6F_4_Despues_Invasion
msgbox Silph6F_4_Texto_1 MSGBOX_AUTOCLOSE
release
end

Silph6F_4_Despues_Invasion::
msgbox Silph6F_4_Texto_2 MSGBOX_AUTOCLOSE
release
end

Silph6F_4_Texto_1:
	.string "If the MASTER BALL is what your\n"
	.string "organization wants, our PRESIDENT will\l"
	.string "never give you it!$"

Silph6F_4_Texto_2:
	.string "That kid gave you what you deserve!$"



Silph6F_5::
end



Silph6F_6::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 74
goto_if_gt Silph6F_6_Despues_Invasion
msgbox Silph6F_6_Texto_1 MSGBOX_AUTOCLOSE
release
end

Silph6F_6_Despues_Invasion::
msgbox Silph6F_6_Texto_2 MSGBOX_AUTOCLOSE
release
end

Silph6F_6_Texto_1:
	.string "Don't you see that he is a coward?$"

Silph6F_6_Texto_2:
	.string "He was so defenseless… To be honest I\n"
	.string "married just to take care of him.$"



Silph6F_7::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 74
goto_if_gt Silph6F_7_Despues_Invasion
msgbox Silph6F_7_Texto_1 MSGBOX_AUTOCLOSE
release
end

Silph6F_7_Despues_Invasion::
msgbox Silph6F_7_Texto_2 MSGBOX_AUTOCLOSE
release
end

Silph6F_7_Texto_1:
	.string "You will never conquer this company!$"

Silph6F_7_Texto_2:
	.string "You have failed, you are doomed!$"



Silph6F_8::
end



Silph6F_9::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 74
goto_if_gt Silph6F_9_Despues_Invasion
msgbox Silph6F_9_Texto_1 MSGBOX_NPC
release
end

Silph6F_9_Despues_Invasion::
msgbox Silph6F_9_Texto_2 MSGBOX_NPC
release
end

Silph6F_9_Texto_1:
	.string "Don't hurt me, I won't cause trouble!$"

Silph6F_9_Texto_2:
	.string "HAH, you got what you deserved,\n"
	.string "cowards!$"



Silph6F_10::
end



Silph6F_EventScript_Policia::
	trainerbattle_single TRAINER_ISAIAH_4, Silph6F_Text_PoliciaIntro, Silph6F_Text_PoliciaDefeated
	msgbox Silph6F_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



Silph6F_EventScript_Policia2::
	trainerbattle_single TRAINER_ISAIAH_5, Silph6F_Text_Policia2Intro, Silph6F_Text_Policia2Defeated
	msgbox Silph6F_Policia2PostBattle, MSGBOX_AUTOCLOSE
	end



Silph6FDocumento_100::
msgbox Silph6FDocumento_Text_100, MSGBOX_SIGN   
end

Silph6FDocumento_Text_100:
.string "SILPH CO. HEAD OFFICE\n"
    .string "6F$"

Silph_6F_Empleado_Llave::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 74
goto_if_gt Silph_6F_Empleado_Llave_4
compare VAR_ROUTE131_STATE, 1
goto_if_gt Silph_6F_Empleado_Llave_3
compare VAR_ROUTE131_STATE, 0
goto_if_gt Silph_6F_Empleado_Llave_2
msgbox Silph_6F_Empleado_Llave_Texto_1 MSGBOX_AUTOCLOSE
release
end

Silph_6F_Empleado_Llave_2::
msgbox Silph_6F_Empleado_Llave_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox Silph_6F_Empleado_Llave_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox Silph_6F_Empleado_Llave_Texto_5 MSGBOX_AUTOCLOSE
playse MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_CARD_KEY
msgbox Silph_6F_Empleado_Llave_Texto_7 MSGBOX_DEFAULT
waitse
setvar VAR_ROUTE131_STATE, 2
release
end

Silph_6F_Empleado_Llave_3::
msgbox Silph_6F_Empleado_Llave_Texto_6 MSGBOX_AUTOCLOSE
release
end

Silph_6F_Empleado_Llave_4:
msgbox Silph_6F_Empleado_Llave_Texto_2 MSGBOX_AUTOCLOSE
release
end

Silph_6F_Empleado_Llave_Texto_1:
.string "A ROCKET!\n"
	.string "Mercy, please!$"

Silph_6F_Empleado_Llave_Texto_2:
.string "You can't hurt me now!\n"
	.string "Muahaha!$"

Silph_6F_Empleado_Llave_Texto_3:
	.string "No! Don't hurt me!$"

Silph_6F_Empleado_Llave_Texto_4:
.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15} …{PAUSE 15}$"

Silph_6F_Empleado_Llave_Texto_5:
.string "What?\n"
	.string "The CARD KEY?\l"
	.string "I will give you whatever you\l"
	.string "want but have mercy!$"

Silph_6F_Empleado_Llave_Texto_6:
	.string "I already gave you what you wanted,\n"
	.string "leave me alone please!$"

Silph_6F_Empleado_Llave_Texto_7:
	.string "The EMPLOYEE gave you a CARD KEY!$"
