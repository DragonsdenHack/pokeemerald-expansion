ViasTren2_MapScripts::
	.byte 0

ViasTren2_1::
lock     
faceplayer     
msgbox ViasTren2_Text_1, MSGBOX_DEFAULT
release     
end

ViasTren2_Text_1:
.string "Estamos en el ecuador del trayecto\n"
.string "TRIGAL-AZAFRÁN, si se te hace\l"
.string "demasiado largo, ¡puedes usar la BICI!$"




ViasTren2_4::
lock     
faceplayer     
msgbox ViasTren2_Text_4, MSGBOX_DEFAULT
release     
end

ViasTren2_Text_4:
.string "Hemos pasado CIUDAD CEREZO, desde\n"
.string "aquí la tenemos al suroeste.$"



ViasTren2_10::
lock     
faceplayer     
msgbox ViasTren2_Text_10, MSGBOX_DEFAULT
release     
end

ViasTren2_Text_10:
.string "El construir estas vías ha llevado a\n"
.string "darnos cuenta del mucho terreno por\l"
.string "explorar que aún nos queda.$"



ViasTren2_EventScript_Obrero::
	trainerbattle_single TRAINER_GABRIELLE_2, ViasTren2_Text_ObreroIntro, ViasTren2_Text_ObreroDefeated
	msgbox ViasTren2_Text_ObreroPostBattle, MSGBOX_AUTOCLOSE
	end



ViasTren2_EventScript_Obrero2::
	trainerbattle_single TRAINER_SAWYER_4, ViasTren2_Text_Obrero2Intro, ViasTren2_Text_Obrero2Defeated
	msgbox ViasTren2_Text_Obrero2PostBattle, MSGBOX_AUTOCLOSE
	end

ViasTren2_Escena::
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_5
clearflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
setvar VAR_ROUTE105_STATE, 5
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_4F_Escena_Move_1
warpsilent MAP_ROCKET_HIDEOUT_4F, 16, 0
waitmovement 0x0
release
end
