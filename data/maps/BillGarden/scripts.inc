BillGarden_MapScripts::
	.byte 0

BillGarden2::
end



BillGarden3::
end



BillGarden5::
end



BillGarden6::
end



BillGarden7::
end



BillGarden8::
end



BillGarden9::
end



BillGarden15::
end

Bill_Garden_Warp_No::
release
end

Bill_Garden_Warp::
msgbox Bill_Garden_Warp_text_1 MSGBOX_AUTOCLOSE
msgbox Bill_Garden_Warp_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Bill_Garden_Warp_No
warp MAP_ROUTE25_BILL_HOUSE, 13, 2
release
end

Bill_Garden_Warp_text_1:
.string "{PAUSE 20}…{PAUSE 20}$"

Bill_Garden_Warp_Text_YesNo:
    .string "…{PAUSE 20}\n"
	.string "…{PAUSE 20}\l"
    .string "This poster seems to be covering some\l"
	.string "tunnel that leads somewhere else.\l"
	.string "Wanna cross it?$"

Bill_Garden_Warp_move1:
emote_exclamation_mark
step_end

Bill_Garden_Policia_Atlas::
lockall
playse MUS_RG_VICTORY_ROAD
setweather WEATHER_RAIN
applymovement 17, Bill_Garden_Policia_Atlas_move_1
waitmovement 0x0
delay 10
msgbox Bill_Garden_Policia_Atlas_text_1 MSGBOX_AUTOCLOSE
playse SE_DOOR
opendoor 22, 3
waitdooranim
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
addobject 18
applymovement 18, VerdanturfTown_Move_9
waitmovement 0x0
closedoor 22, 3
waitdooranim
applymovement OBJ_EVENT_ID_PLAYER, Bill_Garden_Policia_Atlas_move_1
waitmovement 0x0
delay 15
msgbox Bill_Garden_Policia_Atlas_text_2 MSGBOX_AUTOCLOSE
delay 15
applymovement 18, Bill_Garden_Policia_Atlas_move_1.2
waitmovement 0x0
delay 10
msgbox Bill_Garden_Policia_Atlas_text_2.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 18, Bill_Garden_Policia_Atlas_move_1.3
waitmovement 0x0
delay 10
msgbox Bill_Garden_Policia_Atlas_text_2.2 MSGBOX_AUTOCLOSE
delay 15
playse SE_BREAKABLE_DOOR
applymovement 18, Bill_Garden_Policia_Atlas_move_1.1
waitmovement 0x0
waitse
msgbox Bill_Garden_Policia_Atlas_text_2.3 MSGBOX_AUTOCLOSE
delay 15
msgbox Bill_Garden_Policia_Atlas_text_3 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Bill_Garden_Policia_Atlas_move_2
applymovement 10, Bill_Garden_Policia_Atlas_move_3
delay 5
applymovement 19, Bill_Garden_Policia_Atlas_move_3
applymovement 12, Bill_Garden_Policia_Atlas_move_2
delay 5
applymovement 13, Bill_Garden_Policia_Atlas_move_2
applymovement 14, Bill_Garden_Policia_Atlas_move_2
delay 5
applymovement 1, Bill_Garden_Policia_Atlas_move_2
applymovement 17, Bill_Garden_Policia_Atlas_move_2
delay 5
applymovement 16, Bill_Garden_Policia_Atlas_move_2
delay 10
playmoncry SPECIES_SKARMORY, CRY_MODE_ENCOUNTER
waitmoncry
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
setfieldeffectargument 1, 0
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
addobject 11
waitfieldeffect FLDEFF_NPCFLY_OUT
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Bill_Garden_Policia_Atlas_move_2
applymovement 10, Bill_Garden_Policia_Atlas_move_3
delay 5
applymovement 19, Bill_Garden_Policia_Atlas_move_3
applymovement 12, Bill_Garden_Policia_Atlas_move_2
delay 5
applymovement 13, Bill_Garden_Policia_Atlas_move_2
applymovement 14, Bill_Garden_Policia_Atlas_move_2
delay 5
applymovement 1, Bill_Garden_Policia_Atlas_move_2
applymovement 17, Bill_Garden_Policia_Atlas_move_2
delay 5
applymovement 16, Bill_Garden_Policia_Atlas_move_2
delay 15
msgbox Bill_Garden_Policia_Atlas_text_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 11, Bill_Garden_Policia_Atlas_move_5
waitmovement 0x0
msgbox Bill_Garden_Policia_Atlas_text_5 MSGBOX_AUTOCLOSE
delay 15
applymovement 11, Bill_Garden_Policia_Atlas_move_5.1
waitmovement 0x0
delay 10
msgbox Bill_Garden_Policia_Atlas_text_5.1 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 18, Bill_Garden_Policia_Atlas_move_2.1
waitmovement 0x0
waitse
msgbox Bill_Garden_Policia_Atlas_text_6 MSGBOX_AUTOCLOSE
msgbox Bill_Garden_Policia_Atlas_text_7 MSGBOX_AUTOCLOSE
playmoncry SPECIES_SKARMORY, CRY_MODE_ENCOUNTER
delay 20
setfieldeffectargument 1, 0
dofieldeffect FLDEFF_NPCFLY_OUT
setvar VAR_UNUSED_0x40F8, 1
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_6
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
setflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
warpsilent MAP_ROUTE5, 23, 26
release
end

