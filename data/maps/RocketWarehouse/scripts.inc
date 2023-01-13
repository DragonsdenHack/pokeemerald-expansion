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
applymovement 4, move2
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, move1
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
applymovement 4, move3
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, move1
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
applymovement 4, move4
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, move1
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
applymovement 4, move5
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, move6
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


move1:
walk_in_place_right
step_end

move2:
face_left
step_end

move3:
face_left
walk_left
step_end

move4:
face_left
walk_left
walk_left
step_end

move5:
face_down
step_end

move6:
walk_in_place_up
step_end
	