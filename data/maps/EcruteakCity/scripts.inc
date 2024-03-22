EcruteakCity_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, EcruteakCity_OnTransition
map_script MAP_SCRIPT_ON_FRAME_TABLE, EcruteakCity_OnFrame
	.byte 0

EcruteakCity_OnTransition::
setflag FLAG_VISITED_ECRUTEAK_CITY
end

EcruteakCity_OnFrame:
map_script_2 VAR_UNUSED_0x40FE, 3, Ecruteak_Conversacion_Agatha_Oak
	.2byte 0

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
lock
applymovement OBJ_EVENT_ID_PLAYER, EcruteakCity_Encuentro_Maestro_Move_1
clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
addobject 1
playse SE_EXIT
msgbox EcruteakCity_Encuentro_Maestro_Texto_1 MSGBOX_AUTOCLOSE
delay 30
fadescreen 1
playmoncry SPECIES_NOIVERN, CRY_MODE_ENCOUNTER
waitmoncry
removeobject 1
setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
playse SE_M_FLY
delay 15
fadescreen 0
delay 20
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 7
playse SE_EXIT
delay 30
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, EcruteakCity_Encuentro_Maestro_Move_2
waitmovement 0x0
applymovement 7, EcruteakCity_Encuentro_Maestro_Move_3
waitmovement 0x0
msgbox EcruteakCity_Encuentro_Maestro_Texto_2 MSGBOX_AUTOCLOSE
applymovement 7, EcruteakCity_Encuentro_Maestro_Move_4
waitmovement 0x0
msgbox EcruteakCity_Encuentro_Maestro_Texto_3 MSGBOX_AUTOCLOSE
applymovement 7, EcruteakCity_Encuentro_Maestro_Move_5
waitmovement 0x0
msgbox EcruteakCity_Encuentro_Maestro_Texto_4 MSGBOX_AUTOCLOSE
applymovement 7, EcruteakCity_Encuentro_Maestro_Move_6
applymovement OBJ_EVENT_ID_PLAYER, EcruteakCity_Encuentro_Maestro_Move_6
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, EcruteakCity_Encuentro_Maestro_Move_7
waitmovement 0x0
special RemoveCameraObject
msgbox EcruteakCity_Encuentro_Maestro_Texto_5 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, EcruteakCity_Encuentro_Maestro_Move_8
waitmovement 0x0
special RemoveCameraObject
special SpawnCameraObject
applymovement 7, EcruteakCity_Encuentro_Maestro_Move_9
applymovement OBJ_EVENT_ID_CAMERA, EcruteakCity_Encuentro_Maestro_Move_10
waitmovement 0x0
special RemoveCameraObject
applymovement 7, EcruteakCity_Encuentro_Maestro_Move_3
applymovement OBJ_EVENT_ID_PLAYER, EcruteakCity_Encuentro_Maestro_Move_1
waitmovement 0x0
msgbox EcruteakCity_Encuentro_Maestro_Texto_6 MSGBOX_AUTOCLOSE
delay 20
fadescreen 1
playmoncry SPECIES_SALAMENCE, CRY_MODE_ENCOUNTER
waitmoncry
removeobject 7
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
playse SE_M_FLY
delay 15
fadescreen 0
delay 20
setvar VAR_UNUSED_0x40F7, 158
release
end

EcruteakCity_Encuentro_Maestro_Texto_1:
.string "ALDER: …$"

EcruteakCity_Encuentro_Maestro_Texto_2:
	.string "ELDER.M: Oh, {PLAYER}, you've come so\n"
	.string "fast.$"

EcruteakCity_Encuentro_Maestro_Texto_3:
	.string "It's a pity what happened to that\n"
	.string "POKÉMON. However, while it lasts, its\l"
	.string "brilliance will be the most intense\l"
	.string "among mortal POKÉMON. I guess ALDER is\l"
	.string "starting to accept that fate and\l"
	.string "realize that he can't change it, but he\l"
	.string "can choose how to face it.$"

EcruteakCity_Encuentro_Maestro_Texto_4:
.string "Ah, {PLAYER}, look at this,\n"
	.string "isn't it magnificent?$"

EcruteakCity_Encuentro_Maestro_Texto_5:
	.string "I suppose there's nothing quite like\n"
	.string "this in KANTO. It was built 700 years\l"
	.string "ago. Even today, there's a close bond\l"
	.string "between this tower and HO-OH.$"

EcruteakCity_Encuentro_Maestro_Texto_6:
	.string "The MASTER and LEADER of ECRUTEAK\n"
	.string "CITY awaits you at the summit. Farewell,\l"
	.string "{PLAYER}, I'm sure we'll have a chance\l"
	.string "to talk again.$"

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