Bill_Garden_Policia_Atlas_move_1:
walk_in_place_up
step_end

Bill_Garden_Policia_Atlas_move_1.1:
walk_in_place_down
step_end

Bill_Garden_Policia_Atlas_move_1.2:
face_right
step_end

Bill_Garden_Policia_Atlas_move_1.3:
face_down
step_end

Bill_Garden_Policia_Atlas_move_2:
emote_exclamation_mark
step_end

Bill_Garden_Policia_Atlas_move_2.1:
walk_in_place_down
walk_in_place_right
step_end

Bill_Garden_Policia_Atlas_move_3:
face_down
emote_exclamation_mark
step_end

Bill_Garden_Policia_Atlas_move_4:
face_right
step_end

Bill_Garden_Policia_Atlas_move_5:
walk_in_place_up
step_end

Bill_Garden_Policia_Atlas_move_5.1:
delay_8
face_up
delay_16
face_down
delay_16
face_right
delay_16
face_left
delay_8
walk_in_place_left
step_end


Bill_Garden_Policia_Atlas_text_1:
	.string "You're under arrest, ROCKET. You have\n"
	.string "committed multiple crimes and resisted\l"
	.string "authority. Now, give us back the stolen\l"
	.string "patent.$"

Bill_Garden_Policia_Atlas_text_2:
.string "BILL: Qué pena que esto vaya a\n"
	.string "acabar así, debieron de informarte\l"
	.string "de las consecuencias que tenía\l"
	.string "meterse con el gran BILL en esta\l"
	.string "región.$"

Bill_Garden_Policia_Atlas_text_2.1:
	.string "Un desperdicio, perder a un\n"
	.string "ENTRENADOR de tu nivel de esta\l"
	.string "forma tan ridícula. Parece que\l"
	.string "vuestros ADMINISTRADORES y\l"
	.string "EJECUTIVOS no son tan buenos a la\l"
	.string "hora de tomar decisiones.$"

Bill_Garden_Policia_Atlas_text_2.2:
	.string "¿Qué se siente al saber que tus\n"
	.string "propios superiores te enviaron al\l"
	.string "matadero?\l"
	.string "No me extraña, no sois más que un\l"
	.string "puñado de ladrones sin principios\l"
	.string "ni criterio alguno.$"

Bill_Garden_Policia_Atlas_text_2.3:
	.string "¡Ahora estás sol…!$"

Bill_Garden_Policia_Atlas_text_3:
.string "????: You're wrong.$"

Bill_Garden_Policia_Atlas_text_4:
.string "BILL: ADMINISTRADOR JEFE ATLAS{PAUSE 5}…{PAUSE 5}$"

Bill_Garden_Policia_Atlas_text_5:
.string "ATLAS: No he podido evitar oír\n"
	.string "ciertos ataques hacia nuestra\l"
	.string "organización.\l"
	.string "Como puedes ver, aquí estoy.\l"
	.string "Te equivocas, en el TEAM ROCKET\l"
	.string "nunca dejamos solo a quién lo\l"
	.string "merezca.$"

Bill_Garden_Policia_Atlas_text_5.1:
	.string "¿Falta de principios?\n"
	.string "¿Ladrones?\l"
	.string "Me temo que esos términos se\l"
	.string "quedan muy cortos para lo que\l"
	.string "vosotros hacéis en esta región.$"

Bill_Garden_Policia_Atlas_text_6:
.string "BILL: DETAIN BOTH OF THEM! DO NOT LET\n"
	.string "THEM ESCAPE!$"

Bill_Garden_Policia_Atlas_text_7:
.string "ARCHER: SKARMORY, USE FLY!$"
