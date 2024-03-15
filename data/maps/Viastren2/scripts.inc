ViasTren2_MapScripts::
	.byte 0

ViasTren2_1::
lock     
faceplayer     
msgbox ViasTren2_Text_1, MSGBOX_DEFAULT
release     
end

ViasTren2_Text_1:
	.string "We're halfway through the route from\n"
	.string "GOLDENROD to SAFFRON. If it feels too\l"
	.string "long, you can always use the BIKE!$"




ViasTren2_4::
lock     
faceplayer     
msgbox ViasTren2_Text_4, MSGBOX_DEFAULT
release     
end

ViasTren2_Text_4:
	.string "We've passed CHERRYGROVE CITY; from\n"
	.string "here, it's to the southwest.$"



ViasTren2_10::
lock     
faceplayer     
msgbox ViasTren2_Text_10, MSGBOX_DEFAULT
release     
end

ViasTren2_Text_10:
	.string "Building these tracks has made us\n"
	.string "realize how much land there is still left\l"
	.string "to explore.$"



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
