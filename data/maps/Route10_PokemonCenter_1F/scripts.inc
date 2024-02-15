Route10_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, Route10_PokemonCenter_1F_OnTransition
	.byte 0

Route10_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_ROUTE10
	end

Route10_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

Route10PokemonCenter1::
end



Route10PokemonCenter2::
lock     
faceplayer     
msgbox Route10_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

Route10_PokemonCenter_Text_2:
    .string "A NUGGET is totally useless.\n"
    .string "So I sold it for ¥5000.$"



Route10PokemonCenter3::
lock     
faceplayer     
msgbox Route10_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

Route10_PokemonCenter_Text_3:
    .string "The types of POKéMON match up\n"
    .string "differently with each other.\p"
    .string "Every type is stronger than some\n"
    .string "types and weaker than others.$"



Route10PokemonCenter4::
end



Route10PokemonCenter5::
lock     
faceplayer     
msgbox Route10_PokemonCenter_Text_5, MSGBOX_DEFAULT
release     
end

Route10_PokemonCenter_Text_5:
    .string "I heard that ghosts haunt\n"
    .string "LAVENDER TOWN.$"

Route10_PokemonCenter_1F_Combate_Ayudante_Oak::
lock
faceplayer
compare VAR_UNUSED_0x40DB, 0
goto_if_gt Route10_PokemonCenter_1F_Combate_Ayudante_Oak_2
msgbox Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route10_PokemonCenter_1F_Combate_Ayudante_Oak_3
msgbox Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_AYUDANTE_1, Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_6
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_EVERSTONE
waitfanfare
msgbox Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_7 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 4, Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Move_1
waitmovement 0x0
msgbox Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_8 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40DB, 1
release
end

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_2::
lock
faceplayer
msgbox Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_4 MSGBOX_AUTOCLOSE
release
end

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_3::
lock
faceplayer
msgbox Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_9 MSGBOX_AUTOCLOSE
release
end

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_1:
.string "Stay away from me dirty ROCKET, I'm\n"
.string "a direct assistant of PROF. OAK\l"
.string "and part of the elite of this\l"
.string "region, someone of your level can't\l"
.string "even make eye contact with me.$"

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_2:
.string "...\n"
	.string "...$"

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_3:
.string "Do you want to see how I make you\n"
.string "leave by force?$"

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_4:
.string "You have no idea who you're\n"
.string "messing with, ROCKET, when OAK\l"
.string "knows about this, you won't\l"
.string "see the sunlight again.$"

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_5:
.string "It will be quick, faster than lighting.$"

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_6:
.string "This doesn't make any sense!$"

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_7:
.string "({PLAYER} stole an EVERSTONE from\n"
.string "OAK'S AIDE).$"

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_8:
	.string "NO! A ROCKET cannot be that strong!\n"
    .string "When I tell the authorities about this\l"
    .string "you'll return what you stole from me\l"
    .string "multiplied by 10!$"

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_9:
.string "That's it, just the way I like it. Trash to the\n"
.string "garbage can.$"

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Move_1:
emote_exclamation_mark
step_end
