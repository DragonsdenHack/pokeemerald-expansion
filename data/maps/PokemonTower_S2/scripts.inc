PokemonTower_S2_MapScripts::
	.byte 0

PokemonTower_S2_Combate_Gengar::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S1_Combate_Kabutops_Move_1
delay 20
playmoncry SPECIES_GENGAR, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_GENGAR, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox RuinsOfAlph_S1_Combate_Kabutops_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_704, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
playse SE_FAINT
waitse
msgbox RuinsOfAlph_S1_Combate_Kabutops_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40FF, 14
release
end

PokemonTower_S2_Combate_Gengar_2::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S1_Combate_Kabutops_Move_1
delay 20
playmoncry SPECIES_GENGAR, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_GENGAR, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox RuinsOfAlph_S1_Combate_Kabutops_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_704, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
playse SE_FAINT
waitse
msgbox RuinsOfAlph_S1_Combate_Kabutops_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40FF, 15
release
end