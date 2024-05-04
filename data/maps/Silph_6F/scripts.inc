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
.string "Si lo que queréis es la MÁSTER\n"
	.string "BALL, nuestro PRESIDENTE nunca\l"
	.string "cederá.$"

Silph6F_4_Texto_2:
.string "¡Ese niño os dio a todos vuestro\n"
	.string "merecido!$"



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
.string "¡No asustes a este empleado!\n"
	.string "¿No ves que es un cobarde?$"

Silph6F_6_Texto_2:
.string "Estaba tan indefenso…\n"
	.string "Al final me casé con él para\l"
	.string "cuidarlo.$"



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
.string "¡Jamás conquistaréis esta\n"
	.string "compañía!$"

Silph6F_7_Texto_2:
.string "¡Habéis fracasado, sois historia!$"



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
.string "¡No me hagas daño no daré\n"
	.string "problemas!$"

Silph6F_9_Texto_2:
.string "¡JAH tuvistéis vuestro merecido\n"
	.string "cobardes!$"



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
.string "OFICINA CENTRAL DE SILPH S.A.\n"
	.string "P5$"

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
.string "¡Un ROCKET!\n"
	.string "¡Piedad, por favor!$"

Silph_6F_Empleado_Llave_Texto_2:
.string "¡Ya no puedes hacerme nada!\n"
	.string "¡Huajajaja!$"

Silph_6F_Empleado_Llave_Texto_3:
.string "¡No! ¡No me hagas daño!$"

Silph_6F_Empleado_Llave_Texto_4:
.string "… … …{PAUSE 5}$"

Silph_6F_Empleado_Llave_Texto_5:
.string "¿Cómo?\n"
	.string "¿La LLAVE MAGNÉTICA?\l"
	.string "¡Te daré lo que quieras pero ten\l"
	.string "piedad!$"

Silph_6F_Empleado_Llave_Texto_6:
.string "¡Ya te he dado lo que querías\n"
	.string "déjame en paz por favor!$"

Silph_6F_Empleado_Llave_Texto_7:
.string "¡El EMPLEADO te entregó una LLAVE\n"
	.string "MAGNÉTICA!$"
