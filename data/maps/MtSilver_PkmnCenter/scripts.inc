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
.string "¿Tienes curiosidad por conocer mi\n"
	.string "equipo? Me temo que tendrás que\l"
	.string "convivir con esa curiosidad, jovencito.\l"
	.string "Pertenezco a otra generación, y solo\l"
	.string "cabe en la ficción lo que pudo haber\l"
	.string "ocurrido en un eventual choque entre\l"
	.string "nuestros equipos en plenitud.$"

MtSilverPkmnCenter2_Campeona_Anciana_Texto_4:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

MtSilverPkmnCenter2_Campeona_Anciana_Texto_5:
.string "Así que AGATHA está en el lugar… Era de\n"
	.string "esperar, siempre se aferró a TORRE\l"
	.string "LAVANDA.$"

MtSilverPkmnCenter2_Campeona_Anciana_Texto_6:
.string "Gracias, chico, iré a hablar con mi vieja\n"
	.string "amiga. Sé que es un viaje largo, pero si\l"
	.string "te apetece volver a pasarte por ahí,\l"
	.string "serás bien recibido.$"


MtSilver_PkmnCenter_Text_2:
.string "Ah, sí…\n"
.string "Yo le enseñé a AGATHA todo lo que\l"
.string "sabe. Aunque jamás pudo acercarse\l"
.string "a mi dominio sobre el TIPO\l"
.string "FANTASMA, llegó a ser del ALTO\l"
.string "MANDO.\l"
.string "…\l"
.string "…\l"
.string "¿Tienes curiosidad por conocer mi\l"
.string "equipo?\l"
.string "Me temo que tendrás que vivir con\l"
.string "esa curiosidad, jovencito,\l"
.string "pertenezco a otra generación, y\l"
.string "solo cabe en la ficción lo que\l"
.string "pudo haber ocurrido en un eventual\l"
.string "choque entre nuestros equipos en\l"
.string "plenitud.$"



MtSilverPkmnCenter3::
lock     
faceplayer     
msgbox MtSilver_PkmnCenter_Text_3, MSGBOX_DEFAULT
compare VAR_SECRET_BASE_LOW_TV_FLAGS, 7
goto_if_gt MtSilverPkmnCenter3_2
release     
end

MtSilver_PkmnCenter_Text_3:
.string "Si KOGA supiera…\n"
.string "Tuve en mi poder al POKÉMON TIPO\l"
.string "VENENO más letal de todos los\l"
.string "tiempos, con él me pude coronar\l"
.string "CAMPEÓN hace medio siglo. Aunque\l"
.string "de eso no hay registros, solo\l"
.string "están en mi memoria y en la de los\l"
.string "pocos que quedan de aquella\l"
.string "época…$"

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
.string "Entonces tú también sabes del paso más\n"
	.string "allá de ORQUÍDEA, para ser tan joven\l"
	.string "estás bien informado.$"

MtSilverPkmnCenter3_2_Texto_3:
.string "Si ahí está mi mujer, volveré a nuestra\n"
	.string "pequeña casa, apartada de todo. Nada\l"
	.string "me retiene aquí.$"

MtSilverPkmnCenter3_2_Texto_4:
.string "¿Eres {PLAYER}? Gracias, {PLAYER},\n"
	.string "si decides volver a pasarte por ahí,\l"
	.string "serás bien recibido.$"



MtSilverPkmnCenter4::
lock     
faceplayer     
msgbox MtSilver_PkmnCenter_Text_4, MSGBOX_DEFAULT
release     
end

MtSilver_PkmnCenter_Text_4:
.string "¡Jojojo!\n"
.string "¿Yo ex-campeón?\l"
.string "¡Me he colado aquí tirando por el\l"
.string "otro lado de la montaña, pero no\l"
.string "se lo digas a nadie!$"
