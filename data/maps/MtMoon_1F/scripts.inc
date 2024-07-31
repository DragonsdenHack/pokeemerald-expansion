MtMoon_1F_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, MtMoon_1F_OnResume
	.byte 0

MtMoon_1F_OnResume:
	call MtMoon_1F_SetupEscapeWarp
	end

MtMoon_1F_SetupEscapeWarp::
	setescapewarp MAP_ROUTE4, 19, 6
	return

MtMoon1F_1::
end



MtMoon1F_2::
end



MtMoon1F_3::
end



MtMoon1F_4::
end



MtMoon1F_5::
end



MtMoon1F_6::
end



MtMoon1F_7::
end



MtMoon1F_8::
end



MtMoon1F_9::
end



MtMoon1F_11::
end



MtMoon1F_12::
end



MtMoon1F_13::
end



MtMoon1F_14::
end


MtMoon1F_EventScript_Hiker::
	trainerbattle_single TRAINER_KOICHI, MtMoon1F_Text_HikerIntro, MtMoon1F_Text_HikerDefeated
	msgbox MtMoon1F_Text_HikerPostBattle, MSGBOX_AUTOCLOSE
	end



MtMoon1F_EventScript_Joven::
	trainerbattle_single TRAINER_WENDY, MtMoon1F_Text_JovenIntro, MtMoon1F_Text_JovenDefeated
	msgbox MtMoon1F_Text_JovenPostBattle, MSGBOX_AUTOCLOSE
	end



MtMoon1F_EventScript_Chica::
	trainerbattle_single TRAINER_CINDY_4, MtMoon1F_Text_ChicaIntro, MtMoon1F_Text_ChicaDefeated
	msgbox MtMoon1F_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



MtMoon1F_EventScript_Cazabichos::
	trainerbattle_single TRAINER_TASHA, MtMoon1F_Text_CazabichosIntro, MtMoon1F_Text_CazabichosDefeated
	msgbox MtMoon1F_Text_CazabichosPostBattle, MSGBOX_AUTOCLOSE
	end



MtMoon1F_EventScript_Chica2::
	trainerbattle_single TRAINER_CINDY_5, MtMoon1F_Text_Chica2Intro, MtMoon1F_Text_Chica2Defeated
	msgbox MtMoon1F_Text_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



MtMoon1F_EventScript_Cientifico::
	trainerbattle_single TRAINER_FRANKLIN, MtMoon1F_Text_CientificoIntro, MtMoon1F_Text_CientificoDefeated
	msgbox MtMoon1F_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



MtMoon1F_EventScript_Cazabichos2::
	trainerbattle_single TRAINER_VALERIE_2, MtMoon1F_Text_Cazabichos2Intro, MtMoon1F_Text_Cazabichos2Defeated
	msgbox MtMoon1F_Text_Cazabichos2PostBattle, MSGBOX_AUTOCLOSE
	end



MtMoon1FDocumento_100::
msgbox MtMoon1FDocumento_Text_100, MSGBOX_SIGN   
end

MtMoon1FDocumento_Text_100:
.string "Be careful!\n"
	.string "ZUBAT are bloodsuckers!$"

MtMoon1F_Balding::
lock
faceplayer
msgbox MtMoon1F_Balding_Texto_1 MSGBOX_NPC
release
end

MtMoon1F_Balding_Texto_1:
	.string "You'd better watch your step! BROCK is\n"
	.string "my friend. Try robbing me, and our\l"
	.string "LEADER will crush you with his ROCK\l"
	.string "POKÉMON.$"

