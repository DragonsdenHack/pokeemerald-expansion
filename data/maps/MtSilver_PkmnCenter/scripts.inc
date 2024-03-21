MtSilver_PkmnCenter_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, MtSilver_PokemonCenter_1F_OnTransition
	.byte 0

MtSilver_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_MT_SILVER
	end

MtSilver_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

MtSilverPkmnCenter1::
end



MtSilverPkmnCenter2::
lock     
faceplayer  
msgbox MtSilverPkmnCenter2_Campeona_Anciana_Texto_3 MSGBOX_AUTOCLOSE   
compare VAR_SECRET_BASE_HIGH_TV_FLAGS, 3
goto_if_gt MtSilverPkmnCenter2_Campeona_Anciana
release     
end

MtSilverPkmnCenter2_Campeona_Anciana::
delay 20
msgbox MtSilverPkmnCenter2_Campeona_Anciana_Texto_4 MSGBOX_AUTOCLOSE
delay 20
applymovement 2, MtSilverPkmnCenter2_Campeona_Anciana_Move_1
waitmovement 0x0
msgbox MtSilverPkmnCenter2_Campeona_Anciana_Texto_5 MSGBOX_AUTOCLOSE
delay 20
applymovement 2, MtSilverPkmnCenter2_Campeona_Anciana_Move_2
waitmovement 0x0
msgbox MtSilverPkmnCenter2_Campeona_Anciana_Texto_6 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
setflag FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS
fadescreen 1
delay 20
removeobject 2
fadescreen 0
setvar VAR_SECRET_BASE_HIGH_TV_FLAGS, 5
release
end

MtSilverPkmnCenter2_Campeona_Anciana_Move_1:
face_up
step_end

MtSilverPkmnCenter2_Campeona_Anciana_Move_2:
face_player
step_end

MtSilverPkmnCenter2_Campeona_Anciana_Texto_2:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

MtSilverPkmnCenter2_Campeona_Anciana_Texto_3:
	.string "Are you curious to meet my team? I'm\n"
	.string "afraid you'll have to live with that\l"
	.string "curiosity, young one. I belong to\l"
	.string "another generation, and only fiction\l"
	.string "can behold what could have been a\l"
	.string "battle between us in our primes.$"

MtSilverPkmnCenter2_Campeona_Anciana_Texto_4:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

MtSilverPkmnCenter2_Campeona_Anciana_Texto_5:
	.string "So AGATHA is in the place… It was to be\n"
	.string "expected, she always clung to POKÉMON\l"
	.string "TOWER.$"

MtSilverPkmnCenter2_Campeona_Anciana_Texto_6:
	.string "Thank you, kid, I'll go talk to my old\n"
	.string "friend. I know it's a long journey, but if\l"
	.string "you feel like coming back around, you'll\l"
	.string "be welcomed.$"


MtSilver_PkmnCenter_Text_2:
	.string "Ah, yes… I taught AGATHA everything\n"
	.string "she knows. Although she could never\l"
	.string "come close to my mastery over the\l"
	.string "GHOST-TYPE, she did become part of the\l"
	.string "ELITE FOUR. … … Are you curious to know\l"
	.string "my team? I'm afraid you'll have to live\l"
	.string "with that curiosity, young one. I belong\l"
	.string "to another generation, and only in\l"
	.string "fiction can what might have happened in\l"
	.string "a possible duel between our teams in\l"
	.string "our prime exist.$"



MtSilverPkmnCenter3::
lock     
faceplayer     
msgbox MtSilver_PkmnCenter_Text_3, MSGBOX_DEFAULT
compare VAR_SECRET_BASE_LOW_TV_FLAGS, 7
goto_if_gt MtSilverPkmnCenter3_2
release     
end

MtSilver_PkmnCenter_Text_3:
	.string "If only KOGA knew… I once possessed\n"
	.string "the deadliest POISON-TYPE POKÉMON of\l"
	.string "all time; with it, I was able to be\l"
	.string "crowned CHAMPION half a century ago.\l"
	.string "Although there are no records of it, it\l"
	.string "only exists in my memory and in the\l"
	.string "memories of the few who remain from\l"
	.string "that time...$"

MtSilverPkmnCenter3_2::
delay 20
msgbox MtSilverPkmnCenter3_2_Texto_1 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 3, MtSilverPkmnCenter3_2_Move_1
waitmovement 0x0
msgbox MtSilverPkmnCenter3_2_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox MtSilverPkmnCenter3_2_Texto_3 MSGBOX_AUTOCLOSE
msgbox MtSilverPkmnCenter3_2_Texto_4 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
clearflag FLAG_RECEIVED_SHOAL_SHELL_2
fadescreen 1
delay 20
removeobject 3
fadescreen 0
setvar VAR_SECRET_BASE_LOW_TV_FLAGS, 9
release
end

MtSilverPkmnCenter3_2_Move_1:
emote_exclamation_mark
step_end

MtSilverPkmnCenter3_2_Texto_1:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

MtSilverPkmnCenter3_2_Texto_2:
	.string "Then you also know about the passage\n"
	.string "beyond CIANWOOD CITY, you're quite well\l"
	.string "informed, despite your young age.$"

MtSilverPkmnCenter3_2_Texto_3:
	.string "If my wife is there, I will return to our\n"
	.string "little house, away from everything.\l"
	.string "Nothing holds me here.$"

MtSilverPkmnCenter3_2_Texto_4:
	.string "Are you {PLAYER}? Thank you\n"
	.string "{PLAYER}, if you decide to come back\l"
	.string "around, you'll be welcomed.$"



MtSilverPkmnCenter4::
lock     
faceplayer     
msgbox MtSilver_PkmnCenter_Text_4, MSGBOX_DEFAULT
release     
end

MtSilver_PkmnCenter_Text_4:
.string "Hohoho!\n"
.string "Me a JOHTO ex-champion?\l"
.string "I slipped in here by coming around the\l"
.string "other side of the mountain, but keep\l"
.string "between us!$"
