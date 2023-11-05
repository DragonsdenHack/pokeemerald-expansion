RocketWarehouse_MapScripts::
	.byte 0

RocketWarehouse1::
end



RocketWarehouse3::
lock     
faceplayer     
msgbox RocketWarehouse_Text_3, MSGBOX_DEFAULT
release     
end

RocketWarehouse_Text_3:
.string "Por la energía que desprende esta\n"
.string "POKÉ BALL, se ve a leguas que hay\l"
.string "un POKÉMON bastante potente en su\l"
.string "interior…$"



RocketWarehouse4::
lock     
faceplayer     
msgbox RocketWarehouse_Text_4, MSGBOX_DEFAULT
release     
end

RocketWarehouse_Text_4:
.string "ATLAS te está esperando junto con\n"
	.string "el otro ROCKET que ha podido\l"
	.string "vencerme, pasa y conoce los\l"
	.string "detalles de tu misión.$"



RocketWarehouse5::
end



RocketWarehouse6::
lock
compare VAR_ROUTE108_STATE, 6
goto_if_gt RocketWarehouse_Atlas_Mision_Secundaria_4
compare VAR_ROUTE108_STATE, 5
goto_if_gt RocketWarehouse_Atlas_Mision_Secundaria_3
compare VAR_ROUTE108_STATE, 3
goto_if_gt RocketWarehouse_Atlas_Mision_Secundaria_2
compare VAR_ROUTE108_STATE, 2
goto_if_gt RocketWarehouse_Atlas_Mision_Secundaria   
msgbox RocketWarehouse_Text_6, MSGBOX_SIGN
release     
end

RocketWarehouse_Atlas_Mision_Secundaria::
lock
faceplayer
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_1 MSGBOX_NPC
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_2 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouse_Atlas_Mision_Secundaria_Move_1
waitmovement 0x0
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_3 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouse_Atlas_Mision_Secundaria_Move_2
waitmovement 0x0
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_4 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouse_Atlas_Mision_Secundaria_Move_4
waitmovement 0x0
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_5 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouse_Atlas_Mision_Secundaria_Move_3
waitmovement 0x0
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_6 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE108_STATE, 4
release
end

RocketWarehouse_Atlas_Mision_Secundaria_2::
faceplayer
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_6 MSGBOX_AUTOCLOSE
release
end


RocketWarehouse_Atlas_Mision_Secundaria_3::
faceplayer
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_7 MSGBOX_AUTOCLOSE
playse SE_SHOP
addmoney 50000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_8 MSGBOX_DEFAULT
waitfanfare
applymovement 6, Atlas_Move_1
waitmovement 0x0
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_10 MSGBOX_DEFAULT
givemon SPECIES_BOMUSHIKAA, 60, ITEM_FIRE_GEM
waitfanfare
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_11 MSGBOX_AUTOCLOSE 
applymovement 6, Atlas_Move_1
waitmovement 0x0
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE108_STATE, 7
release
end

RocketWarehouse_Atlas_Mision_Secundaria_4::
faceplayer
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_13 MSGBOX_AUTOCLOSE
release
end

Atlas_Move_1:
walk_in_place_down
step_end

RocketWarehouse_Atlas_Mision_Secundaria_Move_1:
walk_in_place_left
step_end

RocketWarehouse_Atlas_Mision_Secundaria_Move_2:
face_player
step_end

RocketWarehouse_Atlas_Mision_Secundaria_Move_3:
walk_in_place_down
step_end

RocketWarehouse_Atlas_Mision_Secundaria_Move_4:
face_left
step_end

RocketWarehouse_Atlas_Mision_Secundaria_Texto_1:
.string "ATLAS: El hijo pródigo vuelve a casa.\n"
	.string "¿Eh, {PLAYER}?$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_2:
.string "Después de derrotar a un equipo de\n"
	.string "puros LEGENDARIOS y\l"
	.string "PSEUDOLEGENDARIOS, lo que puedas\l"
	.string "hallar dentro del reducido espacio en\l"
	.string "estas islas se te quedará pequeño,\l"
	.string "¿no?$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_3:
.string "Tal vez yo pueda ayudarte, conozco bien\n"
	.string "estas islas, y algunos de sus secretos.\l"
	.string "¿Has estado en ISLA SÉTIMA? Hay una\l"
	.string "anciana que habita en una de sus\l"
	.string "casas.$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_4:
