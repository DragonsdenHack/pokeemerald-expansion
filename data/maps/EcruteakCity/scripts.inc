EcruteakCity_MapScripts::
	.byte 0

EcruteakCity2::
lock         
msgbox EcruteakCity_Text_1, MSGBOX_DEFAULT
release     
end

EcruteakCity_Text_1:
.string "¡Así es!\n"
.string "¡Después de 5 años, he vuelto a\l"
.string "ver a esa gran bestia, corriendo\l"
.string "por los pastos con la fuerza de un\l"
.string "volcán en erupción!$"



EcruteakCity3::
lock        
msgbox EcruteakCity_Text_3, MSGBOX_DEFAULT
release     
end

EcruteakCity_Text_3:
.string "¡Eso es un buen presagio!\n"
.string "¡Grandes tiempos se avecinan en\l"
.string "nuestra JOHTO!$"



EcruteakCity4::
end



EcruteakCity5::
lock     
faceplayer     
msgbox EcruteakCity_Text_5, MSGBOX_DEFAULT
release     
end

EcruteakCity_Text_5:
.string "La huella de la historia aún se\n"
.string "deja entrever en lugares como\l"
.string "este.\l"
.string "Ya no podemos cambiar lo que fue,\l"
.string "pero podemos aprender de ello.$"



EcruteakCity6::
lock     
faceplayer     
msgbox EcruteakCity_Text_6, MSGBOX_DEFAULT
release     
end

EcruteakCity_Text_6:
.string "CIUDAD IRIS y MALVA son las únicas\n"
.string "que han conservado su esencia aún\l"
.string "con el paso del tiempo. Esperemos\l"
.string "que perduren en esta forma por\l"
.string "mucho más.$"



EcruteakCity8::
lock     
faceplayer     
msgbox EcruteakCity_Text_8, MSGBOX_DEFAULT
release     
end

EcruteakCity_Text_8:
.string "Lo podrás explicar, y la gente\n"
.string "podrá ver lo que han visto tus\l"
.string "ojos.\l"
.string "Podrás hacer fotografías y podrán\l"
.string "escuchar cómo silban los pájaros o\l"
.string "cómo la nieve mece las ramas de\l"
.string "los árboles.\l"
.string "Podrás escribirlo y podrán incluso\l"
.string "sentir el viento en la cara o el\l"
.string "olor a tierra mojada.\l"
.string "Pero nunca podrás lograr que\l"
.string "sientan la emoción que tú has\l"
.string "sentido al estar presente.$"



EcruteakCity9::
lock     
faceplayer     
msgbox EcruteakCity_Text_9, MSGBOX_DEFAULT
release     
end

EcruteakCity_Text_9:
.string "CIUDAD IRIS es la más antigua de\n"
.string "JOHTO. Sus dos pagodas se\l"
.string "construyeron hace 700 años, y una\l"
.string "de ellas aún se eleva como ninguna\l"
.string "otra torre en toda la región.\l"
.string "¡Aún más alto que esa aberración\l"
.string "de TRIGAL a la que llaman TORRE\l"
.string "RADIO!$"



EcruteakCity10::
lock     
faceplayer     
msgbox EcruteakCity_Text_10, MSGBOX_DEFAULT
release     
end

EcruteakCity_Text_10:
.string "Dos torres se elevaban sobre\n"
.string "CIUDAD IRIS, una al este y otra al\l"
.string "oeste. Ahora únicamente queda una,\l"
.string "y espero que se mantenga por\l"
.string "muchos siglos.$"



EcruteakCity11::
lock     
faceplayer     
msgbox EcruteakCity_Text_11, MSGBOX_DEFAULT
release     
end

EcruteakCity_Text_11:
.string "¡El TEATRO DE LA DANZA me viene\n"
.string "que ni pintado para mantenerme en\l"
.string "forma!$"



EcruteakCity12::
lock     
faceplayer     
msgbox EcruteakCity_Text_12, MSGBOX_DEFAULT
release     
end

EcruteakCity_Text_12:
.string "Adoro pasear por estas calles, es\n"
.string "como si continuara escribiendo la\l"
.string "magnífica historia de esta ciudad.$"



EcruteakCityDocumento_100::
msgbox EcruteakCityDocumento_Text_100, MSGBOX_SIGN   
end

EcruteakCityDocumento_Text_100:
.string "TORRE QUEMADA\n"
	.string "Destruida por un misterioso\l"
	.string "incendio hace 150 años.\l"
	.string "¡Atención!\l"
	.string "¡Peligro!$"