Ecruteak_Cientifico_Secundaria::
lock
msgbox RuinsOfAlph_House_Mision_Secundaria_Texto_2 MSGBOX_AUTOCLOSE
release
end

Ecruteak_Conversacion_Agatha_Oak::
lock
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, EcruteakCity_Encuentro_Maestro_Move_2
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Ecruteak_Conversacion_Agatha_Oak_Move_1
waitmovement 0x0
special RemoveCameraObject
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_1 MSGBOX_AUTOCLOSE
applymovement 14, Ecruteak_Conversacion_Agatha_Oak_Move_3
waitmovement 0x0
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_3 MSGBOX_AUTOCLOSE
delay 20
applymovement 14, Ecruteak_Conversacion_Agatha_Oak_Move_4
waitmovement 0x0
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_4 MSGBOX_AUTOCLOSE
applymovement 15, Ecruteak_Conversacion_Agatha_Oak_Move_5
waitmovement 0x0
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_5 MSGBOX_AUTOCLOSE
applymovement 15, Ecruteak_Conversacion_Agatha_Oak_Move_4
waitmovement 0x0
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_6 MSGBOX_AUTOCLOSE
delay 30
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_7 MSGBOX_AUTOCLOSE
delay 30
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_8 MSGBOX_AUTOCLOSE
delay 30
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_9 MSGBOX_AUTOCLOSE
delay 20
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_10 MSGBOX_AUTOCLOSE
delay 20
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_11 MSGBOX_AUTOCLOSE
applymovement 14, Ecruteak_Conversacion_Agatha_Oak_Move_6
waitmovement 0x0
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_12 MSGBOX_AUTOCLOSE
delay 20
applymovement 15, Ecruteak_Conversacion_Agatha_Oak_Move_6
waitmovement 0x0
delay 20
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_13 MSGBOX_AUTOCLOSE
fadescreen 1
playmoncry SPECIES_AERODACTYL, CRY_MODE_ENCOUNTER
waitmoncry
removeobject 15
playse SE_M_FLY
delay 15
fadescreen 0
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_14 MSGBOX_AUTOCLOSE
delay 20
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_15 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 14, EcruteakCity_Encuentro_Maestro_Move_2
waitmovement 0x0
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_16 MSGBOX_AUTOCLOSE
applymovement 14, Ecruteak_Conversacion_Agatha_Oak_Move_2
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Ecruteak_Conversacion_Agatha_Oak_Move_2
waitmovement 0x0
special RemoveCameraObject
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_17 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_Conversacion_Agatha_Oak_Move_8
waitmovement 0x0
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_18 MSGBOX_AUTOCLOSE
applymovement 14, Ecruteak_Conversacion_Agatha_Oak_Move_4
waitmovement 0x0
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_19 MSGBOX_AUTOCLOSE
applymovement 14, Ecruteak_Conversacion_Agatha_Oak_Move_6
waitmovement 0x0
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_20 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_GENGARITE
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_21 MSGBOX_DEFAULT
waitfanfare
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_22 MSGBOX_AUTOCLOSE
delay 20
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_23 MSGBOX_AUTOCLOSE
delay 20
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_24 MSGBOX_AUTOCLOSE
applymovement 14, Ecruteak_Conversacion_Agatha_Oak_Move_5
waitmovement 0x0
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_25 MSGBOX_AUTOCLOSE
setflag FLAG_RECEIVED_SHOAL_SALT_3
fadescreen 1
playmoncry SPECIES_CROBAT, CRY_MODE_ENCOUNTER
waitmoncry
removeobject 14
playse SE_M_FLY
delay 15
fadescreen 0
setvar VAR_UNUSED_0x40FE, 4
release
end

Ecruteak_Conversacion_Agatha_Oak_Move_8:
walk_in_place_down
step_end

Ecruteak_Conversacion_Agatha_Oak_Move_7:
walk_down
step_end

Ecruteak_Conversacion_Agatha_Oak_Move_6:
face_up
step_end

Ecruteak_Conversacion_Agatha_Oak_Move_5:
face_down
step_end

Ecruteak_Conversacion_Agatha_Oak_Move_4:
face_right
step_end

Ecruteak_Conversacion_Agatha_Oak_Move_3:
walk_in_place_up
step_end

Ecruteak_Conversacion_Agatha_Oak_Move_1:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_right
walk_slow_right
walk_slow_right
step_end

Ecruteak_Conversacion_Agatha_Oak_Move_2:
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
step_end