.string "Dile que vienes de mi parte, ella puede\n"
	.string "mostrarte misterios de estas islas que\l"
	.string "alguien como ese ROJO jamás\l"
	.string "encontraría por su cuenta.$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_5:
.string "Espero que esto te sirva de estímulo,\n"
	.string "estas islas pueden ser un paraíso o un\l"
	.string "bodrio intragable, dependiendo de con\l"
	.string "quién hables.$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_6:
.string "Si llegas a visitarla y ver su secreto\n"
	.string "vuelve aquí. Te recompensaré\l"
	.string "personalmente. Igual que en tus\l"
	.string "primeras misiones, ¿verdad? Recuerda,\l"
	.string "la anciana vive en ISLA TERA, en una\l"
	.string "casa pegada al CENTRO PKMN.$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_7:
.string "¡{PLAYER}! ¡Has vuelto! ¡ZOE ya me ha\n"
	.string "contado todo! Honestamente, creí que,\l"
	.string "a pesar de haber derrotado a LANCE, la\l"
	.string "técnica y maestría de una vieja LÍDER\l"
	.string "como ella podría ponerte en aprietos.\l"
	.string "Veo que te lo tomas en serio incluso en\l"
	.string "vacaciones.$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_8:
.string "¡{PLAYER} facturó 50000 POKÉS!$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_9:
.string "Y lo más importante, te daré a este\n"
	.string "pequeño, créeme, me cuesta\l"
	.string "desprenderme de él, le tengo cariño,\l"
	.string "pero no veo mejores manos en las que\l"
	.string "pueda estar que en las tuyas.$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_10:
.string "¡OBTUVISTE UN BOMUSHIKAA AL NV.60!$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_11:
.string "Es un POKÉMON muy especial, con un gran\n"
	.string "corazón y leal a su ENTRENADOR.\l"
	.string "Pertenece a la antigua JOHTO, extinto\l"
	.string "en estado salvaje, solo unos pocos\l"
	.string "sabios de la región cuentan con uno.$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_12:
.string "Sabemos que comparte familia con\n"
	.string "DEWGONG, aunque sus STATS BASE y\l"
	.string "combinación de tipos son superiores.\l"
	.string "Alguien con tu determinación y\l"
	.string "principios es ideal para cuidarlo.$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_13:
.string "El GIMNASIO oculto es solo un ejemplo\n"
	.string "que has conocido gracias a mí pero…\l"
	.string "¿de cuantos magníficos lugares nos\l"
	.string "estaremos perdiendo por no contar con\l"
	.string "los contactos adecuados?$"

RocketWarehouse_Text_6:
     .string "ATLAS: ....\n"
	.string "(Parece que está centrado en algún\l"
	.string "proyecto de gran importancia)$"



RocketWarehouse7::
end



RocketWarehouse8::
end



RocketWarehouse9::
lock     
faceplayer     
msgbox RocketWarehouse_Text_9, MSGBOX_DEFAULT
release     
end

RocketWarehouse_Text_9:
.string "El control de datos es el petróleo\n"
.string "del siglo XXI chaval, ¡el que lo\l"
.string "controle dominará el mundo!$"



RocketWarehouse10::
end



RocketWarehouse11::
end



RocketWarehouse12::
end



RocketWarehouse13::
lock     
faceplayer     
msgbox RocketWarehouse_Text_13, MSGBOX_DEFAULT
release     
end

RocketWarehouse_Text_13:
.string "Por la energía que desprende esta\n"
.string "POKÉ BALL, se ve a leguas que hay\l"
.string "un POKÉMON bastante potente en su\l"
.string "interior…$"



RocketWarehouse14::
lock     
faceplayer     
msgbox RocketWarehouse_Text_14, MSGBOX_DEFAULT
release     
end

RocketWarehouse_Text_14:
.string "El TEAM ROCKET no escatima en\n"
.string "gastos de investigación,\l"
.string "innovación y desarrollo.\l"
.string "¡Por eso somos la organización\l"
.string "referente de KANTO!$"



RocketWarehouse15::
lock     
faceplayer     
msgbox RocketWarehouse_Text_15, MSGBOX_DEFAULT
release     
end

