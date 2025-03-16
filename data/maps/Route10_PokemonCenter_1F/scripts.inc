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
.string "¡La única utilidad de las PEPITAS\n"
.string "de oro es su venta por 5000!$"



Route10PokemonCenter3::
lock     
faceplayer     
msgbox Route10_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

Route10_PokemonCenter_Text_3:
.string "Todos los POKÉMON cuentan con\n"
.string "ventajas y desventajas dependiendo\l"
.string "de sus combinaciones de tipos.$"



Route10PokemonCenter4::
end



Route10PokemonCenter5::
lock     
faceplayer     
msgbox Route10_PokemonCenter_Text_5, MSGBOX_DEFAULT
release     
end

Route10_PokemonCenter_Text_5:
.string "¡He oído que hay fantasmas en\n"
.string "PUEBLO LAVANDA!$"

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
.string "Aléjate de mí, ROCKET inmundo.\p"
	.string "Soy ayudante directo del PROF.OAK\n"
	.string "y parte de la élite de esta región,\l"
	.string "alguien de tu nivel no puede cruzar\l"
	.string "una sola mirada conmigo.$"

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_2:
.string "…\n"
	.string "{PAUSE 5}…{PAUSE 5}$"

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_3:
.string "¿Quieres ver cómo hago que te\n"
	.string "largues por las malas?$"

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_4:
.string "No tienes idea de con quién te\n"
	.string "estás metiendo, ROCKET. Cuando OAK\l"
	.string "se entere de esto no volverás a\l"
	.string "ver la luz del sol.$"

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_5:
.string "Será rápido, más que barrer el\n"
	.string "polvo de casa.$"

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_6:
.string "¡Esto no tiene ningún sentido!$"

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_7:
.string "-{PLAYER} robó una PIEDRAETERNA de\n"
	.string "AYUDANTE DE OAK-$"

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_8:
.string "¡NO!\p"
	.string "¡Un ROCKET no puede\n"
	.string "ser tan fuerte!\p"
	.string "¡Cuando avise a las autoridades me\n"
	.string "devolverás lo que me has robado\l"
	.string "multiplicado por 10!$"

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Texto_9:
.string "Eso es, así me gusta.\p"
	.string "La basura al basurero.$"

Route10_PokemonCenter_1F_Combate_Ayudante_Oak_Move_1:
emote_exclamation_mark
step_end
