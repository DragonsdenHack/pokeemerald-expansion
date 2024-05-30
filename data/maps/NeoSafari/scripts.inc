NeoSafari_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, NeoSafari_OnFrame
	.byte 0

NeoSafari_OnFrame:
map_script_2 VAR_ROUTE120_STATE, 14, NeoSafari_Final
	.2byte 0

NeoSafari_Final_Move_1:
face_right
step_end

NeoSafari_Final_Move_2:
delay_16
face_right
step_end

NeoSafari_Final_Move_3:
walk_slow_right
step_end

NeoSafari_Final_Move_4:
walk_up
face_left
step_end

NeoSafari_Final_Move_5:
walk_in_place_right
step_end

NeoSafari_Final_Move_6:
face_left
step_end

NeoSafari_Final_Move_7:
emote_exclamation_mark
step_end

NeoSafari_Final_Move_8:
face_down
step_end

NeoSafari_Final_Move_9:
emote_heart
step_end

NeoSafari_Final::
lock
applymovement OBJ_EVENT_ID_PLAYER, NeoSafari_Final_Move_6
waitmovement 0x0
delay 15
msgbox NeoSafari_Final_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox NeoSafari_Final_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox NeoSafari_Final_Texto_3 MSGBOX_AUTOCLOSE
applymovement 4, NeoSafari_Final_Move_2
applymovement 5, NeoSafari_Final_Move_1
waitmovement 0x0
msgbox NeoSafari_Final_Texto_4 MSGBOX_AUTOCLOSE
applymovement 5, NeoSafari_Final_Move_3
waitmovement 0x0
msgbox NeoSafari_Final_Texto_5 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, NeoSafari_Final_Move_4
waitmovement 0x0
delay 10
applymovement 5, NeoSafari_Final_Move_5
waitmovement 0x0
msgbox NeoSafari_Final_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox NeoSafari_Final_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox NeoSafari_Final_Texto_8 MSGBOX_AUTOCLOSE
delay 30
msgbox NeoSafari_Final_Texto_9 MSGBOX_AUTOCLOSE
addobject 15
playse SE_BALL_THROW
waitse 
playse SE_BALL
waitse 
delay 15
playse SE_BALL_OPEN
removeobject 15
waitse
addobject 16
delay 10
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
msgbox NeoSafari_Final_Texto_10 MSGBOX_DEFAULT
waitmoncry
playse SE_PIN
applymovement 5, NeoSafari_Final_Move_7
waitmovement 0x0
delay 10
msgbox NeoSafari_Final_Texto_11 MSGBOX_AUTOCLOSE
applymovement 5, NeoSafari_Final_Move_8
waitmovement 0x0
addobject 17
playse SE_BALL_THROW
waitse 
playse SE_PIN
applymovement 5, NeoSafari_Final_Move_7
waitmovement 0x0
playse SE_BALL
waitse 
delay 15
playse SE_BALL_OPEN
removeobject 17
waitse
addobject 18
delay 10
playmoncry SPECIES_KANGASKHAN, CRY_MODE_ENCOUNTER
msgbox NeoSafari_Final_Texto_12 MSGBOX_DEFAULT
waitmoncry
applymovement 18, NeoSafari_Final_Move_1
waitmovement 0x0
applymovement 16, NeoSafari_Final_Move_6
waitmovement 0x0
playse SE_M_ATTRACT2
applymovement 18, NeoSafari_Final_Move_9
waitmovement 0x0
applymovement 16, NeoSafari_Final_Move_9
waitmovement 0x0
delay 30
playse SE_PIN
applymovement 5, NeoSafari_Final_Move_7
waitmovement 0x0
msgbox NeoSafari_Final_Texto_13 MSGBOX_AUTOCLOSE
applymovement 5, NeoSafari_Final_Move_10
waitmovement 0x0
msgbox NeoSafari_Final_Texto_14 MSGBOX_AUTOCLOSE
applymovement 5, NeoSafari_Final_Move_11
waitmovement 0x0
applymovement 18, NeoSafari_Final_Move_12
applymovement 16, NeoSafari_Final_Move_12
waitmovement 0x0
msgbox NeoSafari_Final_Texto_15 MSGBOX_AUTOCLOSE
applymovement 18, NeoSafari_Final_Move_1
applymovement 16, NeoSafari_Final_Move_1
waitmovement 0x0
delay 15
fadescreen 1
delay 20
removeobject 18
removeobject 16
fadescreen 0
delay 15
applymovement 4, NeoSafari_Final_Move_5
waitmovement 0x0
msgbox NeoSafari_Final_Texto_16 MSGBOX_AUTOCLOSE
applymovement 5, NeoSafari_Final_Move_6
waitmovement 0x0
msgbox NeoSafari_Final_Texto_17 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, NeoSafari_Final_Move_6
waitmovement 0x0
msgbox NeoSafari_Final_Texto_18 MSGBOX_AUTOCLOSE
applymovement 4, NeoSafari_Final_Move_13
waitmovement 0x0
msgbox NeoSafari_Final_Texto_19 MSGBOX_AUTOCLOSE
playmoncry SPECIES_HONCHKROW, CRY_MODE_ENCOUNTER
waitmoncry
setfieldeffectargument 1, 0
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
removeobject 4
waitfieldeffect FLDEFF_NPCFLY_OUT
delay 15
applymovement 5, NeoSafari_Final_Move_1
waitmovement 0x0
msgbox NeoSafari_Final_Texto_20 MSGBOX_AUTOCLOSE
applymovement 5, NeoSafari_Final_Move_8
waitmovement 0x0
msgbox NeoSafari_Final_Texto_21 MSGBOX_AUTOCLOSE
applymovement 5, NeoSafari_Final_Move_1
waitmovement 0x0
msgbox NeoSafari_Final_Texto_22 MSGBOX_AUTOCLOSE
applymovement 5, NeoSafari_Final_Move_6
waitmovement 0x0
msgbox NeoSafari_Final_Texto_23 MSGBOX_AUTOCLOSE
applymovement 5, NeoSafari_Final_Move_14
waitmovement 0x0
msgbox NeoSafari_Final_Texto_24 MSGBOX_AUTOCLOSE
playmoncry SPECIES_CROBAT, CRY_MODE_ENCOUNTER
waitmoncry
setfieldeffectargument 1, 0
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
removeobject 5
waitfieldeffect FLDEFF_NPCFLY_OUT
setflag FLAG_HOENN_44
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
clearflag FLAG_HIDE_ROUTE_101_BIRCH
setvar VAR_ROUTE120_STATE, 15
release
end