RocketWarehouse_Text_15:
.string "¡Mi vida de criminal me hace\n"
.string "sentir tan vivo!\l"
.string "¿No sientes lo mismo, colega?$"



RocketWarehouse16::
lock     
faceplayer     
msgbox RocketWarehouse_Text_16, MSGBOX_DEFAULT
release     
end

RocketWarehouse_Text_16:
.string "Estoy de guardia por si las\n"
.string "moscas, a los niños de hoy en día\l"
.string "les gusta meter las narices donde\l"
.string "no les llaman.$"

RocketWarehouse_EventScript_Isaac::
	trainerbattle_single TRAINER_ISAAC_5, RocketWarehouse_Text_IsaacIntro, RocketWarehouse_Text_IsaacDefeated
	msgbox RocketWarehouse_Text_IsaacPostBattle, MSGBOX_AUTOCLOSE
	end



RocketWarehouse_EventScript_Recluta::
	trainerbattle_single TRAINER_ISAAC_3, RocketWarehouse_Text_ReclutaIntro, RocketWarehouse_Text_ReclutaDefeated
	msgbox RocketWarehouse_Text_ReclutaPostBattle, MSGBOX_AUTOCLOSE
	end



RocketWarehouse_EventScript_Recluta2::
	trainerbattle_single TRAINER_ISAAC_4, RocketWarehouse_Text_Isaac_4Intro, RocketWarehouse_Text_Isaac_4Defeated
	msgbox RocketWarehouse_Text_Isaac_4PostBattle, MSGBOX_AUTOCLOSE
	end



RocketWarehouseDocumento_106::
lock     
msgbox RocketWarehouseDocumento_Text_106, MSGBOX_DEFAULT
release     
end

RocketWarehouseDocumento_Text_106:
	.string "Según nuestros últimos estudios,\n"
	.string "determinadas frecuencias de radio\l"
	.string "pueden influir directamente en el\l"
	.string "proceso de evolución de los\l"
	.string "POKÉMON, crear mutaciones que\l"
	.string "afecten a su color original y, en\l"
	.string "los casos más extremos, disparar\l"
	.string "sus STATS BASE globales\l"
	.string "modificando completamente los\l"
	.string "genes.$"



RocketWarehouseDocumento_100::
msgbox RocketWarehouseDocumento_Text_100, MSGBOX_SIGN   
end

RocketWarehouseDocumento_Text_100:
	.string "Por la energía que desprende esta\n"
	.string "POKÉ BALL, se ve a leguas que hay\l"
	.string "un POKÉMON bastante potente en su\l"
	.string "interior...$"



RocketWarehouseDocumento_101::
msgbox RocketWarehouseDocumento_Text_101, MSGBOX_SIGN   
end

RocketWarehouseDocumento_Text_101:
	.string "Por la energía que desprende esta\n"
	.string "POKÉ BALL, se ve a leguas que hay\l"
	.string "un POKÉMON bastante potente en su\l"
	.string "interior...$"


RocketWarehouseDocumento_102::
msgbox RocketWarehouseDocumento_Text_102, MSGBOX_SIGN   
end

RocketWarehouseDocumento_Text_102:
	.string "Hay un informe con gráficos\n"
	.string "y anotaciones en el monitor del PC.\p"
	.string "- La influencia de las ondas\n"
	.string "magnéticas en la evolución de los\l"
	.string "POKéMON - ...\p"
	.string "... ... ... ... ... ...\p"
	.string "Cualquiera entiende esto...$"



RocketWarehouseSoldado::
lock
faceplayer
applymovement 4, RocketWarehouse_Soldadomove2
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouse_Soldadomove1
waitmovement 0x0
msgbox RocketWarehouseSoldado_Text_Soldado1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LYDIA_1, RocketWarehouseSoldado_Text_Soldado2
msgbox RocketWarehouseSoldado_Text_Soldado3, MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 3
release
end

RocketWarehouseSoldad2::
lock
faceplayer
applymovement 4, RocketWarehouse_Soldadomove3
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouse_Soldadomove1
waitmovement 0x0
msgbox RocketWarehouseSoldado_Text_Soldado1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LYDIA_1, RocketWarehouseSoldado_Text_Soldado2
msgbox RocketWarehouseSoldado_Text_Soldado3, MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 3
release
end

