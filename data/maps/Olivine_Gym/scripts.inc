Olivine_Gym_MapScripts::
	.byte 0

OlivineGym2::
lock     
faceplayer     
msgbox OlivineCity_Gym_Text_2, MSGBOX_DEFAULT
release     
end

OlivineCity_Gym_Text_2:
.string "Veo a CROM a un nivel tan lejano,\n"
.string "y yo con mi ONIX y MAGNEMITE. Él\l"
.string "dice que no me preocupe, y que me\l"
.string "centre en el proceso, pero yo creo\l"
.string "que hay ENTRENADORES y\l"
.string "generaciones irrepetibles, y esta\l"
.string "última que está a punto de irse es\l"
.string "una de ellas.$"



OlivineGym3::
end



OlivineGym4::
end

Olivine_Gym_Combate_Crom::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 142
goto_if_gt Olivine_Gym_Combate_Crom_2
msgbox Olivine_Gym_Combate_Crom_Texto_1 MSGBOX_NPC
msgbox Olivine_Gym_Combate_Crom_Texto_2 MSGBOX_NPC
msgbox Olivine_Gym_Combate_Crom_Texto_3 MSGBOX_NPC
delay 20
msgbox Olivine_Gym_Combate_Crom_Texto_4 MSGBOX_NPC
delay 20
msgbox Olivine_Gym_Combate_Crom_Texto_5 MSGBOX_NPC
delay 20
msgbox Olivine_Gym_Combate_Crom_Texto_6 MSGBOX_NPC
trainerbattle_no_intro TRAINER_CROM, Olivine_Gym_Combate_Crom_Texto_7
msgbox Olivine_Gym_Combate_Crom_Texto_8 MSGBOX_NPC
msgbox Olivine_Gym_Combate_Crom_Texto_9 MSGBOX_NPC
delay 10
playfanfare MUS_OBTAIN_BADGE
msgbox Olivine_Gym_Combate_Crom_Texto_9.1 MSGBOX_DEFAULT
waitfanfare
msgbox Olivine_Gym_Combate_Crom_Texto_9.2 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
msgbox Olivine_Gym_Combate_Crom_Texto_10 MSGBOX_DEFAULT
givemon SPECIES_RIOLU, 25, ITEM_LUCARIONITE
waitfanfare
msgbox Olivine_Gym_Combate_Crom_Texto_11 MSGBOX_NPC
delay 15
msgbox Olivine_Gym_Combate_Crom_Texto_11.10 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM77
msgbox Olivine_Gym_Combate_Crom_Texto_11.2 MSGBOX_DEFAULT
waitfanfare
msgbox Olivine_Gym_Combate_Crom_Texto_11.3 MSGBOX_NPC
delay 10
msgbox Olivine_Gym_Combate_Crom_Texto_12 MSGBOX_NPC
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_SS_TICKET
msgbox Olivine_Gym_Combate_Crom_Texto_11.1 MSGBOX_DEFAULT
waitfanfare
msgbox Olivine_Gym_Combate_Crom_Texto_13 MSGBOX_NPC
setflag FLAG_BADGE14_GET
clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
setvar VAR_UNUSED_0x40F7, 143
release
end

Olivine_Gym_Combate_Crom_Texto_11.3:
.string "Con PULIMENTO despertarás el\n"
	.string "potencial ofensivo de muchos POKÉMON\l"
	.string "ROCA y ACERO.\l"
	.string "¡RHYPERIOR y METAGROSS serán un\l"
	.string "peligro!$"

Olivine_Gym_Combate_Crom_Texto_11.10:
.string "Ten también esta MT.$"

Olivine_Gym_Combate_Crom_Texto_11.2:
.string "¡¡{PLAYER} obtuvo la MT77 PULIMENTO\n"
	.string "de manos de CROM!!$"

Olivine_Gym_Combate_Crom_Texto_11.1:
.string "¡¡Obtuviste TICKET FIESTA de manos\n"
	.string "de LÍDER CROM!!$"

Olivine_Gym_Combate_Crom_2::
msgbox Olivine_Gym_Combate_Crom_Texto_14 MSGBOX_NPC
release
end

Olivine_Gym_Combate_Crom_Texto_1:
.string "CROM: Muy bien, aspirante, llegó\n"
	.string "la hora de la verdad.$"

Olivine_Gym_Combate_Crom_Texto_2:
.string "Conoces el TIPO ACERO, ¿verdad?\n"
	.string "Este GIMNASIO se especializa en\l"
	.string "él, ningún TIPO tiene tantas\l"
	.string "resistencias. Si lo combinas con\l"
	.string "otros como el VOLADOR o el\l"
	.string "PSÍQUICO, la ventaja se vuelve\l"
	.string "absurda.$"

Olivine_Gym_Combate_Crom_Texto_3:
.string "Muchos en JOHTO aún no lo conocen,\n"
	.string "algunos siguen creyendo que\l"
	.string "MAGNEMITE es ELÉCTRICO puro,\l"
	.string "especialmente en KANTO. Pero mi\l"
	.string "labor en CIUDAD OLIVO ha ayudado a\l"
	.string "dar visibilidad a este TIPO,\l"
	.string "YASMINA seguro que lo dará a\l"
	.string "conocer aún más.$"

Olivine_Gym_Combate_Crom_Texto_4:
.string "...$"

Olivine_Gym_Combate_Crom_Texto_5:
.string "Veo en tus ojos ese fuego interno.\n"
	.string "Al igual que yo, has forjado a tu\l"
	.string "equipo en mil batallas.$"