Ecruteak_Conversacion_Agatha_Oak_Texto_1:
	.string "AGATHA: You both are incorrigible. One\n"
	.string "worse than the other.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_2:
	.string "If you intended to continue your\n"
	.string "rivalry with him all these years, you\l"
	.string "should have at least warned me. I\l"
	.string "thought you had lost all enthusiasm for\l"
	.string "battling.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_3:
.string "OAK: … …$"

Ecruteak_Conversacion_Agatha_Oak_Texto_4:
	.string "AGATHA: Just like you, always working\n"
	.string "behind the scenes and only showing up\l"
	.string "when the results speak for itselves,\l"
	.string "huh? Deep down, I knew someone as\l"
	.string "savvy as you wouldn't lose hope.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_5:
	.string "OAK: We've experienced too much to\n"
	.string "come to a halt now; it's contrary to the\l"
	.string "teachings of our ancestors. In a way,\l"
	.string "we're already bound to both regions,\l"
	.string "actively participating in their\l"
	.string "evolution, and their future is\l"
	.string "inseparable from ours.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_6:
	.string "You always loved ECRUTEAK CITY; as\n"
	.string "kids, we were taken to visit the BELL\l"
	.string "TOWER. You showed enthusiasm for\l"
	.string "GHOST-TYPE POKÉMON even back then.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_7:
	.string "AGATHA: Take a look at the landscape…\n"
	.string "It's like reliving those days, my senses\l"
	.string "experien the same sensations as\l"
	.string "before, its freshness akin.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_8:
	.string "This place hasn't changed, right?$"

Ecruteak_Conversacion_Agatha_Oak_Texto_9:
.string "OAK: No… We are the ones who've changed.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_10:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

Ecruteak_Conversacion_Agatha_Oak_Texto_11:
	.string "I know it's contrary to reason, but I\n"
	.string "feel there's something… spiritual… in\l"
	.string "this place. And despite not being able\l"
	.string "to comprehend it, it's impossible to\l"
	.string "ignore its power, its presence.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_12:
	.string "AGATHA: Older and wiser men raised the\n"
	.string "BELL TOWER; many of its secrets were\l"
	.string "lost to time. All we can do is imagine\l"
	.string "what it could have been.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_13:
	.string "OAK: Not even BELL TOWER will last forever.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_14:
	.string "AGATHA: As stubborn as ever. It's\n"
	.string "precisely there where its value lies, in\l"
	.string "its resistance to change, no matter how\l"
	.string "long it lasts.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_15:
.string "…$"

Ecruteak_Conversacion_Agatha_Oak_Texto_16:
.string "Oh! {PLAYER}?$"

Ecruteak_Conversacion_Agatha_Oak_Texto_17:
.string "Did you hear us?$"

Ecruteak_Conversacion_Agatha_Oak_Texto_18:
	.string "Ha! What do you think? It seems that\n"
	.string "old geezer still has some nostalgia\l"
	.string "within him, even if he refuses to\l"
	.string "acknowledge it.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_19:
	.string "I've thoroughly enjoyed this new\n"
	.string "journey to JOHTO. Unfortunately, I've\l"
	.string "also been brought up to date on\l"
	.string "everything happening in GOLDENROD.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_20:
	.string "My resignation from the ELITE FOUR is\n"
	.string "getting closer and closer. For now, I'll\l"
	.string "return to LAVENDER TOWN, but I don't\l"
	.string "want to leave JOHTO without giving you\l"
	.string "this, {PLAYER}.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_21:
	.string "YOU OBTAINED A GENGARITE FROM\n"
	.string "AGATHA!!$"

Ecruteak_Conversacion_Agatha_Oak_Texto_22:
	.string "With this item, GENGAR will be able to\n"
	.string "unleash its full potential, a power that\l"
	.string "those accustomed to seeing GASTLY and\l"
	.string "HAUNTER in LAVENDER TOWN TOWER could\l"
	.string "never imagine in a GHOST-TYPE PÓKÉMON.$"


Ecruteak_Conversacion_Agatha_Oak_Texto_23:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

Ecruteak_Conversacion_Agatha_Oak_Texto_24:
	.string "I'm aware that the creature they call\n"
	.string "MEWTWO was mistakenly dubbed the\l"
	.string "POKÉMON with the highest special power.\l"
	.string "MEGA GENGAR surpasses it by far in that\l"
	.string "regard. But of course, they didn't know\l"
	.string "that.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_25:
	.string "This is how underrated are mortal\n"
	.string "POKÉMON in these days.$"

