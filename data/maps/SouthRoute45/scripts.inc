SouthRoute45_MapScripts::
	.byte 0

SouthRoute45_1::
end



SouthRoute45_2::
end



SouthRoute45_3::
end



SouthRoute45_4::
end



SouthRoute45_5::
end



SouthRoute45_6::
end



SouthRoute45_7::
end



SouthRoute45_8::
end



SouthRoute45_9::
lock     
faceplayer     
msgbox SouthRoute45_Text_9, MSGBOX_DEFAULT
release     
end

SouthRoute45_Text_9:
.string "Mi misión es asegurarme que nadie\n"
.string "pasa de este punto por casualidad,\l"
.string "en caso de presentarse algún\l"
.string "montañero despistado, ¡el RUGIDO\l"
.string "de mi GRANBULL acabará de un\l"
.string "plumazo con esa casualidad y le\l"
.string "hará torcer para el otro lado!$"



SouthRoute45_10::
lock     
faceplayer     
msgbox SouthRoute45_Text_10, MSGBOX_DEFAULT
release     
end

SouthRoute45_Text_10:
.string "¿Todo bien, sir?\n"
.string "¡Le deseamos suerte en su andadura\l"
.string "por JOHTO!$"



SouthRoute45_11::
lock     
faceplayer     
msgbox SouthRoute45_Text_11, MSGBOX_DEFAULT
release     
end

SouthRoute45_Text_11:
.string "¡A su servicio para todo lo que\n"
.string "necesite, ADMIN.JEFE {PLAYER}!$"



SouthRoute45_12::
lock     
faceplayer     
msgbox SouthRoute45_Text_12, MSGBOX_DEFAULT
release     
end

SouthRoute45_Text_12:
.string "Al norte de aquí se encuentra\n"
.string "CIUDAD ENDRINO, famosa por su gran\l"
.string "devoción hacia el TIPO DRAGÓN, sin\l"
.string "embargo, es imposible llegar a la\l"
.string "ciudad desde aquí, la única forma\l"
.string "de llegar es pasando por la\l"
.string "RUTA HELADA.$"



SouthRoute45_13::
lock     
faceplayer     
msgbox SouthRoute45_Text_13, MSGBOX_DEFAULT
release     
end

SouthRoute45_Text_13:
.string "Es imposible que descubran la\n"
.string "base, las montañas de los\l"
.string "alrededores la tapan\l"
.string "completamente.\l"
.string "¡Solo TORRE CAMPANA tiene la\l"
.string "altura como para sobresalir por\l"
.string "encima de ellas!$"



SouthRoute45_14::
lock     
faceplayer     
msgbox SouthRoute45_Text_14, MSGBOX_DEFAULT
release     
end

SouthRoute45_Text_14:
.string "Estamos al sur de RUTA 45, tan al\n"
.string "sur que esta zona no está\l"
.string "registrada por los mapas\l"
.string "convencionales, pero no lo\l"
.string "suficiente como para considerarse\l"
.string "parte del norte de RUTA 29, entre\l"
.string "PUEBLO PRIMAVERA y CIUDAD CEREZO.$"



SouthRoute45_15::
end



SouthRoute45_16::
end



SouthRoute45_EventScript_Karateka::
	trainerbattle_single TRAINER_VICKY, SouthRoute45_Text_KaratekaIntro, SouthRoute45_Text_KaratekaDefeated
	msgbox SouthRoute45_Text_KaratekaPostBattle, MSGBOX_AUTOCLOSE
	end



SouthRoute45_EventScript_Chico::
	trainerbattle_single TRAINER_WALLACE, SouthRoute45_Text_ChicoIntro, SouthRoute45_Text_ChicoDefeated
	msgbox SouthRoute45_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



SouthRoute45_EventScript_Montanero::
	trainerbattle_single TRAINER_SHELBY_1, SouthRoute45_Text_MontaneroIntro, SouthRoute45_Text_MontaneroDefeated
	msgbox SouthRoute45_Text_MontaneroPostBattle, MSGBOX_AUTOCLOSE
	end



SouthRoute45Documento_100::
msgbox SouthRoute45Documento_Text_100, MSGBOX_SIGN   
end

SouthRoute45Documento_Text_100:
	.string "RUTA 45\n"
	.string "CAMINO MONTAÑA$"


SouthRoute45_SudowoodoRest::
msgbox SouthRoute45_SudowoodoRest_Text, MSGBOX_NPC   
end

SouthRoute45_SudowoodoRest_Text:
	.string "…\n"
	.string "…\l"
	.string "(Es un POKÉMON, parece estar\l"
	.string "reposando)$"

SouthRoute45_Evento_Encinar::
lock
setflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
setflag FLAG_HOENN_674
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_2
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_1F_Escena_3_Move_1
setvar VAR_UNUSED_0x40FF, 29
waitmovement 0x0
warpsilent MAP_ILEX_FOREST, 17, 52
waitmovement 0x0
delay 100
release
end
