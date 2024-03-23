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
.string "…$"

Bill_Garden_Warp_Text_YesNo:
    .string "…\n"
	.string "…\l"
	.string "Este póster está cubriendo un\l"
	.string "pequeño túnel que lleva a algún\l"
	.string "otro lugar.\l"
	.string "¿Quieres arrastrarte por el túnel?$"

Bill_Garden_Warp_move1:
emote_exclamation_mark
step_end

Bill_Garden_Policia_Atlas::
lockall
playse MUS_RG_VICTORY_ROAD
setweather WEATHER_RAIN
applymovement 17, Bill_Garden_Policia_Atlas_move_1
waitmovement 0x0
msgbox Bill_Garden_Policia_Atlas_text_1 MSGBOX_AUTOCLOSE
playse SE_DOOR
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
addobject 18
applymovement OBJ_EVENT_ID_PLAYER, Bill_Garden_Policia_Atlas_move_1
waitmovement 0x0
msgbox Bill_Garden_Policia_Atlas_text_2 MSGBOX_AUTOCLOSE
msgbox Bill_Garden_Policia_Atlas_text_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Bill_Garden_Policia_Atlas_move_2
applymovement 10, Bill_Garden_Policia_Atlas_move_3
applymovement 19, Bill_Garden_Policia_Atlas_move_3
applymovement 12, Bill_Garden_Policia_Atlas_move_2
applymovement 13, Bill_Garden_Policia_Atlas_move_2
applymovement 14, Bill_Garden_Policia_Atlas_move_2
applymovement 1, Bill_Garden_Policia_Atlas_move_2
applymovement 17, Bill_Garden_Policia_Atlas_move_2
applymovement 16, Bill_Garden_Policia_Atlas_move_2
delay 20
playmoncry SPECIES_SKARMORY, CRY_MODE_ENCOUNTER
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
delay 20
fadescreen 1
playse SE_M_FLY
delay 15
fadescreen 0
addobject 11
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Bill_Garden_Policia_Atlas_move_2
applymovement 10, Bill_Garden_Policia_Atlas_move_3
applymovement 19, Bill_Garden_Policia_Atlas_move_3
applymovement 12, Bill_Garden_Policia_Atlas_move_2
applymovement 13, Bill_Garden_Policia_Atlas_move_2
applymovement 14, Bill_Garden_Policia_Atlas_move_2
applymovement 1, Bill_Garden_Policia_Atlas_move_2
applymovement 17, Bill_Garden_Policia_Atlas_move_2
applymovement 16, Bill_Garden_Policia_Atlas_move_2
msgbox Bill_Garden_Policia_Atlas_text_4 MSGBOX_AUTOCLOSE
applymovement 11, Bill_Garden_Policia_Atlas_move_5
waitmovement 0x0
msgbox Bill_Garden_Policia_Atlas_text_5 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 18, Bill_Garden_Policia_Atlas_move_2
msgbox Bill_Garden_Policia_Atlas_text_6 MSGBOX_AUTOCLOSE
msgbox Bill_Garden_Policia_Atlas_text_7 MSGBOX_AUTOCLOSE
playmoncry SPECIES_SKARMORY, CRY_MODE_ENCOUNTER
delay 20
playse SE_M_FLY
setvar VAR_UNUSED_0x40FF, 1
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_6
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
setflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
warp MAP_ROUTE5, 23, 26
release
end

Bill_Garden_Policia_Atlas_move_1:
walk_in_place_up
step_end

Bill_Garden_Policia_Atlas_move_2:
emote_exclamation_mark
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

Bill_Garden_Policia_Atlas_text_1:
.string "Quedas preso ROCKET. Has cometido\n"
	.string "múltiples crímenes contra la\l"
	.string "región y resistido a la autoridad,\l"
	.string "ahora entréganos la patente\l"
	.string "robada.$"

Bill_Garden_Policia_Atlas_text_2:
.string "BILL: Qué pena que esto vaya a\n"
	.string "acabar así, debieron de informarte\l"
	.string "de las consecuencias que tenía\l"
	.string "meterse con el gran BILL en esta\l"
	.string "región.\l"
	.string "Qué desperdicio, perder a un\l"
	.string "ENTRENADOR de tu nivel de esta\l"
	.string "forma tan ridícula, parece que\l"
	.string "vuestros ADMINISTRADORES y\l"
	.string "EJECUTIVOS no son tan buenos a la\l"
	.string "hora de tomar decisiones.\l"
	.string "¿Qué se siente al saber que tus\l"
	.string "propios superiores te enviaron al\l"
	.string "matadero?\l"
	.string "No me extraña, no sois más que un\l"
	.string "puñado de ladrones sin principios\l"
	.string "ni criterio alguno.\l"
	.string "¡Ahora estás sol…!$"

Bill_Garden_Policia_Atlas_text_3:
.string "????: Te equivocas.$"

Bill_Garden_Policia_Atlas_text_4:
.string "BILL: ADMINISTRADOR JEFE ATLAS…$"

Bill_Garden_Policia_Atlas_text_5:
.string "ATLAS: No he podido evitar oír\n"
	.string "ciertos ataques hacia nuestra\l"
	.string "organización.\l"
	.string "Como puedes ver, aquí estoy.\l"
	.string "Te equivocas, en el TEAM ROCKET\l"
	.string "nunca dejamos solo a quién lo\l"
	.string "merezca.\l"
	.string "¿Falta de principios?\l"
	.string "¿Ladrones?\l"
	.string "Me temo que esos términos se\l"
	.string "quedan muy cortos para lo que\l"
	.string "vosotros hacéis en esta región.$"

Bill_Garden_Policia_Atlas_text_6:
.string "BILL: ¡DETENÉDLOS, A LOS DOS!\n"
	.string "¡QUE NO ESCAPEN!$"

Bill_Garden_Policia_Atlas_text_7:
.string "ATLAS: ¡SKARMORY, VUELO!$"