RocketWarehouseSoldad3::
lock
faceplayer
applymovement 4, RocketWarehouse_Soldadomove4
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouse_Soldadomove1
waitmovement 0x0
msgbox RocketWarehouseSoldado_Text_Soldado1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LYDIA_1, RocketWarehouseSoldado_Text_Soldado2
msgbox RocketWarehouseSoldado_Text_Soldado3, MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 3
release
end

RocketWarehouseSoldad4::
lock
faceplayer
applymovement 4, RocketWarehouse_Soldadomove5
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouse_Soldadomove6
waitmovement 0x0
msgbox RocketWarehouseSoldado_Text_Soldado1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LYDIA_1, RocketWarehouseSoldado_Text_Soldado2
msgbox RocketWarehouseSoldado_Text_Soldado3, MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 3
release
end


RocketWarehouseSoldado_Text_Soldado1:
.string "No tan rápido, ATLAS me ha pedido\n"
	.string "expresamente que me encargue de los\l"
	.string "4 RECLUTAS novatos, solo\l"
	.string "venciéndome te ganarás el derecho\l"
	.string "de competir por una misión\l"
	.string "exclusiva, de momento 2 de los 3\l"
	.string "RECLUTAS ya han perdido esa\l"
	.string "oportunidad puesto que les he\l"
	.string "vencido.\l"
	.string "¡Tú eres el último por examinar!$"


RocketWarehouseSoldado_Text_Soldado2:
.string "Vaya, tenemos dos RECLUTAS que\n"
	.string "valen la pena para variar.$"


RocketWarehouseSoldado_Text_Soldado3:
.string "ATLAS te está esperando junto con\n"
	.string "el otro ROCKET que ha podido\l"
	.string "vencerme, pasa y conoce los\l"
	.string "detalles de tu misión.$"


RocketWarehouse_Soldadomove1:
walk_in_place_right
step_end

RocketWarehouse_Soldadomove2:
face_left
step_end

RocketWarehouse_Soldadomove3:
face_left
walk_left
step_end

RocketWarehouse_Soldadomove4:
face_left
walk_left
walk_left
step_end

RocketWarehouse_Soldadomove5:
face_down
step_end

RocketWarehouse_Soldadomove6:
walk_in_place_up
step_end


RocketWarehouseMisionAtlas::
lock
faceplayer
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouseMisionAtlasmove1
applymovement 6, RocketWarehouseMisionAtlasmove2
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas1 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouseMisionAtlasmove2
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas2 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouseMisionAtlasmove3
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas3 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouseMisionAtlasmove4
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas4 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouseMisionAtlasmove5
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas5 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouseMisionAtlasmove6
waitmovement 0x0
applymovement 6, RocketWarehouseMisionAtlasmove2
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas6 MSGBOX_AUTOCLOSE
lock
faceplayer
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouseMisionAtlasmove8
applymovement 17, RocketWarehouseMisionAtlasmove7
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_1, RocketWarehouse_Text_MisionAtlas8
msgbox RocketWarehouse_Text_MisionAtlas9 MSGBOX_DEFAULT
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouseMisionAtlasmove9
applymovement 17, RocketWarehouseMisionAtlasmove9
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas10 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, RocketWarehouseMisionAtlasmove9.2
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas10_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, RocketWarehouseMisionAtlasmove9.1
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas10_2 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouseMisionAtlasmove9.3
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas10_3 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, RocketWarehouseMisionAtlasmove9.4
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas10_4 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouseMisionAtlasmove9.5
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas10_5 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouseMisionAtlasmove9.5
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas10_6 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_TMHM
givemon SPECIES_SENTRET, 5, ITEM_NONE
waitfanfare
msgbox RocketWarehouse_Text_MisionAtlas11 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouseMisionAtlasmove2
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas12 MSGBOX_AUTOCLOSE
applymovement 17, RocketWarehouseMisionAtlasmove10
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas13 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouseMisionAtlasmove8
applymovement 17, RocketWarehouseMisionAtlasmove7
msgbox RocketWarehouse_Text_MisionAtlas14 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
fadescreen 1
delay 30
removeobject 17
fadescreen 0
setflag FLAG_HIDE_ROUTE_101_BIRCH
setflag FLAG_HIDE_ROUTE_103_BIRCH
setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_2
setflag FLAG_HIDE_ROUTE_120_GABBY_AND_TY_2
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_2
setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_3
setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_1
setvar VAR_UNUSED_0x40F7, 4
release
end