NeoSafari_Final_Move_14:
walk_slow_left
step_end

NeoSafari_Final_Move_13:
walk_in_place_left
step_end

NeoSafari_Final_Move_12:
face_up
step_end

NeoSafari_Final_Move_11:
walk_in_place_down
step_end

NeoSafari_Final_Move_10:
delay_16
face_right
delay_16
face_down
delay_16
step_end

NeoSafari_Final_Texto_1:
	.string "FUJI: Ya veo…$"

NeoSafari_Final_Texto_2:
	.string "El mismo día que me nombró futura LÍDER\n"
	.string "de GIMNASIO, mi padre me contó el\l"
	.string "secreto.$"

NeoSafari_Final_Texto_3:
	.string "Me hizo jurar que no hablaría de esto\n"
	.string "con absolutamente nadie.$"

NeoSafari_Final_Texto_4:
	.string "Lo que jamás imaginé es tener delante a\n"
	.string "uno de los entrenadores que dieron una\l"
	.string "segunda oportunidad a esos\l"
	.string "MOTORISTAS.$"

NeoSafari_Final_Texto_5:
	.string "Dime, {PLAYER}. Esa ANDRA debe ser\n"
	.string "también una entrenadora excepcional,\l"
	.string "¿verdad?$"

NeoSafari_Final_Texto_6:
	.string "Cuando vuelvas a verla, dale las gracias\n"
	.string "de mi parte, por favor.$"

