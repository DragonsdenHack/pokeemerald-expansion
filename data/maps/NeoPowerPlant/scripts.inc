NeoPowerPlant_MapScripts::
	.byte 0

NeoPowerPlant_1::
lock     
faceplayer     
msgbox NeoPowerPlant_Text_1, MSGBOX_DEFAULT
release     
end

NeoPowerPlant_Text_1:
	.string "Once, I saw the lighthouse keeper of\n"
	.string "the OLIVINE LIGHTHOUSE's MEGA\l"
	.string "AMPHAROS in action. The only POKÉMON\l"
	.string "I've seen surpass its electric\l"
	.string "discharges has been this P-ZAPDOS-.$"



NeoPowerPlant_2::
lock     
faceplayer     
msgbox NeoPowerPlant_Text_2, MSGBOX_DEFAULT
release     
end

NeoPowerPlant_Text_2:
	.string "The RADIO TOWER also draws power from\n"
	.string "this generator; this place is now one of\l"
	.string "the key hubs of KANTO.$"



NeoPowerPlant_3::
lock     
faceplayer     
msgbox NeoPowerPlant_Text_3, MSGBOX_DEFAULT
release     
end

NeoPowerPlant_Text_3:
	.string "The POWER PLANT DIRECTOR will be\n"
	.string "eternally grateful to you. Don't let\l"
	.string "that ZAPDOS out while you're here! Hey!$"




NeoPowerPlant_5::
lock     
faceplayer     
msgbox NeoPowerPlant_Text_5, MSGBOX_DEFAULT
release     
end

NeoPowerPlant_Text_5:
	.string "The new generator we've installed is\n"
	.string "very powerful; no wonder that ZAPDOS\l"
	.string "felt attracted to it.$"



NeoPowerPlant_8::
lock     
faceplayer     
msgbox NeoPowerPlant_Text_8, MSGBOX_NPC
release     
end

NeoPowerPlant_Text_8:
	.string "That POKÉMON... seemed made for\n"
	.string "generating electric discharges. I\l"
	.string "wouldn't want to receive one of its\l"
	.string "THUNDERBOLT…$"



NeoPowerPlant_9::
lock     
faceplayer     
msgbox NeoPowerPlant_Text_9, MSGBOX_NPC
release     
end

NeoPowerPlant_Text_9:
	.string "I contributed to the construction of\n"
	.string "the TRAIN TRACKS, and now I ensure the\l"
	.string "MAGNET TRAIN has a steady supply of\l"
	.string "energy.$"


NeoPowerPlant_Obtencion_Xurkitree::
lock
faceplayer
checkmoncatch SPECIES_XURKITREE
goto_if_eq VAR_RESULT, FALSE, NeoPowerPlant_Obtencion_Xurkitree_2
msgbox NeoPowerPlant_Obtencion_Xurkitree_Texto_3 MSGBOX_AUTOCLOSE
release
end

NeoPowerPlant_Obtencion_Xurkitree_2::
msgbox NeoPowerPlant_Obtencion_Xurkitree_Texto_1 MSGBOX_AUTOCLOSE
 playfanfare MUS_OBTAIN_TMHM
msgbox NeoPowerPlant_Obtencion_Xurkitree_Texto_2 MSGBOX_DEFAULT
	givemon SPECIES_XURKITREE, 70, ITEM_ELECTRIC_GEM
	waitfanfare  
release
end


NeoPowerPlant_Obtencion_Xurkitree_Texto_1:
	.string "{PLAYER}, I have no words to express\n"
	.string "my gratitude. It's hard to surprise\l"
	.string "someone like you with gifts, but there\l"
	.string "was a very strange POKÉMON attached to\l"
	.string "the generator. No one knew it, look.$"

NeoPowerPlant_Obtencion_Xurkitree_Texto_2:
.string "YOU OBTAINED A XURKITREE AT LV.70!$"

NeoPowerPlant_Obtencion_Xurkitree_Texto_3:
	.string "Our mechanics found it right after you\n"
	.string "defeated ZAPDOS. It was completely\l"
	.string "weakened, and we think it was this\l"
	.string "POKÉMON's energy, not the generator's,\l"
	.string "that attracted ZAPDOS. It seems\l"
	.string "P-ZAPDOS absorbed all of its volts,\l"
	.string "which is why we found it like this…$"


NeoPowerPlant_Presidente::
applymovement OBJ_EVENT_ID_PLAYER, NeoPowerPlant_Presidente_Move_5
waitmovement 0x0
msgbox NeoPowerPlant_Presidente_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox NeoPowerPlant_Presidente_Texto_3 MSGBOX_AUTOCLOSE
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement 10, NeoPowerPlant_Presidente_Move_1
applymovement OBJ_EVENT_ID_PLAYER, NeoPowerPlant_Presidente_Move_1
waitmovement 0x0
delay 15
applymovement 10, NeoPowerPlant_Presidente_Move_2
applymovement OBJ_EVENT_ID_PLAYER, NeoPowerPlant_Presidente_Move_3
waitmovement 0x0
msgbox NeoPowerPlant_Presidente_Texto_2 MSGBOX_AUTOCLOSE
applymovement 10, NeoPowerPlant_Presidente_Move_6
waitmovement 0x0
msgbox NeoPowerPlant_Presidente_Texto_4 MSGBOX_AUTOCLOSE
applymovement 10, NeoPowerPlant_Presidente_Move_4
waitmovement 0x0
msgbox NeoPowerPlant_Presidente_Texto_5 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
setvar VAR_UNUSED_0x40F7, 204
release
end

NeoPowerPlant_Presidente_Move_6:
face_right
step_end