Olivine_Gym_Combate_Crom_Texto_6:
.string "A pesar de tu juventud, has visto\n"
	.string "ya muchas cosas y visitado muchos\l"
	.string "lugares, y aún te queda...\l"
	.string "Combates como estos son los que\l"
	.string "dan sentido a tu paso por JOHTO,\l"
	.string "¿no?\l"
	.string "Pues no se hable más, ¡veamos si\l"
	.string "puedes torcer, aunque sea\l"
	.string "levemente, la voluntad de mis\l"
	.string "aguerridos POKÉMON!$"

Olivine_Gym_Combate_Crom_Texto_7:
.string "Oh...\n"
	.string "No recuerdo la última vez que vi\l"
	.string "algo así.$"

Olivine_Gym_Combate_Crom_Texto_8:
.string "Nadie ha sido rival para mi\n"
	.string "SKARMORY desde que se transformó\l"
	.string "aquel día, ya lejano. Creí ese día\l"
	.string "haber descubierto ya el secreto\l"
	.string "del acero, pero parece que siempre\l"
	.string "queda algo nuevo por aprender.$"

Olivine_Gym_Combate_Crom_Texto_9:
.string "Te estaré eternamente agradecido,\n"
	.string "acabo de cerrar con broche de oro\l"
	.string "mi estancia en CIUDAD OLIVO con\l"
	.string "un combate digno de ser\l"
	.string "presenciado en el olimpo POKÉMON.$"

Olivine_Gym_Combate_Crom_Texto_9.1:
	.string "Toma, aquí tienes la\n"
	.string "MEDALLA MINERAL.$"

Olivine_Gym_Combate_Crom_Texto_9.2:
	.string "También, quiero que cuides de\n"
	.string "este pequeño.$"

Olivine_Gym_Combate_Crom_Texto_10:
.string "¡¡OBTUVISTE UN RIOLU AL Nv.25!!$"

Olivine_Gym_Combate_Crom_Texto_11:
.string "Su evolución es uno de mis POKÉMON\n"
	.string "favoritos, su perfil como TIPO\l"
	.string "ACERO es único. Gracias al LUCHA y\l"
	.string "su capacidad de concentración,\l"
	.string "dominará el ACERO como pocos. Me\l"
	.string "he tomado la molestia de equiparlo\l"
	.string "con un regalito que elevará aún\l"
	.string "más su poder.$"

Olivine_Gym_Combate_Crom_Texto_12:
.string "Y una última cosa, deberías\n"
	.string "asistir al evento de apertura del\l"
	.string "PUERTO OLIVO. Toma.$"

Olivine_Gym_Combate_Crom_Texto_13:
.string "Van a celebrar una fiesta en honor\n"
	.string "a la ampliación del PUERTO y las\l"
	.string "conexiones con nuevas regiones,\l"
	.string "con ese TICKET podrás asistir.$"

Olivine_Gym_Combate_Crom_Texto_14:
.string "Poco más me queda por hacer aquí.\n"
	.string "Pronto haré las maletas y dejaré\l"
	.string "CIUDAD OLIVO, tal vez cuando todo\l"
	.string "el fervor por la apertura del\l"
	.string "PUERTO vaya bajando.$"


OlivineGym_Gym_Dude::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 142
goto_if_gt OlivineGym_Gym_Dude_2
compare VAR_UNUSED_0x40F7, 141
goto_if_gt OlivineGym_Gym_Dude_3
msgbox OlivineGym_Gym_Dude_Texto_1 MSGBOX_NPC
release
end

OlivineGym_Gym_Dude_2::
msgbox OlivineGym_Gym_Dude_Texto_2 MSGBOX_NPC
release
end

OlivineGym_Gym_Dude_3::
msgbox OlivineGym_Gym_Dude_Texto_3 MSGBOX_NPC
release
end

OlivineGym_Gym_Dude_Texto_1:
.string "Nuestro LÍDER ha salido, dijo que\n"
	.string "quería comentar algunas cosas con\l"
	.string "su viejo amigo: el dueño del FARO.$"

OlivineGym_Gym_Dude_Texto_2:
.string "¡Aún no puedo creerlo, has batido\n"
	.string "a CROM!\l"
	.string "¡Tú sí que tienes la voluntad\l"
	.string "necesaria como para domar al TIPO\l"
	.string "ACERO!\l"
	.string "¡Que nadie te la tuerza!$"

OlivineGym_Gym_Dude_Texto_3:
.string "Dicen de CROM que fue él quién\n"
	.string "creó el TIPO ACERO, convirtiéndose\l"
	.string "en su dios. Son solo leyendas,\l"
	.string "pero...\l"
	.string "¿Podrás con el mito?\l"
	.string "¡Ni los TIPO FUEGO y TIERRA te\l"
	.string "darán una clara ventaja, chico!$"




OlivineGym_Estatua::
lock
compare VAR_UNUSED_0x40F7, 142
goto_if_gt OlivineGym_Estatua_2
msgbox OlivineGym_Estatua_Texto_1 MSGBOX_AUTOCLOSE
release
end


OlivineGym_Estatua_2::
msgbox OlivineGym_Estatua_Texto_2 MSGBOX_AUTOCLOSE
release
end


OlivineGym_Estatua_Texto_1:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de CIUDAD OLIVO: CROM\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "(¡Está vacío!)$"

OlivineGym_Estatua_Texto_2:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de CIUDAD OLIVO: CROM\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "{PLAYER}$"
