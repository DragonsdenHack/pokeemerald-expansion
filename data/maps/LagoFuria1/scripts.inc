LagoFuria1_MapScripts::
	.byte 0


LagoFuria_S1_Combate_Taaban::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S1_Combate_Kabutops_Move_1
delay 20
playmoncry SPECIES_CLOYSTER, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_CLOYSTER, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
playmoncry SPECIES_CLOYSTER, CRY_MODE_ENCOUNTER
msgbox LagoFuria_S1_Combate_Taaban_Texto_1 MSGBOX_DEFAULT
waitmoncry
playse MUS_RG_ENCOUNTER_GYM_LEADER
trainerbattle_no_intro TRAINER_TRAINER_132, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_CLOYSTER, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox LagoFuria_S1_Combate_Taaban_Texto_3 MSGBOX_AUTOCLOSE
playse SE_FAINT
setvar VAR_MAUVILLE_CITY_STATE, 3
release
end

LagoFuria_S1_Combate_Taaban_Texto_1:
.string "¡Taab!$"

LagoFuria_S1_Combate_Taaban_Texto_3:
.string "Taab...$"