NeoPowerPlant_Presidente_Move_5:
walk_in_place_up
step_end

NeoPowerPlant_Presidente_Move_4:
walk_in_place_down
step_end

NeoPowerPlant_Presidente_Move_3:
face_up
step_end

NeoPowerPlant_Presidente_Move_2:
face_down
step_end

NeoPowerPlant_Presidente_Move_1:
emote_exclamation_mark
face_right
step_end

NeoPowerPlant_Presidente_Texto_1:
	.string "{PLAYER}, right? I'm the new DIRECTOR\n"
	.string "of the POWER PLANT.$"

NeoPowerPlant_Presidente_Texto_2:
	.string "We've had to evacuate the entire area;\n"
	.string "its power is completely out of control.$"

NeoPowerPlant_Presidente_Texto_3:
	.string "We restored this place using the latest\n"
	.string "technology, thanks to which we were\l"
	.string "able to expedite the connection\l"
	.string "between KANTO and JOHTO. But it seems\l"
	.string "to have also attracted…$"

NeoPowerPlant_Presidente_Texto_4:
	.string "If it continues like this, it will cause\n"
	.string "an overload throughout the power\l"
	.string "plant, affecting KANTO and, by\l"
	.string "extension, JOHTO.$"

NeoPowerPlant_Presidente_Texto_5:
	.string "There are no more options, you must\n"
	.string "defeat it and catch it. We trust you.$"


NeoPowerPlant_Combate_Zapdos::
lock
faceplayer
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
msgbox NeoPowerPlant_Combate_Zapdos_Texto_1 MSGBOX_DEFAULT
waitmoncry
trainerbattle_no_intro TRAINER_TRAINER_231, NeoPowerPlant_Combate_Zapdos_Texto_2
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_M_CHARGE
delay 60
playse SE_THUNDER2
delay 40
setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
setflag FLAG_HIDE_BATTLE_TOWER_OPPONENT
removeobject 7
msgbox NeoPowerPlant_Combate_Zapdos_Texto_3 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, NeoPowerPlant_Combate_Zapdos_Move_1
waitmovement 0x0
msgbox NeoPowerPlant_Combate_Zapdos_Texto_4 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox NeoPowerPlant_Combate_Zapdos_Texto_5 MSGBOX_DEFAULT
giveegg SPECIES_ZAPDOS_PRIMAL
waitfanfare
delay 20
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
msgbox NeoPowerPlant_Combate_Zapdos_Texto_6 MSGBOX_AUTOCLOSE
msgbox NeoPowerPlant_Combate_Zapdos_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox NeoPowerPlant_Combate_Zapdos_Texto_8 MSGBOX_AUTOCLOSE
delay 20
msgbox NeoPowerPlant_Combate_Zapdos_Texto_9 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
removeobject 10
clearflag FLAG_RECEIVED_SHOAL_SHELL_3
fadescreen 1
delay 20
addobject 1
addobject 2
addobject 3
addobject 4
addobject 5
addobject 6
addobject 8
addobject 9
fadescreen 0
clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
setvar VAR_UNUSED_0x40F7, 204
release
end

NeoPowerPlant_Combate_Zapdos_Move_1:
emote_exclamation_mark
step_end

NeoPowerPlant_Combate_Zapdos_Texto_1:
.string "Zap!$"

NeoPowerPlant_Combate_Zapdos_Texto_2:
.string "Zap...$"

NeoPowerPlant_Combate_Zapdos_Texto_3:
	.string "(The P-ZAPDOS has been completely\n"
	.string "consumed!)$"

NeoPowerPlant_Combate_Zapdos_Texto_4:
	.string "(There is a POKÉMON EGG in the ashes)$"

NeoPowerPlant_Combate_Zapdos_Texto_5:
.string "YOU OBTAINED A MYSTERIOUS EGG!!$"

NeoPowerPlant_Combate_Zapdos_Texto_6:
	.string "GIOVANNI: {PLAYER}? Perfect, that\n"
	.string "ZAPDOS won't cause us any more trouble.$"

NeoPowerPlant_Combate_Zapdos_Texto_7:
	.string "Everything is ready to celebrate the II\n"
	.string "GOLDENROD MEETING, please come to\l"
	.string "RADIO TOWER as soon as possible.$"

NeoPowerPlant_Combate_Zapdos_Texto_8:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

NeoPowerPlant_Combate_Zapdos_Texto_9:
.string "I hope you are prepared.$"

NeoPowerPlant_RayoCarga::
lock     
faceplayer  
goto_if_set FLAG_NUEVA_814, NeoPowerPlant_RayoCarga_Despues
msgbox NeoPowerPlant_RayoCarga_Texto_1, MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem 652
msgbox NeoPowerPlant_RayoCarga_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
setflag FLAG_NUEVA_814
release     
end

NeoPowerPlant_RayoCarga_Despues::
msgbox NeoPowerPlant_RayoCarga_Texto_2, MSGBOX_NPC
release
end

NeoPowerPlant_RayoCarga_Texto_1:
	.string "Although it has been renovated, this\n"
	.string "PLANT is quite old, so we must avoid any\l"
	.string "system overload. Take this.$"

NeoPowerPlant_RayoCarga_Texto_1.1:
.string "{PLAYER} obtained MT70\n"
	.string "CHARGE BEAM from the mechanic!!$"

NeoPowerPlant_RayoCarga_Texto_2:
	.string "ELECTRIC TYPE POKÉMON are usually fast\n"
	.string "and dangerous, but they typically lack\l"
	.string "any means to boost their SPECIAL\l"
	.string "ATTACK. With CHARGE BEAM, they can do\l"
	.string "so while still dealing damage.$"






