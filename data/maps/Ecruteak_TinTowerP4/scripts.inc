Ecruteak_TinTowerP4_MapScripts::
	.byte 0

TinTowerP4_1::
end



TinTowerP4_2::
end



TinTowerP4_3::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp4_Text_3, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp4_Text_3:
.string "Como las flores, vamos muriendo,\n"
.string "pero todo lo que hacemos en vida\l"
.string "tiene su eco en la eternidad.$"



TinTowerP4_4::
end



TinTowerP4_5::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp4_Text_5, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp4_Text_5:
.string "Nuestra psicología conspira contra\n"
.string "nosotros mismos: a las personas\l"
.string "nos gusta ir hacia un destino\l"
.string "preciso antes que enfrentarnos a\l"
.string "cierto grado de incertidumbre,\l"
.string "aunque este sea beneficioso.$"



TinTowerP4_6::
end



TinTowerP4_EventScript_Monje::
	trainerbattle_single TRAINER_MELINA, TinTowerP4_Text_MonjeIntro, TinTowerP4_Text_MonjeDefeated
	msgbox TinTowerP4_Text_MonjePostBattle, MSGBOX_AUTOCLOSE
	end



TinTowerP4_EventScript_ReceiveHonedge::
    lock
    faceplayer
	checkmoncatch SPECIES_HONEDGE
	goto_if_eq VAR_RESULT, FALSE, TinTowerP4_EventScript_TakeHonedge 
	msgbox TinTowerP4_Text_4, MSGBOX_DEFAULT
	release
	end



TinTowerP4_EventScript_TakeHonedge::
    msgbox TinTowerP4_Text_TakeHonedge MSGBOX_DEFAULT
	msgbox TinTowerP4_Text_TakeHonedge2 MSGBOX_DEFAULT
	msgbox TinTowerP4_Text_TakeHonedge3 MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox TinTowerP4_Text_MensajeHonedge, MSGBOX_DEFAULT
	givemon SPECIES_HONEDGE, 10, ITEM_GHOST_GEM
	waitfanfare  
	release
	end 



TinTowerP4_Text_TakeHonedge:
    .string "No es muy común ver a jóvenes como\n"
	.string "tú en estos días que corren.$"



TinTowerP4_Text_TakeHonedge2:
	.string "Puedo ver el respeto que profesas\n"
	.string "hacia este lugar. A pesar de estar\l"
	.string "rodeado de tentaciones, dada tu\l"
	.string "posición, no has olvidado de donde\l"
	.string "vienes.$"



TinTowerP4_Text_TakeHonedge3:
	.string "Por ello, te hago entrega de este\n"
	.string "POKÉMON. Si lo entrenas bien, te\l"
	.string "servirá de escudo ante la más\l"
	.string "adversa de las situaciones.$"



TinTowerP4_Text_MensajeHonedge:
.string "¡OBTUVISTE UN HONEDGE AL NV.10!$"


TinTowerP4_Text_4:
    .string "HONEDGE puede servirte de escudo\n"
	.string "ante la más adversa de las\l"
	.string "situaciones, algo a tener en\l"
	.string "cuenta, dado el entorno en el que\l"
	.string "te mueves.$"