NeoSafari_Final_Texto_7:
	.string "CIUDAD FUCSIA será siempre vuestra\n"
	.string "casa.$"

NeoSafari_Final_Texto_8:
	.string "FUJI: Con un POKÉMON como GUARDIA,\n"
	.string "este lugar está seguro. Ningún\l"
	.string "ENTRENADOR de KANTO será capaz de\l"
	.string "cruzar este inmenso túnel con un\l"
	.string "POKÉMON así guardándolo..$"

NeoSafari_Final_Texto_9:
	.string "Además… ahora serán dos GUARDIA.$"

NeoSafari_Final_Texto_10:
	.string "¡Guar!$"

NeoSafari_Final_Texto_11:
	.string "SACHIKO: ¡Oh!$"

NeoSafari_Final_Texto_12:
	.string "¡Kan!$"

NeoSafari_Final_Texto_13:
	.string "FUJI: ¡Jo, jo, jo!$"

NeoSafari_Final_Texto_14:
	.string "SACHIKO: Entonces, así debe ser.$"

NeoSafari_Final_Texto_15:
	.string "Os visitaré, cada luna llena volveré a\n"
	.string "vuestra cueva. ¡Será como volver a la\l"
	.string "vieja KANTO!$"

NeoSafari_Final_Texto_16:
	.string "FUJI: ¡Vaya, jovencita! ¡Puede que esa\n"
	.string "KANTO siga más vigente de lo que crees!$"

NeoSafari_Final_Texto_17:
	.string "SACHIKO: ¿¡Quién sabe!?$"

NeoSafari_Final_Texto_18:
	.string "FUJI: Vuelvo a PUEBLO LAVANDA.$"

NeoSafari_Final_Texto_19:
	.string "Quién lo iba a decir. Vuelvo sin mi\n"
	.string "MAROWAK, ¡pero con la conciencia\l"
	.string "tranquila!$"

NeoSafari_Final_Texto_20:
	.string "SACHIKO: He disfrutado como una niña,\n"
	.string "{PLAYER}.$"

NeoSafari_Final_Texto_21:
	.string "Todo lo que te dije sobre la KANTO del\n"
	.string "pasado… hoy he vuelto a vivir\l"
	.string "experiencias igual de intensas y\l"
	.string "gratificantes.$"

NeoSafari_Final_Texto_22:
	.string "Te estaré siempre agradecido por ello.$"

NeoSafari_Final_Texto_23:
	.string "Cuando reabra el GIMNASIO de FUCSIA,\n"
	.string "pásate a visitarme.$"

NeoSafari_Final_Texto_24:
	.string "Hablaremos con nostalgia también de\n"
	.string "este día, estoy segura. ¡Aún no ha\l"
	.string "terminado y ya la siento!$"

NeoSafari_Primer_Motorista::
lock
faceplayer
msgbox NeoSafari_Primer_Motorista_Texto_1 MSGBOX_AUTOCLOSE
release
end

NeoSafari_Primer_Motorista_Texto_1:
	.string "¿Y tú qué haces aquí? Eh, espera…\n"
	.string "¡Perdóname {PLAYER}, no te había\l"
	.string "reconocido?$"

NeoSafari_Segundo_Motorista::
lock
faceplayer
msgbox NeoSafari_Segundo_Motorista_Texto_1 MSGBOX_AUTOCLOSE
release
end

NeoSafari_Segundo_Motorista_Texto_1:
	.string "KOGA nos contó que todo esto fue\n"
	.string "gracias a ANDRA. Desde entonces,\l"
	.string "nosotros los MOTORISTAS la admiramos.$"

