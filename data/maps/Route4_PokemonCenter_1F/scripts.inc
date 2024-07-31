Route4_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, Route4_PokemonCenter_1F_OnTransition
	.byte 0

Route4_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_ROUTE4
	end

Route4_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

Route4PokemonCenter1::
end



Route4PokemonCenter2::
lock     
faceplayer     
msgbox Route4_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

Route4_PokemonCenter_Text_2:
	.string "-TEAM ROCKET robs CERULEAN citizens-\n"
	.string "You ought to be ashamed of showing up\l"
	.string "in the news for that. You'd turned a\l"
	.string "house upside-down to steal all of their\l"
	.string "TM DIGs. I hope you weren't involved\l"
	.string "with that!$"



Route4PokemonCenter3::
lock     
faceplayer     
msgbox Route4_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

Route4_PokemonCenter_Text_3:
	.string "The PC is another basic service\n"
	.string "available to you ROCKETs. Along with\l"
	.string "POKÉMON CENTERs, that's the only public\l"
	.string "service left to you, but if it were up to\l"
	.string "me, I wouldn't even give you access to\l"
	.string "them!$"



Route4PokemonCenter4::
lock     
faceplayer     
msgbox Route4_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

Route4_PokemonCenter_Text_4:
	.string "Hey, you! Quit staring at the six POKÉ\n"
	.string "BALLs on my belt! You ain't stealing 'em!$"



Route4PokemonCenter5::
end



Route4PokemonCenterDocumento_100::
msgbox Route4PokemonCenterDocumento_Text_100, MSGBOX_SIGN   
end

Route4PokemonCenterDocumento_Text_100:
.string "It's a newspaper.$"

Route4_PokemonCenter_1F_Estafa::
lock
faceplayer
msgbox Route4_PokemonCenter_1F_Estafa_Texto_1 MSGBOX_AUTOCLOSE
showmoneybox 0, 0
msgbox Route4_PokemonCenter_1F_Estafa_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route4_PokemonCenter_1F_Estafa_No
delay 10
playse SE_SHOP
removemoney 500 0
updatemoneybox
delay 80
hidemoneybox
msgbox Route4_PokemonCenter_1F_Estafa_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox Route4_PokemonCenter_1F_Estafa_Texto_4 MSGBOX_AUTOCLOSE
applymovement 5, Route4_PokemonCenter_1F_Estafa_Move_1
waitmovement 0x0
msgbox Route4_PokemonCenter_1F_Estafa_Texto_5 MSGBOX_AUTOCLOSE
msgbox Route4_PokemonCenter_1F_Estafa_Texto_6 MSGBOX_AUTOCLOSE
applymovement 5, Route4_PokemonCenter_1F_Estafa_Move_2
waitmovement 0x0
msgbox Route4_PokemonCenter_1F_Estafa_Texto_7 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
clearflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_INVISIBLE_NINJA_BOY
fadescreen 1
delay 20
removeobject 5
fadescreen 0
release
end


Route4_PokemonCenter_1F_Estafa_No::
hidemoneybox
msgbox Route4_PokemonCenter_1F_Estafa_Texto_8 MSGBOX_AUTOCLOSE
release
end

Route4_PokemonCenter_1F_Estafa_Texto_1:
	.string "You look like a ROCKET with big\n"
	.string "aspirations. One that won't settle for a\l"
	.string "normal RATTATA or EKANS. Listen up.$"

Route4_PokemonCenter_1F_Estafa_Texto_2:
	.string "Would you like to get your hands on an\n"
	.string "extraordinary POKÉMON that'll make you\l"
	.string "feared and respected-all for 500 POKÉ?\l"
	.string "You won't get a good haul with anyone\l"
	.string "but me!$"

Route4_PokemonCenter_1F_Estafa_Texto_3:
	.string "Nice. Hooked another fool.$"

Route4_PokemonCenter_1F_Estafa_Texto_4:
	.string "You really thought someone would sell a\n"
	.string "good catch for that price? MAGIKARP is\l"
	.string "just mealworm fodder.$"

Route4_PokemonCenter_1F_Estafa_Texto_5:
	.string "On top of that, you're a ROCKET. I don't\n"
	.string "owe you a dime. As they say, 'Steal from\l"
	.string "the crook, a millennium off the hook.'$"

Route4_PokemonCenter_1F_Estafa_Texto_6:
	.string "You can't even go to the POLICE since\n"
	.string "they're after you, and no one's gonna\l"
	.string "listen, let alone believe you. It's the\l"
	.string "ultimate business, selling bait for 500\l"
	.string "POKÉ.$"

Route4_PokemonCenter_1F_Estafa_Texto_7:
	.string "See you never, ROCKET. You won't hook\n"
	.string "me. Next time, think twice about your\l"
	.string "business partners.$"

Route4_PokemonCenter_1F_Estafa_Texto_8:
.string "And I thought you ROCKET had a good\n"
	.string "nose for business. How disappointing.$"

Route4_PokemonCenter_1F_Estafa_Move_1:
walk_in_place_up
step_end

Route4_PokemonCenter_1F_Estafa_Move_2:
face_player
step_end
