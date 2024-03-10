RuinValley_MapScripts::
	.byte 0

RuinValley1::
end


RuinValley2::
end


RuinValley3::
end


RuinValley4::
end


RuinValley5::
end


RuinValley6::
end


RuinValley7::
end


RuinValley8::
end


RuinValley9::
end


RuinValley10::
lock
msgbox RuinValley10_Texto_1 MSGBOX_SIGN
release
end

RuinValley10_Texto_1:
.string "Maldita puerta…\n"
	.string "El ALMIRANTE TOLO debe de saber\l"
	.string "cómo pasar por aquí, es lo único\l"
	.string "que nos separa del preciado\l"
	.string "ZAFIRO…$"


RuinValley11::
end


RuinValley12::
end


RuinValley13::
end


RuinValley14::
end


RuinValley15::
end


RuinValley16::
end


RuinValley17::
end


RuinValley18::
end



RuinValley_EventScript_Montanero::
	trainerbattle_single TRAINER_NICHOLAS, RuinValley_Text_MontaneroIntro, RuinValley_Text_MontaneroDefeated
	msgbox RuinValley_Text_MontaneroPostBattle, MSGBOX_AUTOCLOSE
	end



RuinValley_EventScript_Montanero2::
	trainerbattle_single TRAINER_BRENDAN_ROUTE_119_TREECKO, RuinValley_Text_Montanero2Intro, RuinValley_Text_Montanero2Defeated
	msgbox RuinValley_Text_Montanero2PostBattle, MSGBOX_AUTOCLOSE
	end



RuinValley_EventScript_Montanero3::
	trainerbattle_single TRAINER_KATHLEEN, RuinValley_Text_Montanero3Intro, RuinValley_Text_Montanero3Defeated
	msgbox RuinValley_Text_Montanero3PostBattle, MSGBOX_AUTOCLOSE
	end



RuinValley_EventScript_Montanero4::
	trainerbattle_single TRAINER_CLIFFORD, RuinValley_Text_Montanero4Intro, RuinValley_Text_Montanero4Defeated
	msgbox RuinValley_Text_Montanero4PostBattle, MSGBOX_AUTOCLOSE
	end



RuinValley_EventScript_Necio::
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_3, RuinValley_Text_NecioIntro, RuinValley_Text_NecioDefeated
	msgbox RuinValley_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



RuinValley_Encuentro_Aquiles::
lock
clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
addobject 18
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinValley_Encuentro_Aquiles_Move_1
waitmovement 0x0
msgbox RuinValley_Encuentro_Aquiles_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RuinValley_Encuentro_Aquiles_Move_2
applymovement 18, RuinValley_Encuentro_Aquiles_Move_3
waitmovement 0x0
delay 10
playse SE_PIN
applymovement 18, RuinValley_Encuentro_Aquiles_Move_4
waitmovement 0x0
playse MUS_ENCOUNTER_AQUA
msgbox RuinValley_Encuentro_Aquiles_Texto_2 MSGBOX_AUTOCLOSE
msgbox RuinValley_Encuentro_Aquiles_Texto_3 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement OBJ_EVENT_ID_PLAYER, RuinValley_Encuentro_Aquiles_Move_5
applymovement 18, RuinValley_Encuentro_Aquiles_Move_6
waitmovement 0x0
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
removeobject 18
playse MUS_RG_SEVII_ROUTE
setvar VAR_UNUSED_0x40F7, 97
release
end

RuinValley_Encuentro_Aquiles_Texto_1:
.string "????: ¡Es por aquí!\n"
	.string "¡Lo presiento!$"

RuinValley_Encuentro_Aquiles_Texto_2:
.string "¡Fuera de mi camino chico!$"

RuinValley_Encuentro_Aquiles_Texto_3:
.string "El POKÉMON CUENCA MAR duerme en lo\n"
	.string "más profundo de esa cámara\l"
	.string "sellada, no me hagas perder más el\l"
	.string "tiempo.$"



RuinValley_Encuentro_Aquiles_Move_1:
emote_exclamation_mark
walk_in_place_down
step_end

RuinValley_Encuentro_Aquiles_Move_2:
face_up
step_end

RuinValley_Encuentro_Aquiles_Move_3:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
step_end

RuinValley_Encuentro_Aquiles_Move_4:
emote_exclamation_mark
step_end

RuinValley_Encuentro_Aquiles_Move_5:
slide_right
walk_in_place_down
step_end

RuinValley_Encuentro_Aquiles_Move_6:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end