NeoSafari_Tercer_Motorista::
lock
faceplayer
msgbox NeoSafari_Tercer_Motorista_Texto_1 MSGBOX_AUTOCLOSE
release
end

NeoSafari_Tercer_Motorista_Texto_1:
	.string "Aquí tampoco se está tan mal. De todos\n"
	.string "modos, ¡FUCSIA ahora da asco, no hay\l"
	.string "nada!$"

NeoSafari_Cuarto_Motorista::
lock
faceplayer
msgbox NeoSafari_Cuarto_Motorista_Texto_1 MSGBOX_AUTOCLOSE
release
end

NeoSafari_Cuarto_Motorista_Texto_1:
	.string "KOGA equipó a su WEEZING con un\n"
	.string "objeto rarísimo. Con él, ¡aguantaba más\l"
	.string "y pegaba más duro!$"

NeoSafari_Quinto_Motorista::
lock
faceplayer
msgbox NeoSafari_Quinto_Motorista_Texto_1 MSGBOX_AUTOCLOSE
release
end

NeoSafari_Quinto_Motorista_Texto_1:
	.string "Unos pocos MOTORISTAS se han mudado a\n"
	.string "SEVII. Dijeron que una de las islas\l"
	.string "tiene unos RECREATIVOS bastante\l"
	.string "guapos.$"

NeoSafari_Sexto_Motorista::
lock
faceplayer
msgbox NeoSafari_Sexto_Motorista_Texto_1 MSGBOX_AUTOCLOSE
release
end

NeoSafari_Sexto_Motorista_Texto_1:
	.string "Los POKÉMON saben detectar el peligro.\n"
	.string "Nosotros hemos podido quedarnos aquí\l"
	.string "porque, aunque nuestras apariencias\l"
	.string "puedan ser otras, saben que no les\l"
	.string "haremos nada.$"

NeoSafari_Septimo_Motorista::
lock
faceplayer
msgbox NeoSafari_Septimo_Motorista_Texto_1 MSGBOX_AUTOCLOSE
release
end

NeoSafari_Septimo_Motorista_Texto_1:
	.string "Oye tío, ¿has visto algún KANGASKHAN\n"
	.string "por aquí? Se suponía que este era el\l"
	.string "lugar en el que aparecían, ¡pero no veo\l"
	.string "ninguno!$"

NeoSafari_Octavo_Motorista::
lock
faceplayer
msgbox NeoSafari_Octavo_Motorista_Texto_1 MSGBOX_AUTOCLOSE
release
end

NeoSafari_Octavo_Motorista_Texto_1:
	.string "¡Bah! ¡Atenerse a reglas es lo peor que\n"
	.string "hay! ¡Reglas del TEAM ROCKET!$"

NeoSafari_Noveno_Motorista::
lock
faceplayer
msgbox NeoSafari_Noveno_Motorista_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox NeoSafari_Noveno_Motorista_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox NeoSafari_Noveno_Motorista_Texto_3 MSGBOX_AUTOCLOSE
release
end

NeoSafari_Noveno_Motorista_Texto_1:
	.string "¡Mira todos esos ciudadanos de KANTO\n"
	.string "metidos en la carrera de la rata, viven\l"
	.string "en una región completamente distinta a\l"
	.string "la que creen!$"

NeoSafari_Noveno_Motorista_Texto_2:
	.string "Todas sus posibilidades, sus\n"
	.string "aspiraciones, el potencial que un día\l"
	.string "pudieron tener, se han perdido para\l"
	.string "siempre. Ya han aceptado su destino y\l"
	.string "capado sus opciones.$"

NeoSafari_Noveno_Motorista_Texto_3:
	.string "Por eso no hablo con ningún hombre\n"
	.string "normal que tenga más de cuarenta años.\l"
	.string "Un hombre sin inclinaciones heroicas\l"
	.string "empieza a morir a partir de los treinta.$"

