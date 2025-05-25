TwoIsland_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_PokemonCenter_1F_OnTransition
	.byte 0

TwoIsland_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_FIVE_ISLAND
	end

TwoIsland_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

TwoIslandPokemonCenter_1::
end



TwoIslandPokemonCenter_2::
lock     
faceplayer     
msgbox TwoIsland_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

TwoIsland_PokemonCenter_Text_2:
	.string "Du bestreitest ein Abenteuer, auf dem\n"
	.string "du jedes POKéMON fangen willst? {PAUSE 25}…{PAUSE 25}\p"
	.string "Unglaublich! Gib mir bitte Bescheid,\n"
	.string "wenn du ein Starkes gefangen hast!$"



TwoIslandPokemonCenter_3::
lock     
faceplayer  
msgbox TwoIsland_PokemonCenter_Text_3, MSGBOX_DEFAULT
compare VAR_ROUTE119_STATE, 2
goto_if_eq TwoIslandPokemonCenter_3_Despues
release     
end

TwoIsland_PokemonCenter_Text_3:
	.string "Ich bin gerade dabei, ein Essen für\n"
	.string "eine gewisse Berühmtheit zuzubereiten.$"

TwoIslandPokemonCenter_Move_1:
emote_exclamation_mark
step_end

TwoIslandPokemonCenter_Move_2:
delay_8
face_right
delay_16
delay_8
walk_in_place_right
delay_16
face_player
step_end

TwoIslandPokemonCenter_Move_3:
face_right
step_end

TwoIslandPokemonCenter_Move_4:
face_player
step_end

TwoIslandPokemonCenter_Move_5:
walk_in_place_left
step_end

TwoIslandPokemonCenter_3_Despues::
lock     
delay 10
msgbox TwoIslandPokemonCenter_3_Despues_Texto_1, MSGBOX_AUTOCLOSE
delay 10
msgbox TwoIslandPokemonCenter_3_Despues_Texto_2, MSGBOX_AUTOCLOSE
delay 10
msgbox TwoIslandPokemonCenter_3_Despues_Texto_3, MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 3, TwoIslandPokemonCenter_Move_1
waitmovement 0x0
waitse
msgbox TwoIslandPokemonCenter_3_Despues_Texto_4, MSGBOX_AUTOCLOSE
delay 10
msgbox TwoIslandPokemonCenter_3_Despues_Texto_5, MSGBOX_AUTOCLOSE
msgbox TwoIslandPokemonCenter_3_Despues_Texto_6, MSGBOX_AUTOCLOSE
delay 10
applymovement 3, TwoIslandPokemonCenter_Move_2
waitmovement 0x0
delay 10
msgbox TwoIslandPokemonCenter_3_Despues_Texto_7, MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, TwoIslandPokemonCenter_Move_1
waitmovement 0x0
waitse
msgbox TwoIslandPokemonCenter_3_Despues_Texto_8, MSGBOX_AUTOCLOSE
delay 10
applymovement 3, TwoIslandPokemonCenter_Move_3
waitmovement 0x0
delay 10
msgbox TwoIslandPokemonCenter_3_Despues_Texto_9, MSGBOX_AUTOCLOSE
delay 30
applymovement 3, TwoIslandPokemonCenter_Move_4
waitmovement 0x0
delay 10
msgbox TwoIslandPokemonCenter_3_Despues_Texto_10, MSGBOX_AUTOCLOSE
playse 597
delay 15
msgbox TwoIslandPokemonCenter_3_Despues_Texto_11, MSGBOX_DEFAULT
trainerbattle_no_intro TRAINER_TRAINER_732, TwoIslandPokemonCenter_3_Despues_Texto_12
playse SE_BREAKABLE_DOOR
applymovement 3, TwoIslandPokemonCenter_Move_5
waitmovement 0x0
waitse
msgbox TwoIslandPokemonCenter_3_Despues_Texto_13, MSGBOX_AUTOCLOSE
delay 10
applymovement 3, TwoIslandPokemonCenter_Move_4
waitmovement 0x0
delay 10
msgbox TwoIslandPokemonCenter_3_Despues_Texto_14, MSGBOX_AUTOCLOSE
playse SE_BALL_TRADE
waitse
delay 10
playse SE_PIN
applymovement 3, TwoIslandPokemonCenter_Move_1
waitmovement 0x0
waitse
delay 5
playfanfare MUS_OBTAIN_BADGE
msgbox TwoIslandPokemonCenter_3_Despues_Texto_15 MSGBOX_DEFAULT
waitfanfare
msgbox TwoIslandPokemonCenter_3_Despues_Texto_16, MSGBOX_AUTOCLOSE
delay 15
msgbox TwoIslandPokemonCenter_3_Despues_Texto_17, MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_142
setvar VAR_ROUTE119_STATE, 3
fadescreen 1
delay 10
removeobject 3
fadescreen 0
release     
end

