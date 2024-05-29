NeoSafari_MapScripts::
	.byte 0

NeoSafari_Final::
lock
msgbox NeoSafari_Final_Texto_1 MSGBOX_AUTOCLOSE
msgbox NeoSafari_Final_Texto_2 MSGBOX_AUTOCLOSE
msgbox NeoSafari_Final_Texto_3 MSGBOX_AUTOCLOSE
msgbox NeoSafari_Final_Texto_4 MSGBOX_AUTOCLOSE
msgbox NeoSafari_Final_Texto_5 MSGBOX_AUTOCLOSE
msgbox NeoSafari_Final_Texto_6 MSGBOX_AUTOCLOSE
msgbox NeoSafari_Final_Texto_7 MSGBOX_AUTOCLOSE
msgbox NeoSafari_Final_Texto_8 MSGBOX_AUTOCLOSE
msgbox NeoSafari_Final_Texto_9 MSGBOX_AUTOCLOSE
msgbox NeoSafari_Final_Texto_10 MSGBOX_AUTOCLOSE
msgbox NeoSafari_Final_Texto_11 MSGBOX_AUTOCLOSE
msgbox NeoSafari_Final_Texto_12 MSGBOX_AUTOCLOSE
msgbox NeoSafari_Final_Texto_13 MSGBOX_AUTOCLOSE
msgbox NeoSafari_Final_Texto_14 MSGBOX_AUTOCLOSE
msgbox NeoSafari_Final_Texto_15 MSGBOX_AUTOCLOSE
msgbox NeoSafari_Final_Texto_16 MSGBOX_AUTOCLOSE
msgbox NeoSafari_Final_Texto_17 MSGBOX_AUTOCLOSE
msgbox NeoSafari_Final_Texto_18 MSGBOX_AUTOCLOSE
msgbox NeoSafari_Final_Texto_19 MSGBOX_AUTOCLOSE
msgbox NeoSafari_Final_Texto_20 MSGBOX_AUTOCLOSE
msgbox NeoSafari_Final_Texto_21 MSGBOX_AUTOCLOSE
msgbox NeoSafari_Final_Texto_22 MSGBOX_AUTOCLOSE
msgbox NeoSafari_Final_Texto_23 MSGBOX_AUTOCLOSE
msgbox NeoSafari_Final_Texto_24 MSGBOX_AUTOCLOSE
release
end

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


NeoSafari_Inkay::
lock
msgbox NeoSafari_Inkay_Texto_1 MSGBOX_AUTOCLOSE
msgbox NeoSafari_Inkay_Texto_2 MSGBOX_AUTOCLOSE
msgbox NeoSafari_Inkay_Texto_3 MSGBOX_AUTOCLOSE
msgbox NeoSafari_Inkay_Texto_4 MSGBOX_AUTOCLOSE
msgbox NeoSafari_Inkay_Texto_5 MSGBOX_AUTOCLOSE
msgbox NeoSafari_Inkay_Texto_6 MSGBOX_AUTOCLOSE
release
end

NeoSafari_Inkay_Texto_1:
	.string "Un colega mío decidió irse a una lejana\n"
	.string "región antes de iniciar la rebelión\l"
	.string "motorista.$"

NeoSafari_Inkay_Texto_2:
	.string "Me ha pasado por intercambio un par de\n"
	.string "raros POKÉMON, se parecen a TENTACOOL.$"

NeoSafari_Inkay_Texto_3:
	.string "¡Mira!$"

NeoSafari_Inkay_Texto_4:
	.string "¡{PLAYER} obtuvo un INKAY al NV.50!$"

NeoSafari_Inkay_Texto_5:
	.string "Mi colega me dijo que evoluciona en un\n"
	.string "siniestro calamar aún más grande.\l"
	.string "Cuando tenga a ese POKÉMON, todos aquí\l"
	.string "quedarán impresionados.$"

NeoSafari_Inkay_Texto_6:
	.string "¡El único inconveniente es que parece\n"
	.string "que no puede envenenar al enemigo como\l"
	.string "TENTACRUEL o WEEZING!$"

NeoSafari_Warp::
lock
release
end

