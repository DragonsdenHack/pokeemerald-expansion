PokemonTower_5F_MapScripts::
	.byte 0

PokemonTower5F_1::
end



PokemonTower5F_2::
lock     
faceplayer     
msgbox PokemonTower5F_Text_2, MSGBOX_DEFAULT
release     
end

PokemonTower5F_Text_2:
.string "Todas las almas pueden ser\n"
.string "reconducidas.\l"
.string "Descansa aquí ROCKET y tal vez eso\l"
.string "te haga recapacitar sobre tus\l"
.string "actos pecaminosos.$"



PokemonTower5F_3::
end



PokemonTower5F_4::
end



PokemonTower5F_5::
end



PokemonTower5F_6::
end



PokemonTower5F_7::
end



PokemonTower5F_EventScript_Channeler::
	trainerbattle_single TRAINER_GRACE, PokemonTower5F_Text_ChannelerIntro, PokemonTower5F_Text_ChannelerDefeated
	msgbox PokemonTower5F_Text_ChannelerPostBattle, MSGBOX_AUTOCLOSE
	end



PokemonTower5F_EventScript_Channeler2::
	trainerbattle_single TRAINER_TANYA, PokemonTower5F_Text_Channeler2Intro, PokemonTower5F_Text_Channeler2Defeated
	msgbox PokemonTower5F_Text_Channeler2PostBattle, MSGBOX_AUTOCLOSE
	end



PokemonTower5F_EventScript_Channeler3::
	trainerbattle_single TRAINER_JENNY_1, PokemonTower5F_Text_Channeler3Intro, PokemonTower5F_Text_Channeler3Defeated
	msgbox PokemonTower5F_Text_Channeler3PostBattle, MSGBOX_AUTOCLOSE
	end



PokemonTower5F_EventScript_Channeler4::
	trainerbattle_single TRAINER_ALICE, PokemonTower5F_Text_Channeler4Intro, PokemonTower5F_Text_Channeler4Defeated
	msgbox PokemonTower5F_Text_Channeler4PostBattle, MSGBOX_AUTOCLOSE
	end


Callate1::
lock
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower5F_Warp_Escena_4_Move_1
waitmovement 0x0
warpsilent MAP_ROCKET_HIDEOUT_4F, 15, 0
release
end

PokemonTower5F_Warp_Escena_4_Move_1:
walk_in_place_right
step_end