RocketWarehouseMisionAtlasmove9.5:
walk_in_place_left
step_end

RocketWarehouseMisionAtlasmove9.4:
walk_slow_down
step_end

RocketWarehouseMisionAtlasmove9.3:
walk_slow_up
step_end

RocketWarehouseMisionAtlasmove9.2:
face_right
step_end

RocketWarehouseMisionAtlasmove9.1:
walk_in_place_right
step_end

RocketWarehouse_Text_MisionAtlas1:
.string "ATLAS: Bien, parece que no\n"
	.string "esperamos a nadie más, seréis\l"
	.string "vosotros dos los que tendréis la\l"
	.string "oportunidad de comenzar con buen\l"
	.string "pie en esta organización, os daré\l"
	.string "los detalles de vuestra misión,\l"
	.string "escuchad.$"

RocketWarehouse_Text_MisionAtlas2:
.string "Al norte de esta isla, en la ZONA\n"
	.string "RECREO, ha instalado recientemente\l"
	.string "su casa la nueva CÓNSUL del lugar,\l"
	.string "encargada de tramitar las\l"
	.string "relaciones de KANTO con las ISLAS\l"
	.string "SETE.\l"
	.string "En su día nosotros movimos ciertos\l"
	.string "hilos para lograr que la enviasen\l"
	.string "aquí, todo para obtener carta\l"
	.string "blanca para realizar todo tipo de\l"
	.string "exportaciones a KANTO sin pasar\l"
	.string "aduanas ni ningún tipo de\l"
	.string "impuesto, lo cual nos ha venido\l"
	.string "perfecto para nuestro negocio.$"

RocketWarehouse_Text_MisionAtlas3:
.string "Sin embargo, últimamente ha\n"
	.string "cortado su relación con nosotros,\l"
	.string "y tenemos indicios de que pueda en\l"
	.string "cualquier momento informar a las\l"
	.string "autoridades de KANTO de nuestros\l"
	.string "movimientos en las ISLAS SETE, lo\l"
	.string "que disminuiría mucho la\l"
	.string "rentabilidad de nuestro negocio\l"
	.string "aquí.$"

RocketWarehouse_Text_MisionAtlas4:
.string "Vuestra misión es clara, ir allí y\n"
	.string "hacerle recordar gracias a quién\l"
	.string "está donde actualmente está, es\l"
	.string "decir nosotros.\l"
	.string "Hacedle ver que tiene nuestro\l"
	.string "apoyo, ofrecedle ser accionista de\l"
	.string "nuestra empresa, debido a su\l"
	.string "posición dejadle claro que\l"
	.string "dispondrá de una serie de\l"
	.string "privilegios y ofertas\l"
	.string "especiales.$"

RocketWarehouse_Text_MisionAtlas5:
.string "Si aún así se niega, y deja claro\n"
	.string "que dará el chivatazo a las\l"
	.string "autoridades de nuestros\l"
	.string "movimientos, no le déis cuartel,\l"
	.string "nadie amenaza al TEAM ROCKET, en\l"
	.string "ese caso deberéis silenciarla\l"
	.string "derrotándola en un combate, acabad\l"
	.string "con todos sus POKÉMON TIPO AGUA\l"
	.string "para evitar que huya usando SURF,\l"
	.string "una vez hecho eso, nosotros nos\l"
	.string "encargaremos del resto.$"

RocketWarehouse_Text_MisionAtlas6:
.string "Suficiente charla, antes de daros\n"
	.string "las herramientas para afrontar la\l"
	.string "misión, quiero veros combatir aquí\l"
	.string "y ahora, debo asegurarme en\l"
	.string "persona de que cumplís un nivel\l"
	.string "mínimo de competencia.\l"
	.string "¡Mostradme lo que habéis\l"
	.string "aprendido!$"

