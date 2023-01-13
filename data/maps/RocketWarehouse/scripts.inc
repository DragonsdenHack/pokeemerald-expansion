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
end



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
	.string "expresamente que me encarge de los\l"
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
msgbox RocketWarehouse_Text_MisionAtlas1 MSGBOX_NPC
applymovement 6, RocketWarehouseMisionAtlasmove2
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas2 MSGBOX_NPC
applymovement 6, RocketWarehouseMisionAtlasmove3
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas3 MSGBOX_NPC
applymovement 6, RocketWarehouseMisionAtlasmove4
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas4 MSGBOX_NPC
applymovement 6, RocketWarehouseMisionAtlasmove5
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas5 MSGBOX_NPC
applymovement 6, RocketWarehouseMisionAtlasmove6
waitmovement 0x0
applymovement 6, RocketWarehouseMisionAtlasmove2
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas6 MSGBOX_NPC
lock
faceplayer
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouseMisionAtlasmove8
applymovement 17, RocketWarehouseMisionAtlasmove7
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas7 MSGBOX_NPC
trainerbattle_no_intro TRAINER_ANDRA_1, RocketWarehouse_Text_MisionAtlas8
msgbox RocketWarehouse_Text_MisionAtlas9 MSGBOX_NPC
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouseMisionAtlasmove9
applymovement 17, RocketWarehouseMisionAtlasmove9
msgbox RocketWarehouse_Text_MisionAtlas10 MSGBOX_NPC
delay 20
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_POKE_BALL, 15
waitfanfare
msgbox RocketWarehouse_Text_MisionAtlas11 MSGBOX_NPC
applymovement 6, RocketWarehouseMisionAtlasmove2
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas12 MSGBOX_NPC
applymovement 17, RocketWarehouseMisionAtlasmove10
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas13 MSGBOX_NPC
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouseMisionAtlasmove8
applymovement 17, RocketWarehouseMisionAtlasmove7
msgbox RocketWarehouse_Text_MisionAtlas14 MSGBOX_NPC
setflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
fadescreen 1
delay 30
removeobject 17
fadescreen 0
setvar VAR_UNUSED_0x40F7, 4
release
end

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
	.string "competentes, os informo de que por\l"
	.string "el prado podréis encontrar\l"
	.string "MEOWTH, PIDGEY, RATTATA, SENTRET e\l"
	.string "incluso VULPIX o PSYDUCK si sabéis\l"
	.string "buscar, y es aquí donde viene la\l"
	.string "segunda parte de la misión.\l"
	.string "Para llegar a ZONA RECREO\l"
	.string "necesitáis tener un POKÉMON con\l"
	.string "SURF, es sabido que los SENTRET\l"
	.string "del prado son famosos por conocer\l"
	.string "este movimiento, lo que haréis\l"
	.string "será capturar uno que os sirva\l"
	.string "para llegar hasta ahí, usad esto\l"
	.string "para ello.$"

RocketWarehouse_Text_MisionAtlas11:
.string "Con esto podréis atrapar un\n"
	.string "SENTRET salvaje, más os vale\l"
	.string "hacerlo antes de gastar las 15 POKÉ\l"
	.string "BALL, recordad que las\l"
	.string "oportunidades hay que cogerlas en\l"
	.string "el momento o perderlas para\l"
	.string "siempre.\l"
	.string "No debéis preocuparos por tener\l"
	.string "problemas al usar SURF, somos del\l"
	.string "TEAM ROCKET, no estamos sujetos a\l"
	.string "ese estúpido código de tener\l"
	.string "determinadas medallas para usar\l"
	.string "MOs, las usaréis cuando lo\l"
	.string "requiráis y punto.$"

RocketWarehouse_Text_MisionAtlas12:
.string "Ya no tengo nada más que deciros,\n"
	.string "volved aquí cuando hayáis cumplido\l"
	.string "vuestra misión, podéis retiraros.$"

RocketWarehouse_Text_MisionAtlas13:
.string "¡A LA ÓRDEN ADMIN.JEFE ATLAS!$"

RocketWarehouse_Text_MisionAtlas14:
.string "Nos vemos en CASA CÓNSUL, no\n"
	.string "voy a permitir que otro RECLUTA se\l"
	.string "me adelante.\l"
	.string "¡Yo le dejaré las cosas claras y\l"
	.string "obtendré la recompensa por cumplir\l"
	.string "la misión, no te necesito!$"


RocketWarehouseMisionAtlasmove1:
walk_up
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

	