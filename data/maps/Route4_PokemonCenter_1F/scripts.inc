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
	.string "You should be ashamed of appearing in\l"
	.string "the news because of that, you have\l"
	.string "turned a house upside down and stole\l"
	.string "all their TM DIG, I hope you weren't\l"
	.string "involved in that!$"



Route4PokemonCenter3::
lock     
faceplayer     
msgbox Route4_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

Route4_PokemonCenter_Text_3:
.string "PC is another basic service that you\n"
	.string "ROCKETs can use; along with POKÉMON\l"
	.string "CENTERS these are the only public\l"
	.string "services that you have access to. I\l"
	.string "wouldn't give you even those!$"



Route4PokemonCenter4::
lock     
faceplayer     
msgbox Route4_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

Route4_PokemonCenter_Text_4:
.string "Hey yo! Stop staring at my 6 belt's POKÉ\n"
	.string "BALLS! You ain't stealing ‘em!$"



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
	.string "aspirations. One of those that doesn't\l"
	.string "settle with a normal RATATTA nor EKANS.\l"
	.string "Listen up.$"

Route4_PokemonCenter_1F_Estafa_Texto_2:
.string "Would you like to obtain an\n"
	.string "extraordinary POKÉMON that will make\l"
	.string "you feared and respected, for just 500\l"
	.string "POKÉ? No one but me will make you such\l"
	.string "an offer!$"

Route4_PokemonCenter_1F_Estafa_Texto_3:
.string "Nice. Another fool that I've just\n"
	.string "scammed.$"

Route4_PokemonCenter_1F_Estafa_Texto_4:
.string "You really thought that anyone would\n"
	.string "sell a POKÉMON for that price? MAGIKARP\l"
	.string "is completely useless.$"

Route4_PokemonCenter_1F_Estafa_Texto_5:
.string "In addition, you are a ROCKET, I don't\n"
	.string "have to give you anything, “steal from\l"
	.string "the crook, a millennium off the hook” is\l"
	.string "what is said, isn't it?$"

Route4_PokemonCenter_1F_Estafa_Texto_6:
.string "You can't claim anything to the police,\n"
	.string "because they're after you, and no one\l"
	.string "will listen, nor believe in you. It's the\l"
	.string "ultimate business, selling air for 500\l"
	.string "POKÉ. Hahahaha!$"

Route4_PokemonCenter_1F_Estafa_Texto_7:
.string "Until never, ROCKET, you can't find me.\n"
	.string "Next time, think twice about who you do\l"
	.string "business with.$"

Route4_PokemonCenter_1F_Estafa_Texto_8:
.string "And I thought you ROCKET had a good\n"
	.string "nose for business. How disappointing.$"

Route4_PokemonCenter_1F_Estafa_Move_1:
walk_in_place_up
step_end

Route4_PokemonCenter_1F_Estafa_Move_2:
face_player
step_end