NeoSafari_Calvo::
lock
faceplayer
msgbox NeoSafari_Calvo_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox NeoSafari_Calvo_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox NeoSafari_Calvo_Texto_3 MSGBOX_AUTOCLOSE
release
end

NeoSafari_Calvo_Texto_1:
	.string "Lo siento {PLAYER}, pero nadie de\n"
	.string "fuera puede entrar aquí.$"

NeoSafari_Calvo_Texto_2:
	.string "Solo KOGA y PETREL, estas casetas\n"
	.string "conectan con un determinado punto del\l"
	.string "CAMINO BICIS, por el que hemos\l"
	.string "conectado con la ZONA SAFARI.$"

NeoSafari_Calvo_Texto_3:
	.string "Comprenderás que esa ubicación no\n"
	.string "puede darse a conocer. De lo contrario,\l"
	.string "la discreción de este lugar podría\l"
	.string "ponerse en peligro.$"

NeoSafari_Warp::
lock
applymovement OBJ_EVENT_ID_PLAYER, NeoSafari_Warp_move1
waitmovement 0x0
msgbox NeoSafari_Warp_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq NeoSafari_Warp_No
warp MAP_GUARDIA_CAVE_2, 1, 75
release
end

NeoSafari_Warp_No::
applymovement OBJ_EVENT_ID_PLAYER, NeoSafari_Warp_move2
waitmovement 0x0
release
end

NeoSafari_Warp_move2:
walk_left
step_end

NeoSafari_Warp_move1:
walk_in_place_right
step_end


NeoSafari_Warp_Text_YesNo:
	.string "El túnel secreto de los KANGASKHAN\n"
	.string "empieza aquí. ¿Quieres entrar de\l"
	.string "nuevo?$"

NeoSafari_EventScript_ReceiveSwablu::
    lock
    faceplayer
	checkmoncatch SPECIES_INKAY
	goto_if_eq VAR_RESULT, FALSE, NeoSafari_Swablu_EventScript_TakeNosepass 
	msgbox NeoSafari_Swablu_Text_1, MSGBOX_DEFAULT
	msgbox NeoSafari_Swablu_Text_2, MSGBOX_DEFAULT
	release
	end

NeoSafari_Swablu_EventScript_TakeNosepass::
lock
faceplayer
    msgbox NeoSafari_Swablu_Text_TakeNosepass MSGBOX_DEFAULT
	msgbox NeoSafari_Swablu_Text_TakeNosepass3 MSGBOX_DEFAULT
	msgbox NeoSafari_Swablu_Text_TakeNosepass2 MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox NeoSafari_Swablu_Text_MensajeNosepass, MSGBOX_DEFAULT
	givemon SPECIES_INKAY, 50, ITEM_NONE
	waitfanfare  
	release
	end 

NeoSafari_Swablu_Text_TakeNosepass:
	.string "Un colega mío decidió irse a una lejana\n"
	.string "región antes de iniciar la rebelión\l"
	.string "motorista.$"

NeoSafari_Swablu_Text_TakeNosepass3:
	.string "Me ha pasado por intercambio un par de\n"
	.string "raros POKÉMON, se parecen a TENTACOOL.$"

NeoSafari_Swablu_Text_TakeNosepass2:
	.string "¡Mira!$"

NeoSafari_Swablu_Text_MensajeNosepass:
	.string "¡{PLAYER} obtuvo un INKAY al NV.50!$"

NeoSafari_Swablu_Text_1:
	.string "Mi colega me dijo que evoluciona en un\n"
	.string "siniestro calamar aún más grande.\l"
	.string "Cuando tenga a ese POKÉMON, todos aquí\l"
	.string "quedarán impresionados.$"

NeoSafari_Swablu_Text_2:
	.string "¡El único inconveniente es que parece\n"
	.string "que no puede envenenar al enemigo como\l"
	.string "TENTACRUEL o WEEZING!$"