RocketWarehouse_Text_MisionAtlas7:
.string "Ya he derrotado a los otros dos\n"
	.string "reclutas antes, no hay forma de\l"
	.string "que tú puedas derrotarme.\l"
	.string "¡He entrenado más que tú!$"

RocketWarehouse_Text_MisionAtlas8:
.string "¿Cómo?\n"
	.string "¿Tu ZUBAT es más fuerte que el\l"
	.string "mío?$"

RocketWarehouse_Text_MisionAtlas9:
.string "No tiene sentido, ¿por qué has\n"
	.string "vencido si partimos de las mismas\l"
	.string "condiciones?$"

RocketWarehouse_Text_MisionAtlas10:
.string "Suficiente, espero que entrenéis\n"
	.string "más por los alrededores, os\l"
	.string "vendría bien otro POKÉMON aparte\l"
	.string "de ZUBAT si queréis ser\l"
	.string "competentes. Os informo de que por\l"
	.string "el prado podréis encontrar\l"
	.string "MEOWTH, PIDGEY, RATTATA, SENTRET e\l"
	.string "incluso VULPIX o PSYDUCK si sabéis\l"
	.string "buscar, y es aquí donde viene la\l"
	.string "segunda parte de la misión.\l"
	.string "Para llegar a ZONA RECREO\l"
	.string "necesitáis tener un POKÉMON con\l"
	.string "SURF, es sabido que los SENTRET\l"
	.string "del prado son famosos por conocer\l"
	.string "este movimiento...$"

RocketWarehouse_Text_MisionAtlas10_1:
.string "Antiguamente, los ROCKET atrapaban uno\n"
	.string "del PRADO, con sus propias manos.$"

RocketWarehouse_Text_MisionAtlas10_2:
.string "Pero esta práctica, que tenía el\n"
	.string "objetivo de instruir al ROCKET en\l"
	.string "cualidades tan importantes como la\l"
	.string "improvisación, el adaptarse y no dar\l"
	.string "nada por sentado... dejó de hacerse.$"

RocketWarehouse_Text_MisionAtlas10_3:
.string "En un inicio por ser ineficiente: podían\n"
	.string "atraparse ingentes cantidades de\l"
	.string "SENTRET a la vez y usarlas como\l"
	.string "reserva para nuevos reclutas, pero...$"

RocketWarehouse_Text_MisionAtlas10_4:
.string "El principal motivo son las nuevas\n"
	.string "generaciones: lo quieren todo hecho,\l"
	.string "son incapaces de soportar una pequeña\l"
	.string "incomodidad que sirve a un fin mayor.$"

RocketWarehouse_Text_MisionAtlas10_5:
.string "Al TEAM ROCKET, como organización que\n"
	.string "pretende seguir vigente, no le queda\l"
	.string "más remedio que ceder. Si la gente\l"
	.string "juzga un libro por su portada, no habrá\l"
	.string "más remedio que colorearla, aunque sea\l"
	.string "un poco. Tal vez así aquellos que solo\l"
	.string "aspiran a alargar la vista, puedan\l"
	.string "adentrarse en la superficie.$"

RocketWarehouse_Text_MisionAtlas10_6:
.string "Dicho esto, aquí tenéis vuestros\n"
	.string "SENTRET.$"

RocketWarehouse_Text_MisionAtlas11:
	.string "No debéis preocuparos por tener\n"
	.string "problemas al usar SURF, somos del\l"
	.string "TEAM ROCKET, no estamos sujetos a\l"
	.string "ese estúpido código de tener\l"
	.string "determinadas medallas para usar\l"
	.string "MOs, las usaréis cuando lo\l"
	.string "requiráis y punto.$"

RocketWarehouse_Text_MisionAtlas12:
.string "Ya no tengo nada más que deciros,\n"
	.string "volved aquí cuando hayáis cumplido\l"
	.string "la misión y recordad: las\l"
	.string "oportunidades hay que cogerlas en el\l"
	.string "momento o perderlas para siempre.\l"
	.string "Podéis retiraros.$"

RocketWarehouse_Text_MisionAtlas13:
.string "¡A LA ÓRDEN ADMIN.JEFE ATLAS!$"