EcruteakCityDocumento_101::
msgbox EcruteakCityDocumento_Text_101, MSGBOX_SIGN   
end

EcruteakCityDocumento_Text_101:
	.string "GIMNASIO de CIUDAD IRIS\n"
	.string "LÍDER: JADEN\l"
	.string "Una leyenda del pasado en tiempos\l"
	.string "presentes.$"



EcruteakCityDocumento_102::
msgbox EcruteakCityDocumento_Text_102, MSGBOX_SIGN   
end

EcruteakCityDocumento_Text_102:
.string "CIUDAD IRIS\n"
	.string "Una ciudad donde conviven el\l"
	.string "pasado y el presente.$"



EcruteakCityDocumento_103::
msgbox EcruteakCityDocumento_Text_103, MSGBOX_SIGN   
end

EcruteakCityDocumento_Text_103:
	.string "TEATRO DE DANZA DE CIUDAD IRIS$"

EcruteakCity_Encuentro_Maestro::
msgbox EcruteakCity_Encuentro_Maestro_Texto_1 MSGBOX_AUTOCLOSE
msgbox EcruteakCity_Encuentro_Maestro_Texto_2 MSGBOX_AUTOCLOSE
msgbox EcruteakCity_Encuentro_Maestro_Texto_3 MSGBOX_AUTOCLOSE
msgbox EcruteakCity_Encuentro_Maestro_Texto_4 MSGBOX_AUTOCLOSE
msgbox EcruteakCity_Encuentro_Maestro_Texto_5 MSGBOX_AUTOCLOSE
msgbox EcruteakCity_Encuentro_Maestro_Texto_6 MSGBOX_AUTOCLOSE
release
end

EcruteakCity_Encuentro_Maestro_Texto_1:
.string "MIRTO: ...$"

EcruteakCity_Encuentro_Maestro_Texto_2:
.string "M.ANCIANO: Oh, {PLAYER}, qué rápido\n"
	.string "has venido.$"

EcruteakCity_Encuentro_Maestro_Texto_3:
.string "Es una pena lo de ese POKÉMON. Sin\n"
	.string "embargo, mientras dure, su brillo\l"
	.string "será el más intenso de entre los\l"
	.string "POKÉMON mortales. Creo que MIRTO\l"
	.string "está empezando a aceptar ese\l"
	.string "destino, y a darse cuenta de que\l"
	.string "no puede cambiarlo, pero sí elegir\l"
	.string "el modo de afrontarlo.$"

EcruteakCity_Encuentro_Maestro_Texto_4:
.string "Ah, {PLAYER}, mira esto, ¿no es\n"
	.string "magnífico?$"

EcruteakCity_Encuentro_Maestro_Texto_5:
.string "Supongo que no hay nada parecido a\n"
	.string "esto en KANTO, fue construida hace\l"
	.string "700 años. Aún hoy día existe un\l"
	.string "estrecho vínculo entre esta torre\l"
	.string "y HO-OH.$"

EcruteakCity_Encuentro_Maestro_Texto_6:
.string "El MAESTRO y LÍDER de CIUDAD IRIS\n"
	.string "está en la cima, esperándote.\l"
	.string "Adiós, {PLAYER}, seguro que\l"
	.string "tendremos oportunidad de volver a\l"
	.string "conversar.$"

EcruteakCity_Encuentro_Maestro_Move_1:
walk_in_place_right
step_end

EcruteakCity_Encuentro_Maestro_Move_2:
emote_exclamation_mark
step_end

EcruteakCity_Encuentro_Maestro_Move_3:
face_left
step_end

EcruteakCity_Encuentro_Maestro_Move_4:
walk_slow_down
walk_slow_down
walk_slow_left
walk_slow_left
walk_in_place_left
step_end

EcruteakCity_Encuentro_Maestro_Move_5:
walk_in_place_up
walk_in_place_left
step_end

EcruteakCity_Encuentro_Maestro_Move_6:
face_up
step_end

EcruteakCity_Encuentro_Maestro_Move_7:
walk_right
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

EcruteakCity_Encuentro_Maestro_Move_8:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

EcruteakCity_Encuentro_Maestro_Move_9:
walk_fast_down
walk_fast_down
walk_fast_left
walk_fast_left
walk_in_place_up
step_end

EcruteakCity_Encuentro_Maestro_Move_10:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
walk_down
walk_down
walk_left
walk_left
walk_left
step_end
