PokemonTower_4F_MapScripts::
	.byte 0

PokemonTower4F_1::
end



PokemonTower4F_2::
end



PokemonTower4F_3::
end



PokemonTower4F_4::
end



PokemonTower4F_5::
end



PokemonTower4F_6::
end



PokemonTower4F_EventScript_Channeler::
	trainerbattle_single TRAINER_TARA, PokemonTower4F_Text_ChannelerIntro, PokemonTower4F_Text_ChannelerDefeated
	msgbox PokemonTower4F_Text_ChannelerPostBattle, MSGBOX_AUTOCLOSE
	end



PokemonTower4F_EventScript_Channeler2::
	trainerbattle_single TRAINER_MISSY, PokemonTower4F_Text_Channeler2Intro, PokemonTower4F_Text_Channeler2Defeated
	msgbox PokemonTower4F_Text_Channeler2PostBattle, MSGBOX_AUTOCLOSE
	end



PokemonTower4F_EventScript_Channeler3::
	trainerbattle_single TRAINER_BETH, PokemonTower4F_Text_Channeler3Intro, PokemonTower4F_Text_Channeler3Defeated
	msgbox PokemonTower4F_Text_Channeler3PostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_4F_Escena::
lock
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
setflag FLAG_HIDE_UNION_ROOM_PLAYER_7
setflag FLAG_HIDE_UNION_ROOM_PLAYER_8
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
setvar VAR_UNUSED_0x40F7, 46
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_4F_Escena_Move_1
warpsilent MAP_ROCKET_HIDEOUT_4F, 16, 0
waitmovement 0x0
release
end

PokemonTower_4F_Escena_Move_1:
walk_in_place_right
step_end