RocketWarehouse_Text_MisionAtlas14:
.string "Nos vemos en CASA CÓNSUL, no\n"
	.string "voy a permitir que otro RECLUTA se\l"
	.string "me adelante.\l"
	.string "¡Yo le dejaré las cosas claras y\l"
	.string "obtendré la recompensa por cumplir\l"
	.string "la misión! ¡No te necesito!$"

RocketWarehouseMisionAtlasmove1:
walk_up
walk_up
walk_up
walk_up
walk_right
step_end

RocketWarehouseMisionAtlasmove2:
walk_in_place_left
step_end

RocketWarehouseMisionAtlasmove3:
walk_up
step_end

RocketWarehouseMisionAtlasmove4:
walk_down
face_left
step_end

RocketWarehouseMisionAtlasmove5:
face_right
step_end

RocketWarehouseMisionAtlasmove6:
face_right
step_end

RocketWarehouseMisionAtlasmove7:
face_down
step_end

RocketWarehouseMisionAtlasmove8:
face_up
step_end

RocketWarehouseMisionAtlasmove9:
face_right
step_end

RocketWarehouseMisionAtlasmove10:
walk_in_place_right
step_end



RocketWarehouse_Vuelta_MisionAtlas::
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouse_Vuelta_MisionAtlas_move1
waitmovement 0x0
delay 20
fadescreen 1
clearflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
delay 20
addobject 17
fadescreen 0
showmoneybox 0, 0
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas1 MSGBOX_AUTOCLOSE
playse SE_SHOP
addmoney 25000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas2 MSGBOX_DEFAULT
waitfanfare
delay 40
hidemoneybox
delay 40
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas3 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouse_Vuelta_MisionAtlas_move2
waitmovement 0x0
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas4 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouse_Vuelta_MisionAtlas_move2
waitmovement 0x0
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas5 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouse_Vuelta_MisionAtlas_move3
waitmovement 0x0
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas6 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouse_Vuelta_MisionAtlas_move2
waitmovement 0x0
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas7 MSGBOX_AUTOCLOSE
applymovement 17, RocketWarehouse_Vuelta_MisionAtlas_move4
waitmovement 0x0
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas8 MSGBOX_AUTOCLOSE
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas9 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouse_Vuelta_MisionAtlas_move5
waitmovement 0x0
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas10 MSGBOX_AUTOCLOSE
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas11 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas12 MSGBOX_DEFAULT
giveegg SPECIES_HOUNDOUR
waitfanfare
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas13 MSGBOX_AUTOCLOSE
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas14 MSGBOX_AUTOCLOSE
applymovement 17, RocketWarehouse_Vuelta_MisionAtlas_move4
waitmovement 0x0
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas15 MSGBOX_AUTOCLOSE
fadescreen 1
setflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
delay 20
removeobject 17
fadescreen 0
setvar VAR_UNUSED_0x40F7, 6
release
end

RocketWarehouse_Text_Vuelta_MisionAtlas1:
.string "ATLAS: Bien. Habéis vuelto, como\n"
	.string "ya sabréis del discurso de\l"
	.string "entrada, en el TEAM ROCKET sabemos\l"
	.string "recompensar la meritocracia, damos\l"
	.string "prioridad al resultado final y\l"
	.string "debido a que en este caso el\l"
	.string "balance ha sido positivo, aquí\l"
	.string "tenéis vuestra recompensa.$"


RocketWarehouse_Text_Vuelta_MisionAtlas2:
.string "¡{PLAYER} OBTUVO 25000 POKÉS!$"


RocketWarehouse_Text_Vuelta_MisionAtlas3:
.string "¡ANDRA OBTUVO 25000 POKÉS!$"


RocketWarehouse_Text_Vuelta_MisionAtlas4:
.string "ATLAS: Con eso podréis costearos\n"
	.string "ciertos recursos para vuestros\l"
	.string "POKÉMON y así mejorar las\l"
	.string "prestaciones de vuestro\l"
	.string "equipo. Espero que no lo\l"
	.string "malgastéis en tonterías, tener más\l"
	.string "dinero da mayor libertad de\l"
	.string "elección, pero de nada sirve si en\l"
	.string "última instancia lo ponéis en\l"
	.string "movimiento de la forma incorrecta\l"
	.string "o no aprovecháis lo que adquirís\l"
	.string "gracias a él.$"