TwoIslandPokemonCenter_3_Despues_Texto_1:
	.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10}$"

TwoIslandPokemonCenter_3_Despues_Texto_2:
	.string "Was willst du, Kleiner?$"

TwoIslandPokemonCenter_3_Despues_Texto_3:
	.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10}$"

TwoIslandPokemonCenter_3_Despues_Texto_4:
	.string "Du willst LIMONADE kaufen?$"

TwoIslandPokemonCenter_3_Despues_Texto_5:
	.string "Für wen hältst du mich?\p"
	.string "Einen PRISMANIA CITY AUTOMATEN?$"

TwoIslandPokemonCenter_3_Despues_Texto_6:
	.string "Dieses Produkt findest du sonst\n"
	.string "nirgendwo in SEVII.\p"
	.string "Der Preis pro Flasche beträgt 10.000¥.$"

TwoIslandPokemonCenter_3_Despues_Texto_7:
	.string "Wenn ich's mir recht überlege … Selbst\n"
	.string "wenn du sie dir leisten könntest, was\l"
	.string "ich stark bezweifle, werde ich keine\l"
	.string "Geschäfte mit dir machen.$"

TwoIslandPokemonCenter_3_Despues_Texto_8:
	.string "Ich habe schließlich einen Ruf zu\n"
	.string "wahren, verstehst du?$"

TwoIslandPokemonCenter_3_Despues_Texto_9:
	.string "LORELEI, CELIO, die KONSULIN …Ich\n"
	.string "koche für die Elite der SEVII EILANDE.\p"
	.string "Warum soll ich mich also mit Abschaum\n"
	.string "wie dir abgeben?$"

TwoIslandPokemonCenter_3_Despues_Texto_10:
	.string "Du beharrst also weiter auf die\n"
	.string "Limonaden … Schön.$"

TwoIslandPokemonCenter_3_Despues_Texto_11:
	.string "Dann zeige ich dir hier und jetzt den\n"
	.string "Unterschied zwischen einem Elite-TEAM\l"
	.string "der gehobenen Gesellschaft und einem\l"
	.string "aus der Gosse!$"

TwoIslandPokemonCenter_3_Despues_Texto_12:
	.string "Aber … mein KARNIMANI gehört\n"
	.string "doch zur Elite!$"

TwoIslandPokemonCenter_3_Despues_Texto_13:
	.string "Das kann nicht sein!!$"

TwoIslandPokemonCenter_3_Despues_Texto_14:
	.string "Grrr… Du bist kein gewöhnlicher ROCK…$"

TwoIslandPokemonCenter_3_Despues_Texto_15:
	.string "-{PLAYER} hat einen Kasten voller\n"
	.string "Limonaden vom Chefkoch gestohlen!-$"

TwoIslandPokemonCenter_3_Despues_Texto_16:
	.string "Du! Wie kannst du es wagen?!$"

TwoIslandPokemonCenter_3_Despues_Texto_17:
	.string "Warte nur, bis ich wieder in KANTO bin!\p"
	.string "Ich werde sämtlichen Behörden von dem\n"
	.string "kleinen Laden erzählen, den ihr hier\l"
	.string "betreibt!$"

