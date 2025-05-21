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
	.string "Wenn ihr hinter dem MEISTERBALL her\n"
	.string "seid, dann lasst euch eines sagen:\l"
	.string "Unser PRÄSIDENT wird ihn euch niemals\l"
	.string "geben!$"

Silph6F_4_Texto_2:
	.string "Dieser Junge hat euch richtig\n"
	.string "fertiggemacht!$"



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
	.string "Siehst du nicht, dass er ein\n"
	.string "Feigling ist?$"

Silph6F_6_Texto_2:
	.string "Er war völlig hilflos … Um ehrlich zu\n"
	.string "sein, habe ich ihn nur geheiratet, um\l"
	.string "mich um ihn zu kümmern.$"



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
	.string "Dieses Unternehmen wird niemals\n"
	.string "euch gehören!$"

Silph6F_7_Texto_2:
	.string "Ihr habt versagt!\n"
	.string "Euer Schicksal ist besiegelt!$"



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
	.string "Tu mir nichts! Ich werde auch keinen\n"
	.string "Widerstand leisten!$"

Silph6F_9_Texto_2:
	.string "HA! Das geschieht euch recht,\n"
	.string "ihr Feiglinge!$"



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
.string "EIN ROCKET!\n"
	.string "Gnade! BITTE!$"

Silph_6F_Empleado_Llave_Texto_2:
	.string "Du kannst mir jetzt nichts\n"
	.string "mehr anhaben! Muahaha!$"

Silph_6F_Empleado_Llave_Texto_3:
	.string "Nein! Bitte tu mir nicht weh!$"

Silph_6F_Empleado_Llave_Texto_4:
.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15} …{PAUSE 15}$"

Silph_6F_Empleado_Llave_Texto_5:
.string "Was?\n"
	.string "Der TÜRÖFFNER?\p"
	.string "Ich gebe dir, was immer du willst!\n"
	.string "Nur verschone mich!$"

Silph_6F_Empleado_Llave_Texto_6:
	.string "Du hast doch schon das bekommen, was\n"
	.string "du wolltest! Bitte lass mich in Ruhe!$"

Silph_6F_Empleado_Llave_Texto_7:
	.string "-Der ANGESTELLTE übergibt\n"
	.string "dir den TÜRÖFFNER!-$"
