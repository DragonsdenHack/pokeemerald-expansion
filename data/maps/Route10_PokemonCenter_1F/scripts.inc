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
    .string "traducir$"



Route10PokemonCenter3::
lock     
faceplayer     
msgbox Route10_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

Route10_PokemonCenter_Text_3:
    .string "traducir$"



Route10PokemonCenter4::
end



Route10PokemonCenter5::
lock     
faceplayer     
msgbox Route10_PokemonCenter_Text_5, MSGBOX_DEFAULT
release     
end

Route10_PokemonCenter_Text_5:
    .string "traducir$"

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
	.string "Halt dich von mir fern, du\n"
	.string "Drecks-ROCKET! Ich bin ein Assistent\l"
	.string "von PROFESSOR EICH höchstpersönlich\l"
	.string "und gehöre damit der Elite dieser\l"
	.string "Region an! Jemand wie du verdient es\l"
	.string "nicht einmal, dieselbe Luft wie ich zu\l"
	.string "atmen!$"

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_2:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_3:
	.string "Willst du wirklich erleben, wie ich\n"
	.string "dich eigenhändig hier rauswerfe?$"

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_4:
	.string "Du hast keine Ahnung, mit wem du dich\n"
	.string "hier anlegst, ROCKET! Sobald PROFESSOR\l"
	.string "EICH davon erfährt, wirst du nie wieder\l"
	.string "das Tageslicht erblicken!$"

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_5:
	.string "Das wird ein Klacks. Ich mache dich\n"
	.string "fertig, bevor du Team Rocket\l"
	.string "buchstabieren kannst!$"

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_6:
.string "Das darf doch nicht wahr sein!$"

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_7:
.string "-{PLAYER} stiehlt einen EWIGSTEIN\n"
.string "von EICHs ASSISTENTEN!-$"

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_8:
	.string "NEIN! Ein ROCKET kann nicht so stark\n"
	.string "sein! Wenn ich das den Behörden melde,\l"
	.string "wirst du mir das Gestohlene zehnfach\l"
	.string "zurückzahlen!$"

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_9:
	.string "Genau so gehört sich das. Dreck\n"
	.string "wie du gehört in den Müll!$"

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Move_1:
emote_exclamation_mark
step_end
