Mision7Lab1_MapScripts::
	.byte 0


Mision7Lab4_Combate_Nidogod::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Mision7Lab4_Combate_Move_1
delay 20
playse SE_NOTE_C
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_1
waitmovement 0x0
delay 30
playse SE_NOTE_C_HIGH
delay 15
playmoncry SPECIES_NIDOKING, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_PORYGON, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox Mision7Lab4_Combate_Nidoking_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_142, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_NIDOKING, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
delay 40
setvar VAR_UNUSED_0x40F7, 199
release
end

Mision7Lab4_Combate_Mewtwo::
lock
delay 30
playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER
msgbox Mision7Lab4_Combate_Mewtwo_Texto_1 MSGBOX_DEFAULT
waitmoncry
delay 10
trainerbattle_no_intro TRAINER_TRAINER_143, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER
waitmoncry
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
removeobject 1
playse SE_FAINT
waitse
delay 40
delay 30
msgbox Mision7Lab4_Combate_Mewtwo_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 200
release
end

Mision7Lab4_Combate_Mewtwo_Texto_1:
.string "Mew!$"


Mision7Lab4_Combate_Mewtwo_Texto_3:
	.string "(The HARD DRIVE must be behind the\n"
	.string "paint of FUJI, I should search there)$"


Mision7Lab4_Disco_Duro::
compare VAR_UNUSED_0x40F7, 200
goto_if_gt Mision7Lab4_Disco_Duro_2
delay 20
msgbox Mision7Lab4_Disco_Duro_Texto_1 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_BLACK_SLUDGE
msgbox Mision7Lab4_Disco_Duro_Texto_2 MSGBOX_DEFAULT
waitfanfare
delay 20
setvar VAR_UNUSED_0x40F7, 201
msgbox Mision7Lab4_Disco_Duro_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq IcePath_Llamada_Giovanni_No
warpsilent MAP_NEO_CINNABAR_ISLAND, 24, 21
release
end

Mision7Lab4_Disco_Duro_Texto_1:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

Mision7Lab4_Disco_Duro_Texto_2:
.string "YOU OBTAINED THE HARD DRIVE!!$"

Mision7Lab4_Disco_Duro_Texto_3:
.string "Wanna return outdoor?$"

Mision7Lab4_Disco_Duro_2::
msgbox Mision7Lab4_Disco_Duro_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq IcePath_Llamada_Giovanni_No
warpsilent MAP_NEO_CINNABAR_ISLAND, 24, 21
release
end
