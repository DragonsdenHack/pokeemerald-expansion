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
.string "-El TEAM ROCKET atraca a mano\n"
.string "armada a los ciudadanos de CIUDAD\l"
.string "CELESTE-\l"
.string "Debería de darte vergüenza salir\l"
.string "en las noticias por motivos así,\l"
.string "habéis puesto patas arriba una\l"
.string "vivienda y robado todas sus MT\l"
.string "EXCAVAR, ¡espero al menos que tú\l"
.string "no hayas tenido nada que ver!$"



Route4PokemonCenter3::
lock     
faceplayer     
msgbox Route4_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

Route4_PokemonCenter_Text_3:
.string "El PC es otro servicio básico que\n"
.string "los ROCKET pueden usar, junto con\l"
.string "los CENTROS POKÉMON es lo único\l"
.string "público a lo que tenéis acceso,\l"
.string "¡yo no os daría ni eso!$"



Route4PokemonCenter4::
lock     
faceplayer     
msgbox Route4_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

Route4_PokemonCenter_Text_4:
.string "¡Hey, deja de mirar las 6 POKÉ\n"
.string "BALL de mi cinturón!\l"
.string "¡No me las robarás!$"



Route4PokemonCenter5::
end



Route4PokemonCenterDocumento_100::
msgbox Route4PokemonCenterDocumento_Text_100, MSGBOX_SIGN   
end

Route4PokemonCenterDocumento_Text_100:
.string "Un periódico…$"

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
.string "Pareces un ROCKET con grandes\n"
	.string "aspiraciones. De esos que no se\l"
	.string "conforman con un simple RATATTA o\l"
	.string "EKANS. Escucha.$"

Route4_PokemonCenter_1F_Estafa_Texto_2:
.string "¿Te gustaría adquirir un\n"
	.string "extraordinario POKÉMON que hará\l"
	.string "que todos te teman y respeten por\l"
	.string "solo 500 POKÉS?\l"
	.string "¡Nadie más que yo te hará una\l"
	.string "oferta como esta!$"

Route4_PokemonCenter_1F_Estafa_Texto_3:
.string "Perfecto. Otro iluso al que acabo\n"
	.string "de estafar.$"

Route4_PokemonCenter_1F_Estafa_Texto_4:
.string "¿De verdad creías que alguien iba\n"
	.string "a venderte un POKÉMON así por ese\l"
	.string "precio?\l"
	.string "Un MAGIKARP es completamente\l"
	.string "inútil.$"

Route4_PokemonCenter_1F_Estafa_Texto_5:
.string "Es más, eres un ROCKET, no tengo\n"
	.string "porqué entregarte nada, quien\l"
	.string "estafa a un ladrón tiene 1000 años\l"
	.string "de perdón o algo así dice el\l"
	.string "dicho, ¿no?$"

Route4_PokemonCenter_1F_Estafa_Texto_6:
.string "No puedes reclamar nada a la\n"
	.string "POLICÍA, ya que van tras vuestra,\l"
	.string "y nadie te hará caso, o siquiera\l"
	.string "creerá. Es el negocio perfecto,\l"
	.string "vender aire por 500 POKÉS.\l"
	.string "¡Jojojojo!$"

Route4_PokemonCenter_1F_Estafa_Texto_7:
.string "Ahí te quedas ROCKET, jamás podrás\n"
	.string "encontrarme, la próxima vez\l"
	.string "piénsate dos veces con quien haces\l"
	.string "negocios.$"

Route4_PokemonCenter_1F_Estafa_Texto_8:
.string "Pensaba que los ROCKET teníais\n"
	.string "buen olfato para detectar un buen\l"
	.string "negocio cuando lo tienen delante,\l"
	.string "que decepción.$"

Route4_PokemonCenter_1F_Estafa_Move_1:
walk_in_place_up
step_end

Route4_PokemonCenter_1F_Estafa_Move_2:
face_player
step_end