RocketWarehouse_Text_Vuelta_MisionAtlas5:
.string "ATLAS: Dicho esto, habéis cumplido\n"
	.string "la misión, pero de forma\l"
	.string "subóptima.$"


RocketWarehouse_Text_Vuelta_MisionAtlas6:
.string "ATLAS: Debéis saber que aquí\n"
	.string "actuamos como un solo cuerpo, eso\l"
	.string "nos hace fuertes, lejos de ser un\l"
	.string "acto de cobardía, es un acto de\l"
	.string "inteligencia y entendimiento de\l"
	.string "que dos mentes valen más que una.\l"
	.string "Ninguna organización grande se ha\l"
	.string "formado a partir de un único\l"
	.string "individuo.$"


RocketWarehouse_Text_Vuelta_MisionAtlas7:
.string "ATLAS: Creí haber dejado claro que\n"
	.string "ambos negociaríais a la vez con la\l"
	.string "CÓNSUL, cubriéndoos las espaldas\l"
	.string "en caso de torcerse las cosas.\l"
	.string "¿Cómo es ANDRA, que no esperaste a\l"
	.string "{PLAYER} y decidiste entrar sola al\l"
	.string "lugar?$"


RocketWarehouse_Text_Vuelta_MisionAtlas8:
.string "ANDRA: Creí que mis habilidades\n"
	.string "eran suficientes para afrontar el\l"
	.string "reto SR.ATLAS, no conté con tener\l"
	.string "que lidiar con un MAREEP y su\l"
	.string "IMPACTRUENO, me equivoqué.$"


RocketWarehouse_Text_Vuelta_MisionAtlas9:
.string "ATLAS: ... ...\n"
	.string "Has mostrado valor e iniciativa\l"
	.string "propia al entrar tú sola, y\l"
	.string "admitido tu error, por el momento\l"
	.string "con eso basta, pero que te sirva\l"
	.string "de ejemplo y experiencia.$"


RocketWarehouse_Text_Vuelta_MisionAtlas10:
.string "ATLAS: Dicho esto, zarparéis de\n"
	.string "inmediato a KANTO, necesitamos\l"
	.string "cada vez más efectivos en nuestro\l"
	.string "principal centro financiero, un\l"
	.string "barco en el puerto os espera.$"


RocketWarehouse_Text_Vuelta_MisionAtlas11:
.string "ATLAS: ... ...\n"
	.string "No quiero que os vayáis de esta\l"
	.string "isla sin ningún recuerdo que os\l"
	.string "vincule con vuestra pequeña\l"
	.string "estancia en ella, es probable que\l"
	.string "volváis en algún momento, pero\l"
	.string "mientras tanto, cuidad de esto.$"


RocketWarehouse_Text_Vuelta_MisionAtlas12:
.string "¡{PLAYER} OBTUVO UN HUEVO POKÉMON!$"


RocketWarehouse_Text_Vuelta_MisionAtlas13:
.string "¡ANDRA OBTUVO UN HUEVO POKÉMON!$"


RocketWarehouse_Text_Vuelta_MisionAtlas14:
.string "ATLAS: Acabáis de recibir dos\n"
	.string "huevos que contienen preciados\l"
	.string "POKÉMON de JOHTO, difíciles de\l"
	.string "encontrar por estas zonas, no\l"
	.string "tengo nada más que deciros. Id al\l"
	.string "puerto cuanto antes, a vuestra\l"
	.string "llegada a KANTO se os darán todos\l"
	.string "los detalles sobre vuestras nuevas\l"
	.string "misiones.$"


RocketWarehouse_Text_Vuelta_MisionAtlas15:
.string "ANDRA: ¡ENTENDIDO, SIR!$"

RocketWarehouse_Vuelta_MisionAtlas_move1:
walk_up
walk_up
walk_up
walk_right
step_end

RocketWarehouse_Vuelta_MisionAtlas_move2:
walk_in_place_left
step_end

RocketWarehouse_Vuelta_MisionAtlas_move3:
walk_slow_down
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_up
walk_in_place_left
step_end

RocketWarehouse_Vuelta_MisionAtlas_move4:
walk_in_place_right
step_end

RocketWarehouse_Vuelta_MisionAtlas_move5:
walk_slow_down
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_up
walk_in_place_left
step_end
